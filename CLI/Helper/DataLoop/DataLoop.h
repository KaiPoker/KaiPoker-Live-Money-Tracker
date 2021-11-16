#ifndef __DATALOOP_H__
#define __DATALOOP_H__

#include "../Node/Node.h"
#include <iostream>
#include <string>

template<typename T>
class DataLoop {
    private:
        Node<T> *ptrStart; // Pointer to the starting node in the DataLoop
        size_t count; // Unsigned integer representing the total number of nodes in the DataLoop
    public:
        // Default Constructor which creates an empty DataLoop with ptrStart as nullptr and count as 0
        DataLoop() : ptrStart(nullptr), count(0) {} 

        // Alternate constructor that creates a DataLoop with one node with the specified value
        DataLoop(const T &data);

        // Copy constructor to create a copy of the parameter DataLoop
        DataLoop(const DataLoop<T> &rhs);

        // Overloaded the assignment operator to do a deep copy of the parameter DataLoop
        DataLoop<T> &operator=(const DataLoop<T> &rhs);

        // Destuctor
        ~DataLoop();

        // Helper function to clear the loop
        void clear();

        // Overloaded comparison operation to compare if two DataLoops contain the same values
        bool operator==(const DataLoop<T> &rhs) const;

        // Overloaded += operator to append a value to the end of the dataloop
        DataLoop<T> &operator+=(const DataLoop<T> &rhs);

        // Overloaded + operator to concatenate two DataLoops
        DataLoop<T> operator+(const DataLoop<T> &rhs) const;

        // Overloaded ^ operator to shift the start position in this Dataloop where positive shifts forward and negative shifts backwards
        DataLoop<T> *operator^(int offset);
        
        // Function to splice in an existing DataLoop into this one at the specified position
        DataLoop<T> &splice(DataLoop<T> &rhs, size_t pos);

        // Function to get the length of the DataLoop
        int length() const {return count;}

        // Convert the DataLoop into a displayable std::string
        std::string toString() const; 

        // Overloaded output stream operator << to print DataLoop
        template<typename U>
        friend std::ostream &operator<<(std::ostream &os, const DataLoop<U> &dl);
}

#include "DataLoop.inc"
#endif