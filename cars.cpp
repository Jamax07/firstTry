#include "cars.h"



bool Cars::getIsTruck() const
{
    return m_isTruck;
}

Cars::Model Cars::getType() const
{
    return m_Type;
}

float Cars::getCarrying() const
{
    return m_Carrying;
}

QString Cars::getNumber() const
{
    return m_Number;
}

float Cars::getSize(int val) const
{
    return m_Size[val];
}

Cars::Cars(bool isTruck, Cars::Model type, float carrying, QString number
           , float length, float width, float height,float*size):m_isTruck(isTruck),m_Type(type)
  ,m_Carrying(carrying),m_Length(length),m_Width(width),m_Height(height)
{
    m_Number = number;
    for(uint i =0;i<3;++i)
    {
        m_Size[i] = size[i];
    }
}
