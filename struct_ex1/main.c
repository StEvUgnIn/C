#include <stdio.h>
#include <stdlib.h>
// prototypes ou définitions des fonctions
struct essai {
    int n;
    float x;
};

int afficher(struct essai *);
struct essai* RAZ(struct essai *);

int main(void)
{
    // déclarer une variable toto et l'initialiser
    struct essai *toto = malloc(sizeof *toto);
    *toto = (struct essai){ .n = 1, .x = 0.5 };

    afficher(toto);
    RAZ(toto);
    afficher(toto);
    return 0;
}

int afficher(struct essai *e)
{
    return printf("%d %f\n", e->n, e->x);
}

struct essai* RAZ(struct essai *e)
{
    *e = (struct essai){ .n = 0, .x = 0};
    return e;
}
