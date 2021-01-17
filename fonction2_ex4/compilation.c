#include <stdio.h>
#include <stdlib.h>

int main()
{
    const short int LIMIT = 255;
    char string[LIMIT];
    int rest;
    gets_s(string, LIMIT);
    puts(string);
    return 0;
}
