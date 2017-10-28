#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QProcess>
#include <QDir>
#include <QMessageBox>
#include <QDesktopWidget>
#include <QFileDialog>
#include <QMouseEvent>

MainWindow::PRJ_INFO_s MainWindow::prj_info_table[] = {
    // prj_idx, prj_name, prj_source_code_path, prj_bin_file_path, prj_bin_file_name,prj_tool_path
    {PRJ_VF11,  "VF11", "Z:\\fwd_svn\\vf11\\debug\\rtos", "Z:\\fwd_svn\\vf11\\debug\\rtos\\output\\out\\fwprog\\devfw\\", "VF_11.bin"
                     , "E:\\Project\\VF11\\03_tools\\my_uart_tool\\vf11\\v0.0\\vf_11_0.0.exe"},
    {PRJ_FE6,   "FE6",  "Z:\\fwd_svn\\fe6\\debug\\rtos", "Z:\\fwd_svn\\fe6\\debug\\rtos\\output\\out\\fwprog\\devfw", "FE_6.bin"
                     , "E:\\Project\\VF11\\03_tools\\my_uart_tool\\vf11\\v0.0\\vf_11_0.0.exe"},
    {PRJ_S331, "S331", "Z:\\fwd_svn\\s331\\debug\\rtos", "Z:\\fwd_svn\\s331\\debug\\rtos\\output\\out\\fwprog\\devfw\\", "S331.bin"
                    , "E:\\Project\\s331\\03_tools\\my_comm_tool\\s331_v0.0\\S331.exe"},
    {PRJ_END, "prj_name", "prj_src_path", "prj_bin_file_path", "prj_bin_file_name", "prj_tool_path"},
};

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*init*/
    initComboBox();
    edgeStatus = 0;


}

MainWindow::~MainWindow()
{
    delete ui;
}

/******************************************/
/******* private slot *********************/
/******************************************/
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

void MainWindow::on_pushButton_startCommTool_clicked()
{
    for (auto i=prj_map.cbegin(); i!=prj_map.cend(); i++) {
        if  (ui->comboBox_prjName->currentText() == prj_map.value(i.key()).prj_name) {
            QProcess* myProcess = new QProcess();
            QString tool_path = prj_map.value(i.key()).prj_tool_path;
            myProcess->start(tool_path.replace("\\", "/"));

        }
    }
}

void MainWindow::on_pushButton_setFolder_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("select file"), "", "");
    qDebug() << fileName;
}

void MainWindow::leaveEvent(QEvent *event)
{
    /* if mouse in the windows, do not hide windows */
    if (QCursor::pos().x() >= geometry().x() && QCursor::pos().x() < geometry().x()+width()
        && QCursor::pos().y() >= geometry().y() && QCursor::pos().y() < geometry().y()+height()
        ) {
        return;
    }

    switch (edgeStatus) {
    case EDG_TOP:
        setGeometry(geometry().x(), -height() + SHOW_EDGE_WIDTH, width(), height());
        break;
    case EDG_LEFT:
        setGeometry(-width() + SHOW_EDGE_WIDTH, geometry().y(), width(), height());
        break;
    case EDG_RIGHT:
        setGeometry(QApplication::desktop()->width() - SHOW_EDGE_WIDTH, geometry().y(), width(), height());
        break;
    }
    qDebug() << "leave (end): " << geometry();
    return QWidget::leaveEvent(event);
}
void MainWindow::enterEvent(QEvent *event)
{

    switch (edgeStatus) {
    case EDG_TOP:
        setGeometry(geometry().x(), -SHOW_EDGE_WIDTH, width(), height());
        break;
    case EDG_LEFT:
        setGeometry(-SHOW_EDGE_WIDTH, geometry().y(), width(), height());
        break;
    case EDG_RIGHT:
        setGeometry(QApplication::desktop()->width() - width() + SHOW_EDGE_WIDTH, geometry().y(), width(), height());
        break;
    }

    return QWidget::enterEvent(event);
}

void MainWindow::mouseReleaseEvent(QMouseEvent*event)
{
    if (y() <= 0)
    {
        edgeStatus = EDG_TOP;
    }
    else if (QApplication::desktop()->width() <= (this->x() + width()))
    {
        edgeStatus = EDG_RIGHT;
    }
    else if (this->x() <= 0)
    {
        edgeStatus = EDG_LEFT;
    }
    else
    {
        edgeStatus = EDG_NORMAL;
    }

    m_pressed = 0;
    return QWidget::mouseReleaseEvent(event);
}
void MainWindow::mouseMoveEvent(QMouseEvent*event)
{
    if (m_pressed) {
        QPoint move_pos = event->globalPos();
        this->move(this->pos() + move_pos - m_pressed_pos);
        m_pressed_pos = move_pos;
    }
}
void MainWindow::mousePressEvent(QMouseEvent*event)
{
    m_pressed = 1;
    m_pressed_pos = event->globalPos();
}

/******************************************************
 * private funcs
 * ****************************************************/
void MainWindow::initComboBox()
{
    /** project comboBox */
    for (int i=0; prj_info_table[i].prj_idx != PRJ_END; i++) {
        PRJ_INFO_s prj_info = {};
        prj_info.prj_path = prj_info_table[i].prj_path;
        prj_map.insert(prj_info_table[i].prj_idx, prj_info_table[i]);
    }

    for (auto i=prj_map.cbegin(); i!=prj_map.cend(); i++) {
        ui->comboBox_prjName->addItem(prj_map.value(i.key()).prj_name);
    }

    /** drives list */
    refreshDrives();
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
