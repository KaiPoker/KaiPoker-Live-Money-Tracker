#ifndef __NODE_H__
#define __NODE_H__
template<typename T>
class Node
{
    private: 
        T data;
        Node *ptrNext;
        Node *ptrPrev;
    public:
        // Constructors
        Node() : ptrNext(nullptr), ptrPrev(nullptr){}
        Node(T data) : data(data), ptrNext(nullptr), ptrPrev(nullptr){}
        
        // Getters
        T getData() const {return data;}
        Node *getNext() const {return ptrNext;}
        Node *getPrev() const {return ptrPrev;}

        // Setters
        void setData(T data){this -> data = data;}
        void setNext(Node *ptrNext){this -> ptrNext = ptrNext;}
        void setPrev(Node *ptrPrev){this -> ptrPrev = ptrPrev;}
};

#endif