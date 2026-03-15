#ifndef NODE_H
#define NODE_H

typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
} Node;

Node *createNode(int item);

#endif