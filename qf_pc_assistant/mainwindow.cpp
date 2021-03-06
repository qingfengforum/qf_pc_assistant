#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog_menu_addproject.h"

#include <QDebug>
#include <QProcess>
#include <QDir>
#include <QMessageBox>
#include <QDesktopWidget>
#include <QFileDialog>
#include <QMouseEvent>
#include <windows.h>
#include <stdio.h>
#include <QtSerialPort/QSerialPortInfo>

//PRJ_INFO_s MainWindow::prj_info_table[] = {0};

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*init*/
    initComboBox();
    edgeStatus = 0;

    /** stuff init */
    dialogConfig = new Dialog_config(this);

    /** connect signals */
    initMenuContext();

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
            QProcess::startDetached("explorer "+ prj_map.value(i.key()).prj_src_code_path);
            break;
        }
    }

}

void MainWindow::on_pushButton_copy_clicked()
{
    QMessageBox message;

    for (auto i=prj_map.cbegin(); i!=prj_map.cend(); i++) {
        if  (ui->comboBox_prjName->currentText() == prj_map.value(i.key()).prj_name) {
            QString srcDir = prj_map.value(i.key()).bin_file_path;
            QFileInfo binfileInfo(prj_map.value(i.key()).bin_file_path);
            QString binFilename = binfileInfo.fileName();
            QString destDir = ui->comboBox_drivePath->currentText() + binFilename;
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


void MainWindow::on_pushButton_configSave_clicked()
{
    saveConfig();
}

void MainWindow::on_pushButton_configLoad_clicked()
{
    loadConfig();
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

/** actions */
void MainWindow::action_addPrj()
{
    Dialog_menu_addProject* add_project = new Dialog_menu_addProject(this);
    add_project->show();
}

void MainWindow::action_configPrj()
{
    dialogConfig->initDialogConfig();
    dialogConfig->show();
}

void MainWindow::action_file_save(void)
{
    saveConfig();
}

void MainWindow::action_file_load(void)
{
    loadConfig();
}

void MainWindow::on_pushButton_openBinFileFolder_clicked()
{
    for (auto i=prj_map.cbegin(); i!=prj_map.cend(); i++) {
        if  (ui->comboBox_prjName->currentText() == prj_map.value(i.key()).prj_name) {
            QFileInfo binfileInfo(prj_map.value(i.key()).bin_file_path);
            openFolder(binfileInfo.absolutePath());
            break;
        }
    }
}

void MainWindow::on_pushButton_openTargetForder_clicked()
{
    openFolder(ui->comboBox_drivePath->currentText());
}

void MainWindow::on_pushButton_openServerPrjFolder_clicked()
{
    for (auto i=prj_map.cbegin(); i!=prj_map.cend(); i++) {
        if  (ui->comboBox_prjName->currentText() == prj_map.value(i.key()).prj_name) {
           openFolder(prj_map.value(i.key()).prj_server_path);
            break;
        }
    }
}


void MainWindow::on_pushButton_openLocalPrjFolder_clicked()
{
    for (auto i=prj_map.cbegin(); i!=prj_map.cend(); i++) {
        if  (ui->comboBox_prjName->currentText() == prj_map.value(i.key()).prj_name) {
           openFolder(prj_map.value(i.key()).prj_path);
            break;
        }
    }
}

void MainWindow::on_pushButton_refresh_useableCommPort_clicked()
{
    refreshSerialPortNum();
}

void MainWindow::on_pushButton_ejectUsb_clicked()
{
    char devicepath[7];
    char format[] = "\\\\.\\?:";
    strcpy_s(devicepath, format);
    devicepath[4] = 'f';
    QString errmsg = "";

    DWORD dwRet = 0;
    wchar_t wtext[7];
    size_t textlen = 7;
    mbstowcs_s(&textlen, wtext, strlen(devicepath)+1, devicepath, _TRUNCATE);
    HANDLE hVol = CreateFile(wtext, GENERIC_READ | GENERIC_WRITE, FILE_SHARE_WRITE | FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
    if (hVol == INVALID_HANDLE_VALUE)
    {
       // FormatErrorMsg("CreateFile: ", errmsg);
        return; //false;
    }

    if(!DeviceIoControl(hVol, FSCTL_LOCK_VOLUME, 0, 0, 0, 0, &dwRet, 0))
    {
       // FormatErrorMsg("Lock Volume: ", errmsg);
        return; //false;
    }

    if(!DeviceIoControl(hVol, FSCTL_DISMOUNT_VOLUME, 0, 0, 0, 0, &dwRet, 0))
    {
        //FormatErrorMsg("Dismount Volume: ", errmsg);
        return;// false;
    }

    if (!DeviceIoControl(hVol, IOCTL_STORAGE_EJECT_MEDIA, 0, 0, 0, 0, &dwRet, 0))
    {
        //FormatErrorMsg("Eject Media: ", errmsg);
        qDebug() << "eject failed";
        //return;// false;
    } else {
        qDebug() << "eject OK";
    }

    CloseHandle(hVol);

    return;
}

/******************************************************
 * private funcs
 * ****************************************************/
void MainWindow::initComboBox()
{
    if (loadConfig() < 0) {
#if 0
        /** project comboBox */
        for (int i=0; prj_info_table[i].prj_idx != PRJ_END; i++) {
            PRJ_INFO_s prj_info = {};
            prj_info.prj_src_code_path = prj_info_table[i].prj_src_code_path;
            prj_map.insert(prj_info_table[i].prj_idx, prj_info_table[i]);
        }

        for (auto i=prj_map.cbegin(); i!=prj_map.cend(); i++) {
            ui->comboBox_prjName->addItem(prj_map.value(i.key()).prj_name, prj_map.value(i.key()).prj_idx);
        }
#endif
    }


    /** drives list */
    refreshDrives();

    /** useable serial ports*/
    refreshSerialPortNum();
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

    ui->comboBox_drivePath->clear();

    for (int i=0; i<drvs.size(); i++) {
        if (drvs.at(i).absolutePath() == "C:/"
                || drvs.at(i).absolutePath() == "D:/"
                ||drvs.at(i).absolutePath() == "E:/"
                ) {
            continue;

        }
        ui->comboBox_drivePath->addItem(drvs.at(i).absolutePath());
    }
}

void MainWindow::initMenuContext()
{
    /** add project */
    ui->actionAdd_project->setStatusTip("add project");// information that shows in infomation bar.
    connect(ui->actionAdd_project, &QAction::triggered, this, &MainWindow::action_addPrj);

    /** config project  */
    ui->actionAdd_project->setStatusTip("config project");
    connect(ui->actionConfig_project, &QAction::triggered, this, &MainWindow::action_configPrj);

    /** save and load*/
    ui->actionAdd_project->setStatusTip(" save projects settings ");
    connect(ui->actionFile_save, &QAction::triggered, this, &MainWindow::action_file_save);
    ui->actionAdd_project->setStatusTip(" load projects settings ");
    connect(ui->actionFile_load, &QAction::triggered, this, &MainWindow::action_file_load);
}

int MainWindow::loadConfig()
{
    /* open file */
    QFile configSettings("config.txt");
    QTextStream fileIn(&configSettings);

    if (!configSettings.open(QFile::ReadOnly)) {
        qDebug() << "open file error";
        return -1;
    }

    qDebug() << fileIn.readLine();

    while (!fileIn.atEnd()) {
        QString line = fileIn.readLine();
        QStringList lineList = line.split(',', QString::SkipEmptyParts);
        qDebug() << "lineList.size = " << lineList.size();
        int prj_key = lineList.at(0).toInt();
        PRJ_INFO_s prj_info;
        prj_info.prj_idx = prj_key;
        prj_info.prj_name = lineList.at(1);
        prj_info.prj_src_code_path = lineList.at(2);
        prj_info.bin_file_path = lineList.at(3);
        prj_info.bin_file_name = lineList.at(4);
        prj_info.prj_tool_path = lineList.at(5);
        if (lineList.size()>7) {
            prj_info.prj_path = lineList.at(6);
            prj_info.prj_server_path = lineList.at(7);
        }

        if (prj_info.prj_src_code_path == "-") {
            prj_info.prj_src_code_path = "";
        }

        if (prj_info.bin_file_path == "-") {
            prj_info.bin_file_path = "";
        }

        if (prj_info.bin_file_name == "-") {
            prj_info.bin_file_name = "";
        }

        if (prj_info.prj_tool_path == "-") {
            prj_info.prj_tool_path = "";
        }

        if (prj_info.prj_server_path == "-") {
            prj_info.prj_server_path = "";
        }
        if (prj_info.prj_path == "-") {
            prj_info.prj_path = "";
        }

        prj_map.insert(prj_key, prj_info);

    }

    configSettings.close();

    /** refresh combox */
    refreshComboBox_prjName();

    return 0;
}

void MainWindow::saveConfig()
{
    /* open file */
    QFile configSettings("config.txt");


    if (!configSettings.open(QFile::WriteOnly | QFile::Truncate)) {
        qDebug() << "open file error";
        return ;
    }

    QTextStream out(&configSettings);
    /* head */
    out << "prjidx" << "," <<"prj_name" << "," << "prj_src_code_path" << "bin_file_path" << "bin_file_name" << "prj_tool_path" <<endl;

    for (auto i=prj_map.cbegin(); i!=prj_map.cend(); i++) {
        QString str_prjKey = QString("%1").arg(i.key());
        QString prj_name = prj_map.value(i.key()).prj_name;
        QString prj_path = prj_map.value(i.key()).prj_path;
        QString prj_Server_path = prj_map.value(i.key()).prj_server_path;
        QString prj_src_code_path = prj_map.value(i.key()).prj_src_code_path;
        QString bin_file_path = prj_map.value(i.key()).bin_file_path;
        QString bin_file_name = prj_map.value(i.key()).bin_file_name;
        QString prj_tool_path = prj_map.value(i.key()).prj_tool_path;

        if (prj_name == nullptr) {
            continue;
        }

        if (prj_path == nullptr) {
            prj_path == "-";
        }

        if (prj_Server_path == nullptr) {
            prj_Server_path == "-";
        }

        if (prj_src_code_path == nullptr) {
            prj_src_code_path = "-";
        }
        if (bin_file_path == nullptr) {
            bin_file_path = "-";
        }
        if (bin_file_name == nullptr) {
            bin_file_name = "-";
        }
        if (prj_tool_path == nullptr) {
            prj_tool_path = "-";
        }

        out << str_prjKey << ","
            << prj_name << ","
            << prj_src_code_path << ","
            << bin_file_path << ","
            << bin_file_name << ","
            << prj_tool_path << ","
            << prj_path << ","
            << prj_Server_path << ","
            << endl;
    }

    configSettings.close();
}

void MainWindow::refreshComboBox_prjName()
{
    ui->comboBox_prjName->clear();

    for (auto i=prj_map.cbegin(); i!=prj_map.cend(); i++) {
        ui->comboBox_prjName->addItem(prj_map.value(i.key()).prj_name, prj_map.value(i.key()).prj_idx);
    }
}

void MainWindow::refreshSerialPortNum()
{
    ui->comboBox_useableCommPort->clear();
    const auto infos = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &info : infos) {
        QStringList list;
        list << info.portName();

        ui->comboBox_useableCommPort->addItem(list.first(), list);
    }
}

void MainWindow::openFolder(QString folderPath)
{
    if (folderPath != nullptr) {
        folderPath.replace("/", "\\");
        qDebug() << "open"  << folderPath;
        QProcess::startDetached("explorer "+ folderPath);
    } else {
        showWarningMessage("folder path is nullptr");
    }
}

void MainWindow::showWarningMessage(const QString warningMessage)
{
    QMessageBox msg;
    msg.setText(warningMessage);
    msg.exec();
}

/********************************************************
 * public funcs
 * ******************************************************/
QMap<int, PRJ_INFO_s> MainWindow::getPrjInfoMap()
{
    return prj_map;
}
void MainWindow::setPrjInfo(PRJ_INFO_s prjInfo)
{
    prj_map[prjInfo.prj_idx] = prjInfo;
}

void MainWindow::addPrjInfo(PRJ_INFO_s prjInfo)
{
    prjInfo.prj_idx = prj_map.size()+1;
    qDebug() << "size : " << prj_map.size() << "indx: " << prjInfo.prj_idx;
    prj_map.insert(prjInfo.prj_idx, prjInfo);
    refreshComboBox_prjName();
}

void MainWindow::delPrjInfoByIdx(int idx)
{
   prj_map.remove(idx);
   refreshComboBox_prjName();
}

