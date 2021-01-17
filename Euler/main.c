#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>

double _Complex mathVal(double _Complex (*f)(double _Complex d))
{
    return f (I * M_PI);
}


int main()
{
    double _Complex d = mathVal(cexp);
    printf("%f%+fi", creal(d), cimag(d));
    return 0;
}
