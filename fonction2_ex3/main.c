#include <stdio.h>
#include <stdlib.h>

void resetPointer(int **ptr);

int main()
{
    int x ;
    int *ptr=&x ;
    printf("ptr : %p\n", ptr);
    resetPointer(&ptr);
    printf("ptr : %p\n", ptr); // -> NULL return 0 ;
}

void resetPointer(int **ptr) // une fonction ne peut pas modifier une variable
{
    free(*ptr);
    *ptr = NULL;
}
