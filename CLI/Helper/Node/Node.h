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
        Node() : ptrNext(nullptr), ptrPrev(nullptr){} // Create new node with everything initialized to default values
        Node(T data) : data(data), ptrNext(nullptr), ptrPrev(nullptr){} // Create new node with a specified value for the data
        
        // Getters
        T getData() const {return data;} // Get the data in the node
        Node *getNext() const {return ptrNext;} // Get the pointer to the next node in the linked list
        Node *getPrev() const {return ptrPrev;} // Get the pointer to the previous node in the linked list

        // Setters
        void setData(T data){this -> data = data;} // Set the data in the node
        void setNext(Node *ptrNext){this -> ptrNext = ptrNext;} // Set the pointer to the next node
        void setPrev(Node *ptrPrev){this -> ptrPrev = ptrPrev;} // Set the pointer to the previous node
};

#endif