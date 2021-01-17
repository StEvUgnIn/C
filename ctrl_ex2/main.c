#include <stdio.h>
#include <stdlib.h>
//#include <ctype.h>

#ifndef _CTYPE_H_ // si ctype.h n'est pas inclu
int islower(char car);
int isupper(char car);
#endif // _C_TYPE_H

int main()
{
    char lettre;
    printf("Tapez une lettre : ");
    scanf("%c", &lettre);
    printf(islower(lettre) ? "minuscule" : "") ||
    printf(isupper(lettre) ? "MAJUSCULE" : "") ||
    printf("Ce n'est pas un caractere");
    getchar();
    return 0;
}

#ifndef _CTYPE_H_
int islower(char car)
{
    return car >= 'a' && 'z' >= car;
}

int isupper(char car)
{
    return car >= 'A' && 'Z' >= car;
}
#endif // _CTYPE_H_
