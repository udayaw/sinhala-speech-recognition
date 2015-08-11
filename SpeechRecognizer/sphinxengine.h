#include <QObject>

#include <pocketsphinx.h>
#include <fstream>
#include <sphinxbase/err.h>
#include <sphinxbase/ad.h>


#define NOMINMAX
#include <Windows.h>


#include <iostream>


#ifndef SPHINXENGINE_H
#define SPHINXENGINE_H

class SphinxEngine : public QObject
{
Q_OBJECT

private:
    cmd_ln_t * config;
    ps_decoder_t *ps;

public:
    SphinxEngine();
    SphinxEngine(const char* hmmDir, const char* lm, const char *dict);

    void recognize_from_microphone();
    void recognize_from_file();

signals:
    void speechRecognized(const char *word);

public slots:
    void handleStartRecognition();
};

#endif // SPHINXENGINE_H
