/********************************************************************************
** Form generated from reading UI file 'dialog_menu_addproject.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_MENU_ADDPROJECT_H
#define UI_DIALOG_MENU_ADDPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_menu_addProject
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_binFilePath;
    QPushButton *pushButton_setSrcCodePath;
    QLabel *label_4;
    QPushButton *pushButton_setBinFIlePath;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_srcCodePath;
    QLineEdit *lineEdit_prjName;
    QLineEdit *lineEdit_toolFilePath;
    QPushButton *pushButton_setToolFilePath;
    QLabel *label_3;

    void setupUi(QDialog *Dialog_menu_addProject)
    {
        if (Dialog_menu_addProject->objectName().isEmpty())
            Dialog_menu_addProject->setObjectName(QStringLiteral("Dialog_menu_addProject"));
        Dialog_menu_addProject->resize(552, 525);
        buttonBox = new QDialogButtonBox(Dialog_menu_addProject);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(360, 480, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        gridLayoutWidget = new QWidget(Dialog_menu_addProject);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 20, 491, 331));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_binFilePath = new QLineEdit(gridLayoutWidget);
        lineEdit_binFilePath->setObjectName(QStringLiteral("lineEdit_binFilePath"));

        gridLayout->addWidget(lineEdit_binFilePath, 2, 1, 1, 1);

        pushButton_setSrcCodePath = new QPushButton(gridLayoutWidget);
        pushButton_setSrcCodePath->setObjectName(QStringLiteral("pushButton_setSrcCodePath"));

        gridLayout->addWidget(pushButton_setSrcCodePath, 1, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        pushButton_setBinFIlePath = new QPushButton(gridLayoutWidget);
        pushButton_setBinFIlePath->setObjectName(QStringLiteral("pushButton_setBinFIlePath"));

        gridLayout->addWidget(pushButton_setBinFIlePath, 2, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_srcCodePath = new QLineEdit(gridLayoutWidget);
        lineEdit_srcCodePath->setObjectName(QStringLiteral("lineEdit_srcCodePath"));

        gridLayout->addWidget(lineEdit_srcCodePath, 1, 1, 1, 1);

        lineEdit_prjName = new QLineEdit(gridLayoutWidget);
        lineEdit_prjName->setObjectName(QStringLiteral("lineEdit_prjName"));
        lineEdit_prjName->setMaximumSize(QSize(150, 16777215));

        gridLayout->addWidget(lineEdit_prjName, 0, 1, 1, 1);

        lineEdit_toolFilePath = new QLineEdit(gridLayoutWidget);
        lineEdit_toolFilePath->setObjectName(QStringLiteral("lineEdit_toolFilePath"));

        gridLayout->addWidget(lineEdit_toolFilePath, 3, 1, 1, 1);

        pushButton_setToolFilePath = new QPushButton(gridLayoutWidget);
        pushButton_setToolFilePath->setObjectName(QStringLiteral("pushButton_setToolFilePath"));

        gridLayout->addWidget(pushButton_setToolFilePath, 3, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);


        retranslateUi(Dialog_menu_addProject);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_menu_addProject, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_menu_addProject, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_menu_addProject);
    } // setupUi

    void retranslateUi(QDialog *Dialog_menu_addProject)
    {
        Dialog_menu_addProject->setWindowTitle(QApplication::translate("Dialog_menu_addProject", "Dialog", 0));
        pushButton_setSrcCodePath->setText(QApplication::translate("Dialog_menu_addProject", "set src path", 0));
        label_4->setText(QApplication::translate("Dialog_menu_addProject", "bin file path: ", 0));
        pushButton_setBinFIlePath->setText(QApplication::translate("Dialog_menu_addProject", "set bin path", 0));
        label_2->setText(QApplication::translate("Dialog_menu_addProject", "src path: ", 0));
        label->setText(QApplication::translate("Dialog_menu_addProject", "project Name: ", 0));
        pushButton_setToolFilePath->setText(QApplication::translate("Dialog_menu_addProject", "set tool path", 0));
        label_3->setText(QApplication::translate("Dialog_menu_addProject", "tool file path: ", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_menu_addProject: public Ui_Dialog_menu_addProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_MENU_ADDPROJECT_H
