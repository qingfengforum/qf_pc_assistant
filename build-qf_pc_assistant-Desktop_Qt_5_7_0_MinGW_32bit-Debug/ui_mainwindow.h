/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd_project;
    QAction *actionConfig_project;
    QAction *actionFile_save;
    QAction *actionFile_load;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QComboBox *comboBox_prjName;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_openFolder;
    QPushButton *pushButton_openBinFileFolder;
    QPushButton *pushButton_openServerPrjFolder;
    QPushButton *pushButton_openLocalPrjFolder;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_copy;
    QComboBox *comboBox_drivePath;
    QPushButton *pushButton_refreshDrives;
    QPushButton *pushButton_openTargetForder;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_startCommTool;
    QGroupBox *groupBox_5;
    QPushButton *pushButton_refresh_useableCommPort;
    QComboBox *comboBox_useableCommPort;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(246, 486);
        actionAdd_project = new QAction(MainWindow);
        actionAdd_project->setObjectName(QStringLiteral("actionAdd_project"));
        actionConfig_project = new QAction(MainWindow);
        actionConfig_project->setObjectName(QStringLiteral("actionConfig_project"));
        actionFile_save = new QAction(MainWindow);
        actionFile_save->setObjectName(QStringLiteral("actionFile_save"));
        actionFile_load = new QAction(MainWindow);
        actionFile_load->setObjectName(QStringLiteral("actionFile_load"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 211, 61));
        comboBox_prjName = new QComboBox(groupBox);
        comboBox_prjName->setObjectName(QStringLiteral("comboBox_prjName"));
        comboBox_prjName->setGeometry(QRect(10, 20, 191, 22));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 80, 211, 101));
        pushButton_openFolder = new QPushButton(groupBox_2);
        pushButton_openFolder->setObjectName(QStringLiteral("pushButton_openFolder"));
        pushButton_openFolder->setGeometry(QRect(10, 20, 81, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton_openFolder->setFont(font);
        pushButton_openFolder->setAutoFillBackground(false);
        pushButton_openBinFileFolder = new QPushButton(groupBox_2);
        pushButton_openBinFileFolder->setObjectName(QStringLiteral("pushButton_openBinFileFolder"));
        pushButton_openBinFileFolder->setGeometry(QRect(100, 20, 101, 31));
        pushButton_openServerPrjFolder = new QPushButton(groupBox_2);
        pushButton_openServerPrjFolder->setObjectName(QStringLiteral("pushButton_openServerPrjFolder"));
        pushButton_openServerPrjFolder->setGeometry(QRect(10, 60, 81, 31));
        pushButton_openLocalPrjFolder = new QPushButton(groupBox_2);
        pushButton_openLocalPrjFolder->setObjectName(QStringLiteral("pushButton_openLocalPrjFolder"));
        pushButton_openLocalPrjFolder->setGeometry(QRect(100, 60, 101, 31));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 190, 211, 91));
        pushButton_copy = new QPushButton(groupBox_3);
        pushButton_copy->setObjectName(QStringLiteral("pushButton_copy"));
        pushButton_copy->setGeometry(QRect(10, 50, 191, 31));
        comboBox_drivePath = new QComboBox(groupBox_3);
        comboBox_drivePath->setObjectName(QStringLiteral("comboBox_drivePath"));
        comboBox_drivePath->setGeometry(QRect(10, 20, 81, 21));
        pushButton_refreshDrives = new QPushButton(groupBox_3);
        pushButton_refreshDrives->setObjectName(QStringLiteral("pushButton_refreshDrives"));
        pushButton_refreshDrives->setGeometry(QRect(100, 20, 51, 21));
        pushButton_openTargetForder = new QPushButton(groupBox_3);
        pushButton_openTargetForder->setObjectName(QStringLiteral("pushButton_openTargetForder"));
        pushButton_openTargetForder->setGeometry(QRect(160, 20, 41, 21));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 290, 211, 61));
        pushButton_startCommTool = new QPushButton(groupBox_4);
        pushButton_startCommTool->setObjectName(QStringLiteral("pushButton_startCommTool"));
        pushButton_startCommTool->setGeometry(QRect(20, 20, 181, 31));
        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 360, 211, 61));
        pushButton_refresh_useableCommPort = new QPushButton(groupBox_5);
        pushButton_refresh_useableCommPort->setObjectName(QStringLiteral("pushButton_refresh_useableCommPort"));
        pushButton_refresh_useableCommPort->setGeometry(QRect(140, 20, 61, 21));
        comboBox_useableCommPort = new QComboBox(groupBox_5);
        comboBox_useableCommPort->setObjectName(QStringLiteral("comboBox_useableCommPort"));
        comboBox_useableCommPort->setGeometry(QRect(10, 20, 101, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 246, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionAdd_project);
        menuFile->addAction(actionConfig_project);
        menuFile->addAction(actionFile_save);
        menuFile->addAction(actionFile_load);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "qf pc assistant", 0));
        actionAdd_project->setText(QApplication::translate("MainWindow", "add project", 0));
        actionConfig_project->setText(QApplication::translate("MainWindow", "config project", 0));
        actionFile_save->setText(QApplication::translate("MainWindow", "save", 0));
        actionFile_load->setText(QApplication::translate("MainWindow", "load", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "project", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "open folder", 0));
        pushButton_openFolder->setText(QApplication::translate("MainWindow", "src code", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_openBinFileFolder->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>open bin file folder</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButton_openBinFileFolder->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>open bin file folder.</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        pushButton_openBinFileFolder->setText(QApplication::translate("MainWindow", "bin file", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_openServerPrjFolder->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>open bin file folder</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButton_openServerPrjFolder->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>open bin file folder.</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        pushButton_openServerPrjFolder->setText(QApplication::translate("MainWindow", "server prj", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_openLocalPrjFolder->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>open bin file folder</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButton_openLocalPrjFolder->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>open bin file folder.</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        pushButton_openLocalPrjFolder->setText(QApplication::translate("MainWindow", "local prj", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "copy fw file", 0));
        pushButton_copy->setText(QApplication::translate("MainWindow", "Copy", 0));
        pushButton_refreshDrives->setText(QApplication::translate("MainWindow", "refresh", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_openTargetForder->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>open the target drive </p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_openTargetForder->setText(QApplication::translate("MainWindow", "open", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "comm tool", 0));
        pushButton_startCommTool->setText(QApplication::translate("MainWindow", "start comm tool", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "usebale comm port", 0));
        pushButton_refresh_useableCommPort->setText(QApplication::translate("MainWindow", "refresh", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
