#include <stdio.h>
#include <math.h>

int main(void)
{
double a;
double b;
double resultat;
/* Saisie de a et b */
printf("Introduire la valeur pour A : ");
scanf("%lf", &a);
printf("Introduire la valeur pour B : ");
scanf("%lf", &b);
/* Calcul */
resultat = a*a;
/* Affichage du resultat */
printf("Le carre de A est %lf \n", resultat);
/* Calcul */
resultat = b*b;
/* Affichage du resultat */
printf("Le carre de B est %lf \n", resultat);
/* Calcul */
resultat = pow(a, b);
/* Affichage du resultat */
printf("A a la puissance B vaut %lf \n", resultat);
/* Calcul */
resultat = sin(a)/cos(a);
/* Affichage du resultat */
printf("La tangeante de A est %lf \n", resultat);
/* Calcul */
resultat = a/b;
/* Affichage du resultat */
printf("Le quotient de A par rapport a B est %lf \n", (double)((int)resultat));
/* Calcul */
resultat = a/b;
/* Affichage du resultat */
printf("Le quotient a trois decimales pres est %.3lf \n", (double)((int)(resultat*1000.0)) / 1000.0);

// ... completer ici avec les nouvelles fonctions
return 0 ;
}
