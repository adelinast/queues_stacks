#ifndef STACK_H
#define STACK_H

#include "node.h"

template<typename T>
class Stack{
    public:
        Stack();
        ~Stack();
        void push(T data);
        T pop();
		T top();
		bool empty();
    private:
        Node *m_head;
};


#endif // STACK_H 
