#ifndef DIALOG_CONFIG_H
#define DIALOG_CONFIG_H

#include <QDialog>

namespace Ui {
class Dialog_config;
}

class Dialog_config : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_config(QWidget *parent = 0);
    ~Dialog_config();

private slots:
    void on_pushButton_setSourcefolder_clicked();

private:
    void initDialog();

private:
    Ui::Dialog_config *ui;
};

#endif // DIALOG_CONFIG_H
