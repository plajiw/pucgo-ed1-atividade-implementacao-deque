#include "stdlib.h"
#include "deque.h"

int main()
{
    Deque deque;
    createDeque(&deque);

    insertFront(&deque, 1);
    insertFront(&deque, 2);
    insertFront(&deque, 3);

    insertBack(&deque, 7);
    insertBack(&deque, 8);
    insertBack(&deque, 9);

    return 0;
}