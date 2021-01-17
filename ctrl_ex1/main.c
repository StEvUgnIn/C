#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    #define ALEAT
    #ifndef ALEAT
    int nombre = 0;
    const float limite = -1.0;
    float x = -6.0;
    float prix = 2.25;
    int offre = 15000;
    int demande = 5000;
    int valeur  = 23;
    #else
    #ifndef NULL
    #define NULL ((void*)0)
    #endif // NULL
    srand(time(NULL));

    int nombre = rand();
    const float limite = (float)rand() / 10.0;
    float x = (float)rand() / 10.0;
    float prix = (float)rand() / 100.0;
    int offre = rand();
    int demande = rand();
    int valeur  = rand() % 50;

    #endif

    enum Couleur
    {
        rouge,
        verte
    } couleur;

    // a)
    nombre = nombre < 1 ? nombre + 1 : nombre;
    // b)
    x = x < limite ? x / 2 : x * 2;
    // c
    prix = offre > demande ? demande * 0.95 : demande * 1.07;
    // d
    printf(valeur >= 0 ? "valeur positive " : "");
    // e
    if (couleur = rouge)  // ce if ne peut pas être réécrit au moyen de ?:
    {
        couleur = verte;
        printf("vert\n");
    }

    getchar();
    return 0;
}
