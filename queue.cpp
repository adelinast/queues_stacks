#include "queue.h"
#include <stdlib.h>

template<typename T>
Queue<T>::Queue()
{
    m_stack1 = new Stack<T>;
	m_stack2 = new Stack<T>;
}

template<typename T>
Queue<T>::~Queue()
{
    delete m_stack1;
	delete m_stack2;
}

template<typename T>
void Queue<T>::enqueue(T item)
{
	m_stack1->push(item);
}

template<typename T>
T Queue<T>::dequeue()
{
	if (m_stack2->empty())
	{
		
        if (m_stack1->empty()) {
			return NULL;
        }
		while(!m_stack1->empty())
		{
			T item = m_stack1->pop();
			m_stack2->push(item);
		}
	}

	return m_stack2->pop();
}


template class Queue<int>;