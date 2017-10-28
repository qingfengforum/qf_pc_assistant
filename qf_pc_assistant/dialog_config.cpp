#include "dialog_config.h"
#include "ui_dialog_config.h"
#include "mainwindow.h"

#include <QDebug>
#include <QFileDialog>

Dialog_config::Dialog_config(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_config)
{
    ui->setupUi(this);

    initDialog();
}

Dialog_config::~Dialog_config()
{
    delete ui;
}

/**************************************************
 * private funcs
 * ************************************************/
void Dialog_config::initDialog()
{
    MainWindow* prnt = (MainWindow*)parent();
    QMap<int, PRJ_INFO_s> &prj_map = prnt->prj_map;
    qDebug() << prj_map.size();

    for (auto i=prj_map.cbegin(); i!=prj_map.cend(); i++) {
        ui->comboBox_prj->addItem(prj_map.value(i.key()).prj_name);
    }
}

/***************************************************
 * private slots
 * *************************************************/
void Dialog_config::on_pushButton_setSourcefolder_clicked()
{
    //QString fileName = QFileDialog::getOpenFileName(this, tr("select file"), "", "");
    QString dirName = QFileDialog::getExistingDirectory(this, tr("select dir"), "");
    ui->lineEdit_srcCodePath->setText(dirName);
    qDebug() << dirName;
}
