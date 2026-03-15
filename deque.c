#include "deque.h"

#include "node.h"
#include "stdbool.h"
#include "stdlib.h"
#include "stdio.h"

#define ERROR_RETURN -1

void createDeque(Deque* deque)
{
    deque->size = 0;
    deque->head = NULL;
    deque->tail = NULL;
}

void destroyDeque(Deque* deque)
{
    makeEmptyDeque(deque);
}

void makeEmptyDeque(Deque* deque)
{
    Node* currentNode = deque->head;
    while (currentNode != NULL)
    {
        Node* nextNode = currentNode->next;
        free(currentNode);
        currentNode = nextNode;
    }

    deque->size = 0;
    deque->head = NULL;
    deque->tail = NULL;
}

bool isEmpty(Deque* deque)
{
    return deque->head == NULL && deque->tail == NULL;
}

bool hasOneElement(Deque* deque)
{
    return deque->size == 1;
}

int size(Deque* deque)
{
    return deque->size;
}

int firstElement(Deque* deque)
{
    if (!isEmpty(deque))
        return deque->head->data;

    return ERROR_RETURN;
}

int lastElement(Deque* deque)
{
    if (!isEmpty(deque))
        return deque->tail->data;

    return ERROR_RETURN;
}

void findElement(Deque* deque, int value)
{
    Node* currentNode = deque->head;
    int pos = 0;
    bool found = false;

    while (currentNode != NULL)
    {
        if(currentNode->data == value)
            printf("[%d] - %d\n", pos, value);

        currentNode = currentNode->next;
        pos++;
    }
    
    if (!found)
        printf("Not found\n");
}

void insertFront(Deque* deque, int value)
{
    Node* newNode = createNode(value);

    if (isEmpty(deque))
    {
        deque->head = deque->tail = newNode;
    }
    else
    {
        newNode->next = deque->head;
        deque->head->prev = newNode;
        deque->head = newNode;
    }

    deque->size++;
}

void insertBack(Deque* deque, int value)
{
    Node* newNode = createNode(value);

    if (isEmpty(deque))
    {
        deque->head = deque->tail = newNode;
    }
    else
    {
        newNode->prev = deque->tail;
        deque->tail->next = newNode;
        deque->tail = newNode;
    }

    deque->size++;
}

void popFront(Deque* deque)
{
    if (isEmpty(deque))
        return;

    Node* tempNode = deque->head;

    if (hasOneElement(deque))
    {
        deque->head = deque->tail = NULL;
    }
    else
    {
        deque->head = tempNode->next;
        deque->head->prev = NULL;
    }

    deque->size--;
    free(tempNode);
}

void popBack(Deque* deque)
{
    if (isEmpty(deque))
        return;

    Node* tempNode = deque->tail;

    if (hasOneElement(deque))
    {
        deque->head = deque->tail = NULL;
    }
    else
    {
        deque->tail = tempNode->prev;
        deque->tail->next = NULL;
    }

    deque->size--;
    free(tempNode);
}

void printFrontBack(Deque* deque)
{
    Node* currentNode = deque->head;
    int pos = 0;

    while (currentNode != NULL)
    {
        printf("[%d] = %d\n", pos, currentNode->data);
        currentNode = currentNode->next;
        pos++;
    }
}

void printBackFront(Deque* deque)
{
    Node* currentNode = deque->tail;
    int pos = size(deque);

    while (currentNode != NULL)
    {
        printf("[%d] = %d\n", pos, currentNode->data);
        currentNode = currentNode->prev;
        pos--;
    }
}