#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    size_t taille; // taille en bytes
    size_t mem = 0;
    printf("Taille souhaitee ? ");
    scanf("%u", &taille);

    int *ptr;
    int i = 0;
    do
    {
        printf("\n");
        ptr = calloc(taille, sizeof *ptr); // fuite memoire en bytes
    }
    while (ptr != NULL && printf("Allocation bloc numero : %d, %.0f [megabytes]", ++i, (mem += taille * sizeof *ptr) / 1e6));

    printf("Memoire insuffisante - arret de l'execution !!!\n"),
    printf("Memore allouee : %d [Gigabytes]\n", (sizeof *ptr * mem) >> 30);

    return 0;
}
