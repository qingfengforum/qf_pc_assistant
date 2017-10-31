#ifndef DIALOG_MENU_ADDPROJECT_H
#define DIALOG_MENU_ADDPROJECT_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class Dialog_menu_addProject;
}

class MainWindow;

class Dialog_menu_addProject : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_menu_addProject(QWidget *parent = 0);
    ~Dialog_menu_addProject();

private slots:
    void on_pushButton_setSrcCodePath_clicked();

    void on_pushButton_setBinFIlePath_clicked();

    void on_pushButton_setToolFilePath_clicked();
    void slot_btnBox_ok_clicked();

private:
    Ui::Dialog_menu_addProject *ui;
    MainWindow* dialogMenu_addPrj_parent;
    QMap<int, _PRJ_INFO_s_> prj_map;
};

#endif // DIALOG_MENU_ADDPROJECT_H
