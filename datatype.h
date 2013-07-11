#ifndef _DATATYPE_H_
#define _DATATYPE_H_

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>

template<class T>
std::string ConvertToString(T value)
{
    std::stringstream ss;
    ss << value;

    return ss.str();
}

struct Number
{
    Number(int n)
            : num(n)
    {
        str = ConvertToString(num);
        if (0 == (num % 2))
            isOdd = false;
        else
            isOdd = true;
    }
    Number()
    {
    }

    void setNum(int n)
    {
        num = n;
        str = ConvertToString(num);
        if (0 == (num % 2))
            isOdd = false;
        else
            isOdd = true;
    }

    int num; // integer
    std::string str; // string

    bool isOdd; // is odd number
};

class Ball
{
public:
    Ball(int n)
            : num(n), decimal(num / 10), unit(num % 10)
    {
        m_isOdd = unit.isOdd;
    }
    Ball()
    {
        setNum(0);
    }
    virtual ~Ball()
    {
    }

    inline void setNum(int n)
    {
        num = n;
        decimal.setNum(num / 10);
        unit.setNum(num % 10);
        m_isOdd = unit.isOdd;
    }

    inline bool isOdd()
    {
        return m_isOdd;
    }

private:
    int num;
    Number decimal;
    Number unit;

    bool m_isOdd;
};

static Ball NullBall;

#endif //_DATATYPE_H_
