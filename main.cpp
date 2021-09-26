#include "mainwindow.h"
#include <workers.h>
#include <cars.h>
#include <workers.h>
#include <QDebug>

#include <QApplication>

int main(int argc, char *argv[])
{
//    float arr[] = {1,2,3};
//    Cars first(true,Cars::mitsubishi,7.5,"1MRY22",5,5,5,arr);
//    qDebug()<<first.getCarrying();
//    qDebug()<<first.getIsTruck();
//    qDebug()<<first.getNumber();
//    qDebug()<<first.getType();
//    for(uint i =0;i<3;++i)
//    {
//        qDebug()<<first.getSize(i);
//    }

//    Workers gryz(Workers::driver,"sad",5,Workers::C);
//    qDebug()<<gryz.getCtgr();
//    qDebug()<<gryz.getLevel();
//    qDebug()<<gryz.getName();
//    qDebug()<<gryz.getPos();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
