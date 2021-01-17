#include <stdio.h>
#include <stdlib.h>

void raz(int *ptr)
{
    *ptr = 0;
}

void testETraz(int *ptr)
{
    if (*ptr != 0) raz(ptr);
}

int main()
{
    int x=19;
    testETraz(&x);
    printf("x: %d\n", x);
    return 0;
}
