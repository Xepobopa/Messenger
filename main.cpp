#include "mainwindow.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QFile file(":/style/style.css");
    file.open(QFile::ReadOnly);
    a.setStyleSheet(file.readAll());

    w.show();
    return a.exec();
}
