#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define VIDER_BUFFER fflush(stdin)

#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) < (b)) ? (a) : (b))

int main()
{
    int a, b, c;
    float delta, x1, x2;
    printf("\n");
    printf("Soit un polynome du deuxieme degre de forme a*x^2+bx+c=0\n");
    do {
        printf("Entrez a [ Z*]: ");
        scanf("%d", &a);
        VIDER_BUFFER;
    //} while (a == 0 && printf("a est un entier different zero"));
    } while (0);
    do {
        printf("Entrez b [ Z ]: ");
        scanf("%d", &b);
        VIDER_BUFFER;
    } while (0);
    do {
        printf("Entrez c [ Z ]: ");
        scanf("%d", &c);
        VIDER_BUFFER;
    } while (0);
    printf("\n\n");

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Aucune solution.");
            }
            else
            {
                printf("%d n'est pas egal a zero", c);
            }
        }
        else
        {
            printf("x vaut %f", -c/b);
        }
    }
    else
    {
        delta = b * b - 4 * a * c;

        if (delta < 0)
        {
            printf("\n\nPas de solution dans R pour x");
        }
        else if (delta == 0)
        {
            x1 = x2 = -b / (2 * a);
            printf("x vaut %f", x1);
        }
        else
        {
            x1 = (-b - sqrtf(delta)) / (2 * a);
            x2 = (-b + sqrtf(delta)) / (2 * a);
            printf("x1 vaut %f\n", x1);
            printf("x2 vaut %f", x2);
        }
    }

    getchar();
    exit(EXIT_SUCCESS);
}
