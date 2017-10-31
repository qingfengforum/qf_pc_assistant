#include "mainwindow.h"
#include <QApplication>
#include <windows.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    ::SetWindowPos((HWND)w.winId(), HWND_TOPMOST, 0, 0, w.width(), w.height(), SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
    return a.exec();
}
