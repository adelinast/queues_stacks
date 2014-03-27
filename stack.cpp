#include "stack.h"
#include <stdlib.h>

template<typename T>
Stack<T>::Stack()
{
    m_head = NULL;
}

template<typename T>
Stack<T>::~Stack()
{
    Node *tmp;
    while (m_head)
    {
        tmp = m_head;
        m_head = m_head->next;
        delete tmp;
    }
}

template<typename T>
void Stack<T>::push(T data)
{
    // add data to beginning
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = m_head;
    m_head = newNode;
	
}

template<typename T>
T Stack<T>::pop()
{
    // remove first
    if (m_head == NULL)
    {
        return NULL;
    }

    Node *tmp = m_head;
    T data = m_head->data;
    m_head = m_head->next;

    delete tmp;

    return data;
}

template<typename T>
bool Stack<T>::empty()
{
	return m_head == NULL;
}

template class Stack<int>;