#ifndef DIALOG_CONFIG_H
#define DIALOG_CONFIG_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class Dialog_config;
}

class MainWindow;
struct _PRJ_INFO_s_;

class Dialog_config : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_config(QWidget *parent = 0);
    ~Dialog_config();

private slots:
    void on_pushButton_setSourcefolder_clicked();
    void on_pushButton_setBinFilePath_clicked();
    void on_pushButton_setToolPath_clicked();

    void slot_comboBox_prj_idxChanged(int cur_idx);

public:
    void initDialogConfig();
private:
    void initDialog();

private:
    Ui::Dialog_config *ui;
    MainWindow* dialogConfig_parent;
    QMap<int, _PRJ_INFO_s_> prj_map;
};

#endif // DIALOG_CONFIG_H
