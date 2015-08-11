/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *lblListeningBanner;
    QLabel *label_2;
    QLineEdit *leHmmDir;
    QLabel *label_4;
    QLineEdit *leLanguageModel;
    QLabel *label_5;
    QLineEdit *leDictionary;
    QPushButton *btnSetModels;
    QFrame *line;
    QPushButton *btnStart;
    QLabel *label;
    QLabel *label_3;
    QTextEdit *teHistory;
    QLabel *lblRecognizedWord;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(906, 484);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 5, 1, 1);

        lblListeningBanner = new QLabel(centralWidget);
        lblListeningBanner->setObjectName(QStringLiteral("lblListeningBanner"));
        lblListeningBanner->setStyleSheet(QLatin1String("background:rgb(255, 0, 4);\n"
"color:rgb(255, 255, 255);"));

        gridLayout->addWidget(lblListeningBanner, 6, 2, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        leHmmDir = new QLineEdit(centralWidget);
        leHmmDir->setObjectName(QStringLiteral("leHmmDir"));

        gridLayout->addWidget(leHmmDir, 0, 1, 1, 5);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        leLanguageModel = new QLineEdit(centralWidget);
        leLanguageModel->setObjectName(QStringLiteral("leLanguageModel"));

        gridLayout->addWidget(leLanguageModel, 1, 1, 1, 5);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        leDictionary = new QLineEdit(centralWidget);
        leDictionary->setObjectName(QStringLiteral("leDictionary"));

        gridLayout->addWidget(leDictionary, 2, 1, 1, 5);

        btnSetModels = new QPushButton(centralWidget);
        btnSetModels->setObjectName(QStringLiteral("btnSetModels"));

        gridLayout->addWidget(btnSetModels, 2, 6, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 7);

        btnStart = new QPushButton(centralWidget);
        btnStart->setObjectName(QStringLiteral("btnStart"));

        gridLayout->addWidget(btnStart, 5, 0, 2, 2);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        gridLayout->addWidget(label, 7, 0, 1, 3);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 8, 0, 1, 1);

        teHistory = new QTextEdit(centralWidget);
        teHistory->setObjectName(QStringLiteral("teHistory"));
        teHistory->setFont(font);

        gridLayout->addWidget(teHistory, 9, 0, 1, 7);

        lblRecognizedWord = new QLabel(centralWidget);
        lblRecognizedWord->setObjectName(QStringLiteral("lblRecognizedWord"));
        lblRecognizedWord->setFont(font);
        lblRecognizedWord->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"background:rgb(21, 154, 255);"));

        gridLayout->addWidget(lblRecognizedWord, 7, 3, 1, 4);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 906, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        lblListeningBanner->setText(QApplication::translate("MainWindow", "Listening.......", 0));
        label_2->setText(QApplication::translate("MainWindow", "HMM dir", 0));
        label_4->setText(QApplication::translate("MainWindow", "Language Model", 0));
        label_5->setText(QApplication::translate("MainWindow", "Dictionary", 0));
        btnSetModels->setText(QApplication::translate("MainWindow", "SET/STOP", 0));
        btnStart->setText(QApplication::translate("MainWindow", "Start", 0));
        label->setText(QApplication::translate("MainWindow", "Last Detected!!!", 0));
        label_3->setText(QApplication::translate("MainWindow", "History", 0));
        teHistory->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", 0));
        lblRecognizedWord->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
