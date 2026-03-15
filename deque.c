#include "stdlib.h"
#include "stdbool.h"
#include "deque.h"
#include "node.h"

void createDeque(Deque *d)
{
    d->size = 0;
    d->head = NULL;
    d->tail = NULL;
}

void destroyDeque(Deque *d);

bool isEmpty(Deque *d);

int size(Deque *d);

int first(Deque *d);

int last(Deque *d);

void findItem(Deque *d, int value);

void insertFront(Deque *d, int value)
{
    Node *node = createNode(value);
    d->size++;
}

void insertBack(Deque *d, int value);

void popFront(Deque *d);

void popBack(Deque *d);

void printFrontBack(Deque *d);

void printBackFront(Deque *d);