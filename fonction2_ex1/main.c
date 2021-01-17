#include <stdio.h>
#include <stdlib.h>

static double a = 5.0, b = 11.0;

static inline void echange(double *ptr1, double *ptr2)
{
    double temp = *ptr2; // double *ptr = (double*)malloc(sizeof *ptr1); // double tampon
    //*ptr  = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = temp;  // = tampon
    //free(ptr);
}

static inline void affichage()
{
    printf("a=%f, b=%f\n", a, b);
}

int main()
{
    affichage();
    printf("***************\n\techange\n***************\n");
    echange(&a, &b);
    affichage();

    return 0;
}
