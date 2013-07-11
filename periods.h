#ifndef _PERIODS_H_
#define _PERIODS_H_

#include "datatype.h"

#define Red_Ball_Num (6)

class Periods
{
public:
    Periods(int p, int data[]);
    Periods()
            : m_periods(0)
    {
    }
    virtual ~Periods()
    {
    }

    void setPeriods(int p);
    void setRedBall(int data[]);
    void setBlueBall(int data);

    int getPeriods();
    Ball& getRedBall(int index);
    Ball& getBlueBall();

private:
    int m_periods;
    Ball m_red[Red_Ball_Num];
    Ball m_blue;
};

#endif // _PERIODS_H_
