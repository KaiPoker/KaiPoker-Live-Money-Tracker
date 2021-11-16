#ifndef __NODE_H__
#define __NODE_H__
template<typename T>
class Node
{
    private: 
        T data; // Stores the data contained in the node
        Node *ptrNext; // Points to the next node in the linked list
        Node *ptrPrev; // Points to the previous node in the linked list
    public:
        // Constructors

        // Default constructor that initalizes pointers to nullptr and data to the default value
        Node() : ptrNext(nullptr), ptrPrev(nullptr){} 

        // Alternate constructor that initalizes pointers to nullptr but sets data in this node to the value specified
        Node(T data) : data(data), ptrNext(nullptr), ptrPrev(nullptr){} 
        
        // Getters

        // Gets the data in the node
        T getData() const {return data;} 

        // Gets the pointer to the next node in the linked list
        Node<T> *getNext() const {return ptrNext;} 

        // Gets the pointer to the previous node in the linked list
        Node<T> *getPrev() const {return ptrPrev;} 

        // Setters

        // Sets the data in this node
        void setData(T data){this -> data = data;} 

        // Sets the pointer to the next node
        void setNext(Node<T> *ptrNext){this -> ptrNext = ptrNext;} 

        // Sets the pointer to the previous node
        void setPrev(Node<T> *ptrPrev){this -> ptrPrev = ptrPrev;} 
};

#endif