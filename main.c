#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

int main()
{
    Deque deque;
    createDeque(&deque);

    printf("\nInserção 'head':\n");
    insertFront(&deque, 10);
    insertFront(&deque, 20);
    insertFront(&deque, 30);
    printFrontBack(&deque);

    printf("\nInserção 'tail':\n");
    insertBack(&deque, 40);
    insertBack(&deque, 50);
    printFrontBack(&deque);

    printf("\nVerificando balores:\n");
    printf("Primeiro elemento: %d\n", firstElement(&deque));
    printf("Último elemento: %d\n", lastElement(&deque));
    printf("Tamanho atual: %d\n", size(&deque));

    printf("\nBuscando valores:\n");
    findElement(&deque, 20);
    findElement(&deque, 99);

    printf("\nRemovendo elementos:\n");
    printf("Removendo da 'head' e da 'tail'\n");
    popFront(&deque);
    popBack(&deque);
    printFrontBack(&deque);

    printf("\nPrint inverso:\n");
    printBackFront(&deque);

    printf("\nLimpeza:\n");
    makeEmptyDeque(&deque);
    printf("Tamanho após limpeza: %d\n", size(&deque));
    
    destroyDeque(&deque);

    return 0;
}