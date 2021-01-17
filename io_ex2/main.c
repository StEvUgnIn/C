#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char l1, l2, l3;

    printf("Entrer 3 lettres : ");
    scanf("%c %c %c", &l1, &l2, &l3);
    printf("\nVoici les correspondances ASCII des trois lettres :\n");
    printf("%c--------->%d\n", l1, l1);
    printf("%c--------->%d\n", l2, l2);
    printf("%c--------->%d"  , l3, l3);
    printf("\n");

    exit(EXIT_SUCCESS);
}
