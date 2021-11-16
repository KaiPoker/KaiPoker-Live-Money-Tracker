#include "DataLoop.h"
#include <iostream>
#include <string>
#include <sstream>

template<typename T>
DataLoop<T>::DataLoop(const T &num)
{
    // Create first node and have it point to itself
    ptrStart = new Node<T>(num);
    ptrStart -> setNext(ptrStart);
    ptrStart -> setPrev(ptrStart);

    // Update count
    ++count;
}

template<typename T>
DataLoop<T>::DataLoop(const DataLoop<T> &rhs)
{
    // Initialize default values
    ptrStart = nullptr;
    count = 0;

    // Use operator+= to copy node by node
    Node<T> *ptrRhsCur = rhs.ptrStart;
    for(size_t i = 0; i < rhs.count; ++i)
    {
        (*this) += ptrRhsCur -> getData();
        ptrRhsCur = ptrRhsCur -> getNext();
    }
}