#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>
#include "dialog_config.h"

enum {
    PRJ_VF11 = 1,
    PRJ_FE6,
    PRJ_S331,
    PRJ_END,
};

typedef struct _PRJ_INFO_s_{
    int prj_idx;
    QString prj_name;
    QString prj_path; /* project source code path */
    QString bin_file_path;
    QString bin_file_name;
    QString prj_tool_path;
}PRJ_INFO_s;

namespace Ui {
class MainWindow;
}

class Dialog_config;

class MainWindow : public QMainWindow
{
    Q_OBJECT
#define SHOW_EDGE_WIDTH 3

    enum {
        EDG_NORMAL,
        EDG_TOP,
        EDG_LEFT,
        EDG_RIGHT,
    };

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_openFolder_clicked();
    void on_pushButton_copy_clicked();
    void on_pushButton_refreshDrives_clicked();
    void on_pushButton_startCommTool_clicked();
    void on_pushButton_setFolder_clicked();
    void on_pushButton_config_clicked();

    void on_pushButton_configSave_clicked();
    void on_pushButton_configLoad_clicked();

    /** mouse event */
    void leaveEvent(QEvent *event);
    void enterEvent(QEvent *event);
    void mouseReleaseEvent(QMouseEvent*event);
    void mouseMoveEvent(QMouseEvent*event);
    void mousePressEvent(QMouseEvent*event);


    /** actions */
    void action_addPrj();

private:
    void initComboBox();
    bool copyFile(QString srcFilenName, QString destFileName, bool overRideFile);
    void refreshDrives();
    void initMenuContext();

    /** save and load */
    void loadConfig();
    void saveConfig();

    /** refresh */
    void refreshComboBox_prjName();

public:
    QMap<int, PRJ_INFO_s> getPrjInfoMap();
    void setPrjInfo(PRJ_INFO_s prjInfo);
    void addPrjInfo(PRJ_INFO_s prjInfo);
public:
    static PRJ_INFO_s prj_info_table[];
    QMap<int, PRJ_INFO_s> prj_map;

private:
    Ui::MainWindow *ui;

    /** hide when move to the edge*/
    int edgeStatus;
    int m_pressed;
    QPoint m_pressed_pos;

    /** dialof config */
    Dialog_config* dialogConfig;
};

#endif // MAINWINDOW_H
