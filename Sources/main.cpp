#include "Headers/mainwindow.h"

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    MainWindow w;
    w.setWindowTitle("Resizable Button");
    w.show();



    return a.exec();
}
