#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double capital1, capital2, taux, duree;

    printf("Quel est votre capital initial? ");
    scanf("%lf", &capital1);

    printf("Quel est le taux d'interet (annuel) de la banque en pourcent? ");
    scanf("%lf", &taux);
    taux /= 100;

    printf("Duree du depot? ");
    scanf("%lf", &duree);

    capital2 = capital1 * pow(1.0 + taux, duree);
    printf("\n");

    const char message[100];
    sprintf(message, "Apres 10 ans, votre capital (avec interets) sera de %10.2lf SFr", capital2);

    printf(message);
    printf("\n");

    return EXIT_SUCCESS;
}
