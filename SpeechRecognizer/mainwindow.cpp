#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTime>


using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    setWindowTitle("CMUSphinx Model Tester.." + QString(QChar(0x00A9)) + " Chathux");


    ui->lblListeningBanner->setVisible(false);

    ui->teHistory->setReadOnly(true);


    hmmDirPath = nullptr;
    languageModelPath = nullptr;
    dictionaryPath = nullptr;

    ui->leHmmDir->setText("E:/Data/SLIIT/Fourth Year - 1st Semester/CDAP-I/AppLibraries/cmusphinx/models/sin-sl-v2/AcousticModel/model_parameters/sinhala.ci_cont");
    ui->leLanguageModel->setText("E:/Data/SLIIT/Fourth Year - 1st Semester/CDAP-I/AppLibraries/cmusphinx/models/sin-sl-v2/LanguageModel/sinhala.lm");
    ui->leDictionary->setText("E:/Data/SLIIT/Fourth Year - 1st Semester/CDAP-I/AppLibraries/cmusphinx/models/sin-sl-v2/Dictionary/sinhala.dic");




    connect(ui->btnStart, SIGNAL(clicked()), this, SLOT(handleStartButtonClicked()));
    connect(ui->btnSetModels, SIGNAL(clicked()), this, SLOT(handleSetModelsButtonClicked()));


    currentSphinxThread = nullptr;




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleSpeechRecognized(const char *text)
{


    QString *qText = new QString(text);


    QString timeStamp = QTime::currentTime().toString("hh:mm:ss");

    if(qText->isNull() || qText->length() == 0)
    {
        qText = new QString("<s style=\"color:#999999\"> Filler~Noise </s>");
    }else{

        ui->lblRecognizedWord->setText( " " + timeStamp + " : " + *qText);
    }

    ui->teHistory->append( timeStamp +" : " + *qText);


}

void MainWindow::handleStartButtonClicked()
{

    se = new SphinxEngine(hmmDirPath,languageModelPath,dictionaryPath);


    connect(se, SIGNAL(speechRecognized(const char*)), this, SLOT(handleSpeechRecognized(const char*)));
    connect(this, SIGNAL(startRecognition()), se, SLOT(handleStartRecognition()));


    currentSphinxThread = new QThread();
    se->moveToThread(currentSphinxThread);
    currentSphinxThread->start();

    emit startRecognition();


    ui->btnStart->setEnabled(false);
    ui->lblListeningBanner->setVisible(true);

}

void MainWindow::handleSetModelsButtonClicked()
{

    if(currentSphinxThread != nullptr && currentSphinxThread->isRunning())
    {
        currentSphinxThread->terminate();
    }

    if(currentSphinxThread == nullptr || currentSphinxThread != nullptr && currentSphinxThread->isFinished())
    {

        string tmpStr_HmmDirPath = ui->leHmmDir->text().toStdString();
        string tmpStr_LanguageModelPath = ui->leLanguageModel->text().toStdString();
        string tmpStr_DictionaryPath = ui->leDictionary->text().toStdString();

        //delete hmmDirPath;
        //delete languageModelPath;
        //delete dictionaryPath;

        hmmDirPath = new char[tmpStr_HmmDirPath.length()];
        languageModelPath = new char[tmpStr_LanguageModelPath.length()];
        dictionaryPath = new char[tmpStr_DictionaryPath.length()];


        strcpy(hmmDirPath, tmpStr_HmmDirPath.c_str());
        strcpy(languageModelPath, tmpStr_LanguageModelPath.c_str());
        strcpy(dictionaryPath, tmpStr_DictionaryPath.c_str());

        cout << "PATHs have been set.." << endl;


        ui->btnStart->setEnabled(true);
        ui->lblListeningBanner->setVisible(false);

        ui->lblRecognizedWord->setText("");
        ui->teHistory->setText("");
    }
}

