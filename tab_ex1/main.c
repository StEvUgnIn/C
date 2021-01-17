#include <stdio.h>
#include "main.h"

int main(void)
{
    const size_t TAILLE = 50;
    size_t n;
    int arr[TAILLE];

    n = entree_utilisateur(TAILLE);

    remplir_tableau(n, arr);
    afficher_tableau(n, arr);

    printf("Somme: %d", somme_des_valeurs(n, arr));
    getchar();
    exit(EXIT_SUCCESS);
}

/** \brief affiche les cases d'un tableau de type int de longueur minimale length
 * \param length nombre d'éléments int a afficher
 * \param array tableau de taille définie de type int
 */
void afficher_tableau(size_t length, int array[length])
{
    for (size_t i = 0; i < length; ++i) printf("[%u] %d\n", i+1, array[i]);
    printf("\n");
}

/** \brief demande a l'utilisateur de saisir le nombre de valeurs a entrer
 * \param length longueur max du tableau
 * \return nombre de valeurs souhaitees par l'utilisateur
 */
size_t entree_utilisateur(size_t length)
{
    size_t n;
    int ok;
    do
    {
        printf("Combien de valeurs ? "),
        ok = scanf("%u", &n);
        fflush(stdin);
    } while (!ok && n > length && printf("valeur entree n'est pas entre 0 et 50\n"));
    printf("\n");
    return n;
}

//#define DEBUG
/** \brief fais saisir n valeurs a l'utilisateur et les sauvegarde dans un tableau
 * \param length nombre d'éléments int a remplir par l'utilisateur
 * \param array tableau de taille définie de type int
 */
void remplir_tableau(size_t length, int array[length])
{
    for (size_t i=0; i < length; ++i)
    {
        int ok;
#ifndef DEBUG
        do
        {
#endif // DEBUG
        printf("[%u] ", i+1);
        ok = scanf("%u", (int*)(array+i));
#ifndef DEBUG
} while (!ok);
#endif // DEBUG
        fflush(stdin);
    }
    printf("\n");
}

/** \brief fais la somme des valeurs d'un tableau de taille minimale length
 * \param length taille du tableau
 * \param array tableau rempli de taille definie
 * \return somme des valeurs des cases du tableau de taille minimale length
 */
int somme_des_valeurs(size_t length, int array[length])
{
    int s = 0;
    for (size_t i = 0; i < length; ++i) s += array[i];
    return s;
}
