#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define max(a, b) ((a > b) ? (a) : (b))

double calculIntegrale(double (*)(double), double, double);
static inline bool controleBornes(double *, double *);

int main(int argc, char **argv)
{
     // 2 5
    double res1=calculIntegrale(&log, 2., 5.);
    double res2=calculIntegrale(&exp, -1, 3) ;
    double res3=calculIntegrale(&sin, M_PI_2, M_PI);
    printf("res1 %f\n", res1);
    printf("res2 %f\n", res2);
    printf("res3 %f\n", res3);
    exit(EXIT_SUCCESS);
}

double calculIntegrale(double (*ptrf)(double), double a, double b)
{
    controleBornes(&a, &b);
    double somme = 0.0;
    for (double dx = fabs (b - a) / 1000.0, x = a+dx; x <= b; x += dx)
    {
        somme += ((*ptrf)(x-dx) + (*ptrf)(x)) / 2 * dx;
    }
    return somme;
}

bool controleBornes(double *a, double *b)
{
    if (*a <= *b) return true;
    double t = *a;
    *a = *b;
    *b = t;
    return false;
}
