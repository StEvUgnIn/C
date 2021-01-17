#include <stdio.h>
#include <string.h>
#include "main.h"

int main(void)
{
    const size_t TAILLE = 50;
    size_t n;
    int tabneg [TAILLE];
    int tab    [TAILLE];
    int tabpos [TAILLE];

    n = entree_utilisateur(TAILLE);

    remplir_tableau(n, tab);
    int pos = copie_pos(n, tabpos, tab);
    int neg = copie_neg(n, tabneg, tab);
    printf("tab: \n");afficher_tableau(n, tab);
    printf("tabpos: \n");afficher_tableau(pos, tabpos);
    printf("tabneg: \n");afficher_tableau(neg, tabneg);
    // printf("Somme: %d", somme_des_valeurs(n, arr)); // tab_ex1
    
    getchar();  // fin du programme
    exit(EXIT_SUCCESS);
}

int copie_neg(size_t length, int* dest, const int src[length])
{
    int copie = 0;
    for (size_t i = 0; i < length; i++) {
        if (src[i] < 0) {
            ++copie;
            memcpy(dest++, src+i, sizeof *dest);
        }
    }
    return copie;
}

int copie_pos(size_t length, int dest[length], const int src[length])
{
    int copie = 0;
    for (size_t i = 0; i < length; i++) 
        if (src[i] > 0) {
            ++copie;
            memcpy(dest++, src+i, sizeof *dest);
        }
    return copie;
}

void afficher_tableau(size_t length, int array[length])
{
    for (size_t i = 0; i < length; ++i) printf("[%u] %d\n", i+1, array[i]);
    printf("\n");
}

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

int somme_des_valeurs(size_t length, int array[length])
{
    int s = 0;
    for (size_t i = 0; i < length; ++i) s += array[i];
    return s;
}