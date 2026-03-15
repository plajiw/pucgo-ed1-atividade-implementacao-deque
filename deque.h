#include <stdbool.h>

#ifndef DEQUE_H
#define DEQUE_H

typedef struct deque
{
    int size;
    struct node* head;
    struct node* tail;
} Deque;

void createDeque(Deque* deque);

void destroyDeque(Deque* deque);

void makeEmptyDeque(Deque* deque);

bool isEmpty(Deque* deque);

bool hasOneElement(Deque* deque);

int size(Deque* deque);

int firstElement(Deque* deque);

int lastElement(Deque* deque);

void findElement(Deque* deque, int value);

void insertFront(Deque* deque, int value);

void insertBack(Deque* deque, int value);

void popFront(Deque* deque);

void popBack(Deque* deque);

void printFrontBack(Deque* deque);

void printBackFront(Deque* deque);

#endif