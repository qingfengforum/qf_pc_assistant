#include "dialog_config.h"
#include "ui_dialog_config.h"
#include "mainwindow.h"

#include <QDebug>
#include <QFileDialog>
#include <QComboBox>

Dialog_config::Dialog_config(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_config)
{
    ui->setupUi(this);
}

Dialog_config::~Dialog_config()
{
    delete ui;
}
/**************************************************
 * public funcs
 * ************************************************/
void Dialog_config::initDialogConfig()
{
    dialogConfig_parent = (MainWindow*)this->parent();
    prj_map = dialogConfig_parent->getPrjInfoMap();
    initDialog();
}

/**************************************************
 * private funcs
 * ************************************************/
void Dialog_config::initDialog()
{
    //QMap<int, PRJ_INFO_s> prj_map = dialogConfig_parent->getPrjInfoMap();
    ui->comboBox_prj->clear();

    for (auto i=prj_map.cbegin(); i!=prj_map.cend(); i++) {
        ui->comboBox_prj->addItem(prj_map.value(i.key()).prj_name, prj_map.value(i.key()).prj_idx);
    }

    QString prj_src_path = prj_map.value(ui->comboBox_prj->currentData().toInt()).prj_path;
    QString prj_binFilePath = prj_map.value(ui->comboBox_prj->currentData().toInt()).bin_file_path;
    QString prj_toolFilePaht = prj_map.value(ui->comboBox_prj->currentData().toInt()).prj_tool_path;
    //qDebug() << ui->comboBox_prj->currentData().toInt();
    //qDebug() << prj_src_name;
    ui->lineEdit_srcCodePath->setText(prj_src_path);
    ui->lineEdit_binFilePaht->setText(prj_binFilePath);
    ui->lineEdit_toolFilePath->setText(prj_toolFilePaht);

    /** connect signals */
    connect(ui->comboBox_prj, SIGNAL(currentIndexChanged(int)), this, SLOT(slot_comboBox_prj_idxChanged(int)));
}

/***************************************************
 * private slots
 * *************************************************/
/*
 * delete project
 */
void Dialog_config::on_pushButton_config_deletePrj_clicked()
{
    int idx = ui->comboBox_prj->currentData().toInt();
    dialogConfig_parent->delPrjInfoByIdx(idx);
    initDialogConfig();
}

/*
 * set source folder
 */
void Dialog_config::on_pushButton_setSourcefolder_clicked()
{
    //QMap<int, PRJ_INFO_s> prj_map = dialogConfig_parent->getPrjInfoMap();
    PRJ_INFO_s prj_info;

    prj_info = prj_map.value(ui->comboBox_prj->currentData().toInt());

    QString dirName = QFileDialog::getExistingDirectory(this, tr("select dir"), prj_info.prj_path);

    qDebug() << dirName;
    if (dirName != nullptr) {
        dirName = dirName.replace("/", "\\");

        ui->lineEdit_srcCodePath->setText(dirName);

        prj_info.prj_path = dirName;
        dialogConfig_parent->setPrjInfo(prj_info);
    }
}

/*
 * set bin file path
 */
void Dialog_config::on_pushButton_setBinFilePath_clicked()
{
    PRJ_INFO_s prj_info = prj_map.value(ui->comboBox_prj->currentData().toInt());

    QString binFilePath = QFileDialog::getOpenFileName(this, tr("select file"), prj_info.bin_file_path, "*.bin");

    qDebug() << binFilePath;
    if (binFilePath != nullptr) {
        binFilePath = binFilePath.replace("/", "\\");

        ui->lineEdit_binFilePaht->setText(binFilePath);

        prj_info.bin_file_path = binFilePath;
        dialogConfig_parent->setPrjInfo(prj_info);
    }
}

/*
 * set tool path
 */
void Dialog_config::on_pushButton_setToolPath_clicked()
{
    PRJ_INFO_s prj_info = prj_map.value(ui->comboBox_prj->currentData().toInt());

    QString toolFilePath = QFileDialog::getOpenFileName(this, tr("select file"), prj_info.prj_tool_path, "*.exe");

    qDebug() << toolFilePath;
    if (toolFilePath != nullptr) {
        toolFilePath = toolFilePath.replace("/", "\\");

        ui->lineEdit_binFilePaht->setText(toolFilePath);

        prj_info.prj_tool_path = toolFilePath;
        dialogConfig_parent->setPrjInfo(prj_info);
    }
}

void Dialog_config::slot_comboBox_prj_idxChanged(int cur_idx)
{
    qDebug() << cur_idx;
    QString prj_src_path = prj_map.value(ui->comboBox_prj->currentData().toInt()).prj_path;
    QString prj_binFilePath = prj_map.value(ui->comboBox_prj->currentData().toInt()).bin_file_path;
    QString prj_toolFilePaht = prj_map.value(ui->comboBox_prj->currentData().toInt()).prj_tool_path;
    //qDebug() << ui->comboBox_prj->currentData().toInt();
    //qDebug() << prj_src_name;
    ui->lineEdit_srcCodePath->setText(prj_src_path);
    ui->lineEdit_binFilePaht->setText(prj_binFilePath);
    ui->lineEdit_toolFilePath->setText(prj_toolFilePaht);
}

