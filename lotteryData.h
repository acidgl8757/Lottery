#ifndef _LOTTERYDATA_H_
#define _LOTTERYDATA_H_

#include "periods.h"

class LotteryData
{
public:
    LotteryData();
    virtual ~LotteryData() {}

private:
    std::vector<Periods> m_data;
};

#endif //_LOTTERYDATA_H_
