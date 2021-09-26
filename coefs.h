#ifndef COEFS_H
#define COEFS_H
#include <QMap>
#include "workers.h"
#include "cars.h"
#include <QVector>
#include <QString>


class Coefs //я указал инициализацию прям в классе, т.к. это статические данные.
        //Вроде это легально
{
private:
    static float minPrice; //минимальная сумма от которой будет выстраиваться цена

    //QMap<Workers,float> workCoef;  //не очень понимаю чем удобно такое хранение данных
    static QVector<QMap<int,float>> menCoefs; //вектор с коэф. на работников. Например:
    //1чел./1.8;2чел./2.1;3чел./2.4;

    static /*QMap<Cars,float>*/float isuzuCoef; //коэффициенты на 3 марки авто
    static /*QMap<Cars,float>*/float mitsubCoef;
    static /*QMap<Cars,float>*/float fordCoef;

    static QVector<QMap<int,float>> timeCoefs; //вектор парных данных Например:1час/1.4;2часа/1.5

    //QVector<QVector<float>> vec; //Не могу придумать во что обернуть таблицу с коэф. на
    //расстояние. Т.е. в идеале хотелось бы что бы пользователь указывал из предопределенных
    //районов "откуда" и "куда" и мы в формулу заносили коэф.С вектором векторов я могу
    //занести цифры, но обращаться к ним могу только по индексу, а хотелось бы по строковому
    //литералу
    static QMap<QString,QMap<QString,float>> distanceCoefs; //вот такой вариант мб подойдет
    //но возможно стоит обернуть это в вектор, что бы по 2 ключам искать коэффициент
public:
    Coefs();
};

#endif // COEFS_H
