#include "mainwindow.h"
#include "CuacsAPI.h"
#include "addanimal.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.setWindowTitle("cuACS");
    w.show();

    return a.exec();
}
