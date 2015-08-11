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


    return a.exec();
}


