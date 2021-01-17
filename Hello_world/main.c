#include <stdio.h>
#include <stdlib.h>
#include "hello.h"
#include "world.h"

int main(void)
{
    printHello();
    printf(", ");
    printWorld();
    puts("!");
    exit(EXIT_SUCCESS);
}
