#include "sphinxengine.h"

using namespace std;

SphinxEngine::SphinxEngine()
{

}

SphinxEngine::SphinxEngine(const char* hmmDir, const char* lm, const char *dict)
{

    config = NULL;
    ps = NULL;

    config = cmd_ln_init(NULL, ps_args(), TRUE,
        "-hmm", hmmDir ,
        "-lm", lm,
        "-dict", dict,
        NULL);
    if (config == NULL)
    {
        cout << "ERROR: cmd_ln_init failed" << endl;
    }
    else
    {
        ps = ps_init(config);
        if (ps == NULL)
        {
            cout << "ps_init failed" << endl;
        }
    }

}

void SphinxEngine::handleStartRecognition()
{

    recognize_from_microphone();


}


void SphinxEngine::recognize_from_file()
{

    FILE *fh;
    char const *hyp, *uttid;
    int16 buf[512];
    int rv;
    int32 score;

    //E:/Data/SLIIT/Fourth Year - 1st Semester/CDAP-I/AppLibraries/cmusphinx/models/en-us_simple/AcousticModel/simple_001.wav"

    fh = fopen("E:/Data/SLIIT/Fourth Year - 1st Semester/CDAP-I/AppLibraries/cmusphinx/models/sin-sl/AcousticModel/wav/sinhala_001.wav", "rb");
    if (fh == NULL)
    {
        cout << "Error 1" << endl;
        return;
    }

    rv = ps_start_utt(ps);
    if (rv < 0)
    {
        cout << "Error 2" << endl;
        return;
    }

    while (!feof(fh)) {
        size_t nsamp;
        nsamp = fread(buf, 2, 512, fh);
        rv = ps_process_raw(ps, buf, nsamp, FALSE, FALSE);
    }
    rv = ps_end_utt(ps);
    if (rv < 0)
    {
        cout << "Error 3" << endl;
        return;
    }
    hyp = ps_get_hyp(ps, &score);
    if (hyp == NULL)
    {
        cout << "Broke====================================================================" << endl;
        return;
    }
    printf("Recognized: %s\n", hyp);

    emit speechRecognized(hyp);

    fclose(fh);
    ps_free(ps);
    cmd_ln_free_r(config);


}


void SphinxEngine::recognize_from_microphone()
{
    if(ps == NULL)
    {
        return;
    }

    //ofstream myfile;
    //myfile.open("E:\\Data\\SLIIT\\Fourth Year - 1st Semester\\CDAP-I\\AppLibraries\\cmusphinx\\testapps\\App1\\res.txt");
    //myfile << "\xEF\xBB\xBF";


    ad_rec_t *ad;
    int16 adbuf[2048];
    uint8 utt_started, in_speech;
    int32 k;
    char const *hyp;

    if ((ad = ad_open_dev(cmd_ln_str_r(config, "-adcdev"),
                          (int) cmd_ln_float32_r(config,
                                                 "-samprate"))) == NULL)
        E_FATAL("Failed to open audio device\n");


    if (ad_start_rec(ad) < 0)
        E_FATAL("Failed to start recording\n");


    if (ps_start_utt(ps) < 0)
        E_FATAL("Failed to start utterance\n");

    utt_started = FALSE;
    printf("READY....\n");
    for (;;) {
        if ((k = ad_read(ad, adbuf, 2048)) < 0)
            E_FATAL("Failed to read audio\n");
        ps_process_raw(ps, adbuf, k, FALSE, FALSE);
        in_speech = ps_get_in_speech(ps);
        if (in_speech && !utt_started) {
            utt_started = TRUE;
            printf("Listening...\n");
        }
        if (!in_speech && utt_started) {
            /* speech -> silence transition, time to start new utterance  */
            ps_end_utt(ps);
            hyp = ps_get_hyp(ps, NULL );
            if (hyp != NULL)
                printf("%s\n", hyp);

                if(hyp != NULL)
                {
                    //myfile << hyp << endl;

                    char *text = new char[strlen(hyp)];
                    strcpy(text, hyp);

                    emit speechRecognized(text);
                }



            if (ps_start_utt(ps) < 0)
                E_FATAL("Failed to start utterance\n");

            utt_started = FALSE;
            printf("READY....\n");
        }

        Sleep(100);

    }
    ad_close(ad);
}
