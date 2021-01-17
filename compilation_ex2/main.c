#include <stdio.h>
#include <stdlib.h>

#ifndef __STDC_LIB_EXT1__
#define gets_s(text, size) fgets(text, size, stdin)
#endif

int main()
{
    const short int LIMIT = 255;
    char string[LIMIT];
    int rest;
    gets_s(string, LIMIT);
    puts(string);
    return 0;
}
