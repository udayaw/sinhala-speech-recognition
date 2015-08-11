#include "mainwindow.h"
#include <Windows.h>
#include <QApplication>
#include <QThreadPool>
#include <pocketsphinx.h>

#include <fstream>
#include <sphinxbase/err.h>
#include <sphinxbase/ad.h>


#include <iostream>
using namespace std;


cmd_ln_t * config;
ps_decoder_t *ps;
MainWindow *w;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    w = new MainWindow();
    w->show();


    //"-hmm", "E:/Data/SLIIT/Fourth Year - 1st Semester/CDAP-I/AppLibraries/cmusphinx/models/en-us_simple/AcousticModel/en-us-adapt",
    //"-lm", "E:/Data/SLIIT/Fourth Year - 1st Semester/CDAP-I/AppLibraries/cmusphinx/models/en-us_simple/LanguageModel/5400.lm",
    //"-dict", "E:/Data/SLIIT/Fourth Year - 1st Semester/CDAP-I/AppLibraries/cmusphinx/models/en-us_simple/Dictionary/5400.dict",

    /*
    config = cmd_ln_init(NULL, ps_args(), TRUE,
        "-hmm", "E:/Data/SLIIT/Fourth Year - 1st Semester/CDAP-I/AppLibraries/cmusphinx/models/sin-sl/AcousticModel/model_parameters/sinhala.ci_cont",
        "-lm", "E:/Data/SLIIT/Fourth Year - 1st Semester/CDAP-I/AppLibraries/cmusphinx/models/sin-sl/LanguageModel/sinhala.lm",
        "-dict", "E:/Data/SLIIT/Fourth Year - 1st Semester/CDAP-I/AppLibraries/cmusphinx/models/sin-sl/Dictionary/sinhala.dic",
        NULL);
    if (config == NULL)
           return 1;

    ps = ps_init(config);
    if (ps == NULL)
        return 1;

*/




    //recognize_from_microphone();
    //recognize_from_file();

    return a.exec();
}


