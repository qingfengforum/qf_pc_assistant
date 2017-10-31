/********************************************************************************
** Form generated from reading UI file 'dialog_config.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CONFIG_H
#define UI_DIALOG_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_config
{
public:
    QComboBox *comboBox_prj;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_srcCodePath;
    QPushButton *pushButton_setSourcefolder;
    QLabel *label_2;
    QLineEdit *lineEdit_binFilePaht;
    QPushButton *pushButton_setBinFilePath;
    QLabel *label_3;
    QLineEdit *lineEdit_toolFilePath;
    QPushButton *pushButton_setToolPath;

    void setupUi(QDialog *Dialog_config)
    {
        if (Dialog_config->objectName().isEmpty())
            Dialog_config->setObjectName(QStringLiteral("Dialog_config"));
        Dialog_config->resize(555, 514);
        comboBox_prj = new QComboBox(Dialog_config);
        comboBox_prj->setObjectName(QStringLiteral("comboBox_prj"));
        comboBox_prj->setGeometry(QRect(10, 20, 101, 22));
        gridLayoutWidget = new QWidget(Dialog_config);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 70, 531, 83));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_srcCodePath = new QLineEdit(gridLayoutWidget);
        lineEdit_srcCodePath->setObjectName(QStringLiteral("lineEdit_srcCodePath"));

        gridLayout->addWidget(lineEdit_srcCodePath, 0, 1, 1, 1);

        pushButton_setSourcefolder = new QPushButton(gridLayoutWidget);
        pushButton_setSourcefolder->setObjectName(QStringLiteral("pushButton_setSourcefolder"));

        gridLayout->addWidget(pushButton_setSourcefolder, 0, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_binFilePaht = new QLineEdit(gridLayoutWidget);
        lineEdit_binFilePaht->setObjectName(QStringLiteral("lineEdit_binFilePaht"));

        gridLayout->addWidget(lineEdit_binFilePaht, 1, 1, 1, 1);

        pushButton_setBinFilePath = new QPushButton(gridLayoutWidget);
        pushButton_setBinFilePath->setObjectName(QStringLiteral("pushButton_setBinFilePath"));

        gridLayout->addWidget(pushButton_setBinFilePath, 1, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_toolFilePath = new QLineEdit(gridLayoutWidget);
        lineEdit_toolFilePath->setObjectName(QStringLiteral("lineEdit_toolFilePath"));

        gridLayout->addWidget(lineEdit_toolFilePath, 2, 1, 1, 1);

        pushButton_setToolPath = new QPushButton(gridLayoutWidget);
        pushButton_setToolPath->setObjectName(QStringLiteral("pushButton_setToolPath"));

        gridLayout->addWidget(pushButton_setToolPath, 2, 2, 1, 1);


        retranslateUi(Dialog_config);

        QMetaObject::connectSlotsByName(Dialog_config);
    } // setupUi

    void retranslateUi(QDialog *Dialog_config)
    {
        Dialog_config->setWindowTitle(QApplication::translate("Dialog_config", "Dialog", 0));
        label->setText(QApplication::translate("Dialog_config", "src code folder:", 0));
        pushButton_setSourcefolder->setText(QApplication::translate("Dialog_config", "set src folder", 0));
        label_2->setText(QApplication::translate("Dialog_config", "bin file path", 0));
        pushButton_setBinFilePath->setText(QApplication::translate("Dialog_config", "set binFilePath", 0));
        label_3->setText(QApplication::translate("Dialog_config", "tool path", 0));
        pushButton_setToolPath->setText(QApplication::translate("Dialog_config", "set toolPath", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_config: public Ui_Dialog_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CONFIG_H
