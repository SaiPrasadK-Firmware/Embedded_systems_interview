//Q52_Stack_vs_heap_demo.c
#include <stdio.h>
#include <stdlib.h>


int main() {
    int *var1 = malloc(sizeof(int));
    int *var2 = malloc(sizeof(int));

    printf("Address of var1 = %p\n", (void*)var1);
    printf("Address of var2 = %p\n", (void*)var2);

   

    

    free(var1);
    free(var2);
    return 0;
}

