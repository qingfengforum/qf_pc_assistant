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
        PRJ_S331 = 1,
    };

    typedef struct _PRJ_INFO_s_{
        QString prj_name;
        QString prj_path;
    }PRJ_INFO_s;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_openFolder_clicked();

private:
    void initComboBox();

private:
    Ui::MainWindow *ui;

    QMap<int, PRJ_INFO_s> prj_map;
};

#endif // MAINWINDOW_H
