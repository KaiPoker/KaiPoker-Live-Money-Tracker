#include "DataLoop.h"
#include <iostream>
#include <string>
#include <sstream>

template<typename T>
DataLoop<T>::DataLoop(const T &num)
{
    // Create first node and have it point to itself
    ptrStart = new Node<T>(num);
    ptrStart -> getNext() = ptrStart;
    ptrStart -> getPrev() = ptrStart;

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
    Node *ptrRhsCur = rhs.ptrStart;
    for(int i = 0; i < rhs.count; ++i)
    {
        (*this) += ptrRhsCur -> data;
        cur = cur -> ptrNext;
    }
}