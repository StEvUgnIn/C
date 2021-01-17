/*
 * @description Ecrire un programme qui calcule la surface d'un cercle lorsqu'on introduit la valeur du rayon.
 *              Le r�sultat sera affich� avec 2 chiffres significatifs (apr�s le point).
 */

#include <stdio.h>
#include <stdlib.h>
// #include <math.h> // donne la constante M_PI

int main(void)
{
    float rayon, surface;
                              // remplace la constante M_PI
    const float PI = 3.142;   // r�sultat avec une pr�cision de 2 d�cimales

    printf("Entrer le rayon du cercle : ");
    scanf("%f", &rayon);
    surface = PI*rayon*rayon; // pi * r^2
    printf("La surface du cercle de rayon %5.2f est de %6.2f", rayon, surface);

    exit(EXIT_SUCCESS);
}
