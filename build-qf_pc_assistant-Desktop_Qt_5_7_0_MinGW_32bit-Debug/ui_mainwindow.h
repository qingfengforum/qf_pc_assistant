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
#include <QtWidgets/QLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd_project;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QComboBox *comboBox_prjName;
    QPushButton *pushButton_config;
    QPushButton *pushButton_configLoad;
    QPushButton *pushButton_configSave;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_openFolder;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_copy;
    QComboBox *comboBox_drivePath;
    QPushButton *pushButton_refreshDrives;
    QPushButton *pushButton_ejectUsb;
    QPushButton *pushButton_ejectUsb_2;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_startCommTool;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *page_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(343, 621);
        actionAdd_project = new QAction(MainWindow);
        actionAdd_project->setObjectName(QStringLiteral("actionAdd_project"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 311, 81));
        comboBox_prjName = new QComboBox(groupBox);
        comboBox_prjName->setObjectName(QStringLiteral("comboBox_prjName"));
        comboBox_prjName->setGeometry(QRect(10, 20, 291, 22));
        pushButton_config = new QPushButton(groupBox);
        pushButton_config->setObjectName(QStringLiteral("pushButton_config"));
        pushButton_config->setGeometry(QRect(230, 50, 75, 23));
        pushButton_configLoad = new QPushButton(groupBox);
        pushButton_configLoad->setObjectName(QStringLiteral("pushButton_configLoad"));
        pushButton_configLoad->setGeometry(QRect(100, 50, 75, 23));
        pushButton_configSave = new QPushButton(groupBox);
        pushButton_configSave->setObjectName(QStringLiteral("pushButton_configSave"));
        pushButton_configSave->setGeometry(QRect(10, 50, 75, 23));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 100, 311, 71));
        pushButton_openFolder = new QPushButton(groupBox_2);
        pushButton_openFolder->setObjectName(QStringLiteral("pushButton_openFolder"));
        pushButton_openFolder->setGeometry(QRect(20, 20, 281, 31));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 200, 311, 91));
        pushButton_copy = new QPushButton(groupBox_3);
        pushButton_copy->setObjectName(QStringLiteral("pushButton_copy"));
        pushButton_copy->setGeometry(QRect(10, 50, 141, 31));
        comboBox_drivePath = new QComboBox(groupBox_3);
        comboBox_drivePath->setObjectName(QStringLiteral("comboBox_drivePath"));
        comboBox_drivePath->setGeometry(QRect(10, 20, 141, 21));
        pushButton_refreshDrives = new QPushButton(groupBox_3);
        pushButton_refreshDrives->setObjectName(QStringLiteral("pushButton_refreshDrives"));
        pushButton_refreshDrives->setGeometry(QRect(160, 20, 61, 21));
        pushButton_ejectUsb = new QPushButton(groupBox_3);
        pushButton_ejectUsb->setObjectName(QStringLiteral("pushButton_ejectUsb"));
        pushButton_ejectUsb->setGeometry(QRect(240, 20, 61, 21));
        pushButton_ejectUsb_2 = new QPushButton(groupBox_3);
        pushButton_ejectUsb_2->setObjectName(QStringLiteral("pushButton_ejectUsb_2"));
        pushButton_ejectUsb_2->setGeometry(QRect(160, 50, 61, 31));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 320, 311, 80));
        pushButton_startCommTool = new QPushButton(groupBox_4);
        pushButton_startCommTool->setObjectName(QStringLiteral("pushButton_startCommTool"));
        pushButton_startCommTool->setGeometry(QRect(20, 30, 281, 31));
        toolBox = new QToolBox(centralWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(10, 420, 311, 121));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 311, 69));
        toolBox->addItem(page, QStringLiteral("Use Most folders"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 311, 69));
        toolBox->addItem(page_2, QStringLiteral("Page 2"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 343, 23));
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

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "qf pc assistant", 0));
        actionAdd_project->setText(QApplication::translate("MainWindow", "add project", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "project", 0));
        pushButton_config->setText(QApplication::translate("MainWindow", "config", 0));
        pushButton_configLoad->setText(QApplication::translate("MainWindow", "Load", 0));
        pushButton_configSave->setText(QApplication::translate("MainWindow", "save", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "operations", 0));
        pushButton_openFolder->setText(QApplication::translate("MainWindow", "open source code", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "copy fw file", 0));
        pushButton_copy->setText(QApplication::translate("MainWindow", "Copy", 0));
        pushButton_refreshDrives->setText(QApplication::translate("MainWindow", "refresh", 0));
        pushButton_ejectUsb->setText(QApplication::translate("MainWindow", "open", 0));
        pushButton_ejectUsb_2->setText(QApplication::translate("MainWindow", "open", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "comm tool", 0));
        pushButton_startCommTool->setText(QApplication::translate("MainWindow", "start comm tool", 0));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "Use Most folders", 0));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "Page 2", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
