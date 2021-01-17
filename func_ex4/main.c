#include <stdio.h>
#include <stdlib.h>

int carre(int x);

int main()
{
    int n = 0;
    printf("Entrez une valeur : \n");
    scanf("%d", &n);
    for (int i = 1; carre(i) <= n; ++i) printf("%d au carre vaut %d\n", i, carre(i));
    getchar();
    return 0;
}

int carre (int x) { return x * x; }
