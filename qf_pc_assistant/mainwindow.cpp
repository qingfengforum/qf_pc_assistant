#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QProcess>
#include <QDir>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*init*/
    initComboBox();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initComboBox()
{
    PRJ_INFO_s vf11 = {"VF11", "Z:\\fwd_svn\\vf11\\debug\\rtos"};
    prj_map.insert(PRJ_VF11, vf11);

    PRJ_INFO_s s331 = {"S331", "Z:\\fwd_svn\\s331\\debug\\rtos"};
    prj_map.insert(PRJ_S331, s331);

    for (auto i=prj_map.cbegin(); i!=prj_map.cend(); i++) {
        ui->comboBox_prjName->addItem(prj_map.value(i.key()).prj_name);
    }
    //ui->comboBox_prjName->addItem(prj_map.value(PRJ_VF11).prj_name, PRJ_VF11);
}

void MainWindow::on_pushButton_openFolder_clicked()
{
    for (auto i=prj_map.cbegin(); i!=prj_map.cend(); i++) {
        if  (ui->comboBox_prjName->currentText() == prj_map.value(i.key()).prj_name) {
            qDebug() << "open"  << prj_map.value(i.key()).prj_name;
            QProcess::startDetached("explorer "+ prj_map.value(i.key()).prj_path);
            break;
        }
    }

}
