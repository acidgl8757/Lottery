#include <iostream>
#include "lottery.h"

int main(int argc, char** argv)
{
    Lottery lottery;

    lottery.init();
    lottery.run();

    return 0;
}
