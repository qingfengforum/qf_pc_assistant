#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QProcess>
#include <QDir>
#include <QMessageBox>


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
    PRJ_INFO_s vf11 = {"VF11", "Z:\\fwd_svn\\vf11\\debug\\rtos"
                      , "Z:\\fwd_svn\\vf11\\debug\\rtos\\output\\out\\fwprog\\devfw\\"
                      , "VF_11.bin"};
    prj_map.insert(PRJ_VF11, vf11);

    PRJ_INFO_s s331 = {"S331", "Z:\\fwd_svn\\s331\\debug\\rtos"
                       ,"Z:\\fwd_svn\\s331\\debug\\rtos\\output\\out\\fwprog\\devfw\\"
                       , "S331.bin"};
    prj_map.insert(PRJ_S331, s331);

    for (auto i=prj_map.cbegin(); i!=prj_map.cend(); i++) {
        ui->comboBox_prjName->addItem(prj_map.value(i.key()).prj_name);
    }
    //ui->comboBox_prjName->addItem(prj_map.value(PRJ_VF11).prj_name, PRJ_VF11);
}

bool MainWindow::copyFile(QString srcFilenName, QString destFileName, bool overRideFile)
{
    srcFilenName.replace("\\", "/");
    destFileName.replace("\\","/");
    if (srcFilenName == destFileName){
        return true;
    }
    if (!QFile::exists(srcFilenName)){
        return false;
    }
    QDir *createfile     = new QDir;
    bool exist = createfile->exists(destFileName);
    if (exist){
        if(overRideFile){
            createfile->remove(destFileName);
        }
    }//end if

    if(!QFile::copy(srcFilenName, destFileName))
    {
        return false;
    }
    return true;
}


void MainWindow::refreshDrives()
{
    QFileInfoList drvs = QDir::drives();

    for (int i=0; i<drvs.size(); i++) {
       ui->comboBox_drivePath->addItem(drvs.at(i).absolutePath());
    }
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

void MainWindow::on_pushButton_copy_clicked()
{
    QMessageBox message;

    for (auto i=prj_map.cbegin(); i!=prj_map.cend(); i++) {
        if  (ui->comboBox_prjName->currentText() == prj_map.value(i.key()).prj_name) {
            QString srcDir = prj_map.value(i.key()).bin_file_path + prj_map.value(i.key()).bin_file_name;
            QString destDir = ui->comboBox_drivePath->currentText() + prj_map.value(i.key()).bin_file_name;
            if (copyFile(srcDir, destDir, true)) {
                message.setText("copy file [" + ui->comboBox_prjName->currentText()+"] success");
            } else {
                message.setText("copy file [" + ui->comboBox_prjName->currentText()+"] failed");
            }

            message.exec();
        }
    }

}

void MainWindow::on_pushButton_refreshDrives_clicked()
{
    refreshDrives();
}
