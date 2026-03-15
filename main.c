#include "stdlib.h"
#include "deque.h"

int main()
{
    Deque deque;
    createDeque(&deque);
    insertFront(&deque, 2);

    return 0;
}