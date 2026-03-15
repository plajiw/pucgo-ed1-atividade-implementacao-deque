#include "stdlib.h"
#include "node.h"

Node *createNode(int item)
{
    Node *newNode = malloc(sizeof(Node));
    if (newNode != NULL)
    {
        newNode->data = item;
        newNode->prev = NULL;
        newNode->next = NULL;
    }
    return newNode;
}