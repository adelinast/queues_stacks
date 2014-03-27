#include "gtest/gtest.h"
#include "queue.h"
#include "test_queue.h"
/*Queues are a last-in-first-out data structure that we just saw used as a "next to visit" data store in breadth-first search.

Stacks are a first-in-first-out data structure used in depth-first search, and can often be used to implement recursive algorithms iteratively (because the call stack is, itself, a stack).

For this problem, you are to create a queue using two stacks. So your Queue will support the operations:

    enqueue(item), which inserts an item into the queue
    dequeue(), which removes and returns the oldest item in the queue

Your two Stacks (which your programming language may have available already, otherwise you can create your own pretty easily) have the following operations:

    push(item), which inserts an item at the top of the stack
    pop(), which removes and returns the top item of the stack
*/

