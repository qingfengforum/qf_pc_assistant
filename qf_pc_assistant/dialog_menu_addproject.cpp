#include "dialog_menu_addproject.h"
#include "ui_dialog_menu_addproject.h"

#include <QDir>
#include <QFileDialog>
#include <QDebug>
#include <QDialogButtonBox>

Dialog_menu_addProject::Dialog_menu_addProject(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_menu_addProject)
{
    ui->setupUi(this);

    dialogMenu_addPrj_parent = (MainWindow*)this->parent();
    prj_map = dialogMenu_addPrj_parent->getPrjInfoMap();

    connect(ui->buttonBox, &QDialogButtonBox::clicked, this, &Dialog_menu_addProject::slot_btnBox_ok_clicked);
}

Dialog_menu_addProject::~Dialog_menu_addProject()
{
    delete ui;
}

void Dialog_menu_addProject::on_pushButton_setSrcCodePath_clicked()
{
    QString srcCodePath = QFileDialog::getExistingDirectory(this, tr("select dir"), "");

    qDebug() << srcCodePath;
    if (srcCodePath != nullptr) {
        srcCodePath = srcCodePath.replace("/", "\\");
        ui->lineEdit_srcCodePath->setText(srcCodePath);
    }
}

void Dialog_menu_addProject::on_pushButton_setBinFIlePath_clicked()
{
    QString binFilePath = QFileDialog::getOpenFileName(this, tr("select file"), "", "*.bin");

    qDebug() << binFilePath;
    if (binFilePath != nullptr) {
        binFilePath = binFilePath.replace("/", "\\");
        ui->lineEdit_binFilePath->setText(binFilePath);
    }
}

void Dialog_menu_addProject::on_pushButton_setToolFilePath_clicked()
{
    QString toolFilePath = QFileDialog::getOpenFileName(this, tr("select file"), "", "*.exe");

    qDebug() << toolFilePath;
    if (toolFilePath != nullptr) {
        toolFilePath = toolFilePath.replace("/", "\\");
        ui->lineEdit_toolFilePath->setText(toolFilePath);
    }
}

void Dialog_menu_addProject::slot_btnBox_ok_clicked()
{
    PRJ_INFO_s prj_info;
    prj_info.prj_name = ui->lineEdit_prjName->text();
    prj_info.prj_path = ui->lineEdit_srcCodePath->text();
    prj_info.bin_file_path = ui->lineEdit_binFilePath->text();
    prj_info.prj_tool_path = ui->lineEdit_toolFilePath->text();

    dialogMenu_addPrj_parent->addPrjInfo(prj_info);
}
