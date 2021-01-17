#include <stdio.h>
#include <stdlib.h>

int sgn_produit(int a, int b);

int main()
{
    int a, b;
    #ifdef DEBUG
    for (;;) {
    printf("\n\n");
    #endif // DEBUG
    printf("Entrez deux valeurs entieres [ a, b ] : ");
    scanf("%d, %d", &a, &b);
    {
        int sgn = sgn_produit(a, b);
        printf("Le signe produit de la multiplication de a et b est %c",
            sgn > 0 ? '+' : sgn < 0 ? '-' : '0'); // OK
    }
    #ifdef DEBUG
    }
    #endif // DEBUG
    printf("\n");
    printf("Appuyez sur une touche pour continuer...");
    getchar();
    return 0;
}

/**
* indique le signe de la multiplication entre deux nombres a et b
* @param  a entier
* @param  b entier
* @return le signe du produit de la multiplication de a et b
*/
int sgn_produit(int a, int b) // OK
{
    int sgn;
    if (a <= b) // OK
    {
        if (a < 0) {
            if (b < 0) sgn = +1;
            else if (b > 0) sgn = -1;
            else sgn = 0;
        } else if (a > 0) {
            if (b < 0) sgn = -1;
            else if (b > 0) sgn = +1;
            else sgn = 0;
        } else sgn = 0;
    }
    else if (b < a) // OK
    {
      if (b < 0) {
            if (a < 0) sgn = +1;
            else if (a > 0) sgn = -1;
            else sgn = 0;
        } else if (b > 0) {
            if (a < 0) sgn = -1;
            else if (a > 0) sgn = +1;
            else sgn = 0;
        } else sgn = 0;
    } else //if (a==b) // OK
    {
        sgn = 0;
    }

    return sgn; // OK
}
