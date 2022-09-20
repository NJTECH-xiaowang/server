/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTextEdit *record;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTextEdit *msg;
    QPushButton *setListen;
    QPushButton *close;
    QPushButton *sendMsg;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(867, 679);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        record = new QTextEdit(groupBox);
        record->setObjectName(QStringLiteral("record"));

        gridLayout->addWidget(record, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 3);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        msg = new QTextEdit(groupBox_2);
        msg->setObjectName(QStringLiteral("msg"));

        gridLayout_2->addWidget(msg, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 3);

        setListen = new QPushButton(centralWidget);
        setListen->setObjectName(QStringLiteral("setListen"));

        gridLayout_3->addWidget(setListen, 2, 0, 1, 1);

        close = new QPushButton(centralWidget);
        close->setObjectName(QStringLiteral("close"));

        gridLayout_3->addWidget(close, 2, 1, 1, 1);

        sendMsg = new QPushButton(centralWidget);
        sendMsg->setObjectName(QStringLiteral("sendMsg"));

        gridLayout_3->addWidget(sendMsg, 2, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        setListen->raise();
        close->raise();
        sendMsg->raise();
        groupBox->raise();
        groupBox_2->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 867, 32));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\347\224\250\346\210\267\344\277\241\346\201\257", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\345\217\221\351\200\201\344\277\241\346\201\257", Q_NULLPTR));
        setListen->setText(QApplication::translate("MainWindow", "\345\274\200\345\220\257\346\234\215\345\212\241\345\231\250", Q_NULLPTR));
        close->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\234\215\345\212\241\345\231\250", Q_NULLPTR));
        sendMsg->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\344\277\241\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
