#ifndef __DATALOOP_H__
#define __DATALOOP_H__

#include "../Node/Node.h"
#include <iostream>
#include <string>

template<typename T>
class DataLoop {
    private:
        Node *ptrStart; // Pointer to the starting node in the DataLoop
        size_t count; // Unsigned integer representing the total number of nodes in the DataLoop
    public:
        // Default Constructor which creates an empty DataLoop with ptrStart as nullptr and count as 0
        DataLoop() : ptrStart(nullptr), count(0) {} 

    
        std::string toString() const; // Helper function to convert DataLoop into a std::string
}

#include "DataLoop.inc"
#endif