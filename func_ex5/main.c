#include <stdio.h>
#include <stdlib.h>

/**
* Reçoit deux paramètres : une valeur min et une valeur max entre lesquelles le nombre saisi au clavier doit être compris.
* @param min : valeur minimum
* @param max : valeur maximale
* @return valeur saisie au clavier entre min et max
*/
int lireUnEntier(int min, int max);

/**
* affiche une table de multiplication
* @param chiffre nombre quelconque, même si est un nombre n'est pas un chiffre
*/
void table_de_multiplication(char chiffre);

int main(void)
{
    int chiffre = lireUnEntier(-5,10);
    table_de_multiplication(chiffre);
}

int lireUnEntier(int min, int max)
{
    int z;
    do {
        printf("Entrez une valeur: ");
        scanf("%d", &z);
    } while (z < min || z > max);
    return z;
}

void table_de_multiplication(int chiffre)
{
    for (int i = 1; i <= 12; ++i) printf("%3d x%3.1d =%3d\n", i, chiffre, chiffre * i);
}
