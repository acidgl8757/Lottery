#include "periods.h"

Periods::Periods(int p, int data[])
        : m_periods(p)
{
    setRedBall(data);
    setBlueBall(data[Red_Ball_Num]);
}

void Periods::setPeriods(int p)
{
    m_periods = p;
}

void Periods::setRedBall(int data[])
{
    for (int i = 0; i < Red_Ball_Num; i++) {
        m_red[i].setNum(data[i]);
    }
}

void Periods::setBlueBall(int data)
{
    m_blue.setNum(data);
}

int Periods::getPeriods()
{
    return m_periods;
}

Ball& Periods::getRedBall(int index)
{
    if (index >= 0 && index < Red_Ball_Num)
        return m_red[index];
    return NullBall;
}

Ball& Periods::getBlueBall()
{
    return m_blue;
}

