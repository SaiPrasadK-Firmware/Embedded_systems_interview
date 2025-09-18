//Q52_Stack_vs_heap_demo.c
#include <stdio.h>
#include <stdlib.h>

void check_stack() {
    int a, b;
    printf("Address of a (stack) = %p\n", (void*)&a);
    printf("Address of b (stack) = %p\n", (void*)&b);

    if (&b < &a)
        printf("Stack grows downward\n");
    else
        printf("Stack grows upward\n");
}

int main() {
    int *heap1 = malloc(sizeof(int));
    int *heap2 = malloc(sizeof(int));

    printf("Address of heap1 = %p\n", (void*)heap1);
    printf("Address of heap2 = %p\n", (void*)heap2);

    if (heap2 > heap1)
        printf("Heap grows upward\n");
    else
        printf("Heap grows downward\n");

    check_stack();

    free(heap1);
    free(heap2);
    return 0;
}

