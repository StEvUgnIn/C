#include <stdio.h>
#include <stdlib.h>
#include <time.h>

size_t lireTaille(void);
int* allocationTableau(size_t);
int* remplirTableau(size_t, int[]);
void affichageTableau(size_t, int[]);
void* liberationTableau(int**);

int main() {
    // déclarations (n, tab)
    size_t n;
    int *tab;
    n=lireTaille() ; // récupère saisie utilisateur
    tab=allocationTableau(n); // allocation dynamique de la mémoire
    remplirTableau(n, tab); // valeur aléa. <= tableau
    affichageTableau(n, tab);
    liberationTableau(&tab); // Libère la mémoire et tab <= NULL
}

size_t lireTaille(void)
{
    size_t N;
    printf("Taille souhaitee ? ");
    scanf("%u", &N);
    return N;
}

int* allocationTableau(size_t taille)
{
    return (int*) calloc(taille, sizeof(int)); // sizeof(int) = 4
}

#define random(min, max) rand() % ((max + 1) - (min)) + (min) // OK
int* remplirTableau(size_t taille, int tableau[taille])
{
    srand(time(NULL));
    for (size_t i = 0; i < taille; ++i)
    {
        *(tableau+i) = random(32, 126);
    }
    return tableau;
}
#undef random

void affichageTableau(size_t taille, int tableau[taille])
{
    printf("parcours par formalisme tableur\n");
    for (size_t i = 0; i < taille; ++i)
    {
        printf("%p %d\n", &tableau[i], tableau[i]);
    }
    printf("\n");

    printf("parcours par formalisme pointeur\n");
    for (size_t i = 0; i < taille; ++i)
    {
        printf("%p %d\n", tableau+i,*(tableau+i));
    }
    printf("\n");

    printf("parcours avec un pointeur\n");
    for (int *ptr = tableau; ptr != tableau+taille; ++ptr)
    {
        printf("%p %d\n", ptr,*(ptr));
    }
    printf("\n");

    printf("affichage par caractere\n");
    {
        // corrigé
        char *ptr = (char*)tableau;
        for (size_t i = 0; i < taille * sizeof *tableau; ++i, ++ptr)
        {
            printf("%3d/%c\n", *ptr, *ptr);
        }
        // ptr = NULL; // ptr existe seulement dans le scope
    }
    printf("\n\n");
}

void* liberationTableau(int **p_tableau)
{
    free(*p_tableau);
    *p_tableau = NULL;
    return *p_tableau;
}
