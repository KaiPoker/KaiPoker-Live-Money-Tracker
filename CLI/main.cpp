#include <iostream>
#include "Helper/DataLoop/DataLoop.h"

int main()
{
    DataLoop<int> dl(5);
    DataLoop<int> dl1(dl);
    std::cout << "test" << std::endl;
    return 0;
}