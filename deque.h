#ifndef DEQUE_H
#define DEQUE_H

typedef struct deque
{
    int size;
    struct node *head;
    struct node *tail;
} Deque;

void createDeque(Deque *d);

void destroyDeque(Deque *d);

bool isEmpty(Deque *d);

int size(Deque *d);

int first(Deque *d);

int last(Deque *d);

void findItem(Deque *d, int value);

void insertFront(Deque *d, int value);

void insertBack(Deque *d, int value);

void popFront(Deque *d);

void popBack(Deque *d);

void printFrontBack(Deque *d);

void printBackFront(Deque *d);

#endif