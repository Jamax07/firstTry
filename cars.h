#ifndef CARS_H
#define CARS_H

#include <QString>
#include "workers.h"

class Cars
{
public:
    enum Model {isuzu,ford,mitsubishi};
private:
    bool m_isTruck; //легковая или грузовая машина
    Model m_Type;
    float m_Carrying; //грузоподъемность
    QString m_Number; //номер машины
    float m_Length; //длина кузова
    float m_Width; //ширина кузова
    float m_Height; //высота кузова
    float m_Size[3]; //типа массив из ширины, высоты и длины
public:
    Cars(bool isTruck, Model type, float carrying,QString number
         ,float length,float width,float height,float* size);
    bool getIsTruck() const;
    Model getType() const;
    float getCarrying() const;
    QString getNumber() const;
    float getSize(int val) const; //хочется вернуть массив, что бы сразу все размеры передать

};

#endif // CARS_H
