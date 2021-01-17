#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10, p = 5, q = 10, r ;
    r = n == (p = q) ;
    n = p = q = 5;
    n += p += q ;
    printf("%d\n", 'w' - 2024);

    return 0;
}
