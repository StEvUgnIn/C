#include <stdio.h>
#include <stdlib.h>

int main()
{
    double tempC, tempF;

    printf("Veuillez donner une temperature en degres Celsius : "),
    scanf("%lf", &tempC);
    tempF = 32 + 1.8*tempC;
    printf("%0.0lf degres Celsius correspond a %1.1lf degres Farenheit", tempC, tempF),
    printf("\n");

    return 0;
}
