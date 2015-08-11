#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sphinxengine.h"
#include <QThread>

#include <iostream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QThread *currentSphinxThread;
    SphinxEngine *se;

    char* hmmDirPath;
    char* languageModelPath;
    char* dictionaryPath;


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void setRecognizedWord(const char* word);

public slots:
    void handleSpeechRecognized(const char *text);
    void handleStartButtonClicked();

    void handleSetModelsButtonClicked();

signals:
    void startRecognition();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
