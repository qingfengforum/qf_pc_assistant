#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    enum {
        PRJ_VF11 = 0,
        PRJ_FE6,
        PRJ_S331,
        PRJ_END,
    };

    enum {
        EDG_NORMAL,
        EDG_TOP,
        EDG_LEFT,
        EDG_RIGHT,
    };

    typedef struct _PRJ_INFO_s_{
        int prj_idx;
        QString prj_name;
        QString prj_path;
        QString bin_file_path;
        QString bin_file_name;
        QString prj_tool_path;
    }PRJ_INFO_s;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_openFolder_clicked();

    void on_pushButton_copy_clicked();

    void on_pushButton_refreshDrives_clicked();

    void on_pushButton_startCommTool_clicked();

    /** mouse event */
    void leaveEvent(QEvent *event);
    void enterEvent(QEvent *event);
    void mouseReleaseEvent(QMouseEvent*event);
    void mouseMoveEvent(QMouseEvent*event);
    void mousePressEvent(QMouseEvent*event);
    void on_pushButton_setFolder_clicked();

private:
    void initComboBox();
    bool copyFile(QString srcFilenName, QString destFileName, bool overRideFile);
    void refreshDrives();

public:
    static PRJ_INFO_s prj_info_table[];
private:
    Ui::MainWindow *ui;
    QMap<int, PRJ_INFO_s> prj_map;

    /** hide when move to the edge*/
    int edgeStatus;
};

#endif // MAINWINDOW_H
