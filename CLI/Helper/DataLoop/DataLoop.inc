#include "DataLoop.h"
#include <iostream>
#include <string>
#include <sstream>

template<typename T>
DataLoop<T>::DataLoop(const T &num)
{
    ptrStart = new Node<T>(num);
    ptrStart -> getNext() = ptrStart;
    ptrStart -> getPrev() = ptrStart;
    ++count;
}