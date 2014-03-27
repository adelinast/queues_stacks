#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"
#include "stack.h"

template<typename T>
class Queue{
    public:
        Queue();
        ~Queue();
        void enqueue(T item);
        T dequeue();
    private:
        Stack<T> *m_stack1;
		Stack<T> *m_stack2;
};

#endif //QUEUE_H