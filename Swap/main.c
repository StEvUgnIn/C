#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int variable1=10;
    int variable2= 5;

    /* Avant l’échange du contenu des variables */
    printf("Variable 1: %d \n", variable1); /*  Variable 1: 10 */
    printf("Variable 2: %d \n", variable2); /*  Variable 2: 5 */

    /* Echange du contenu des variables */
    #ifdef i386
    asm volatile ("xchg %0, %1"    // ref : https://gcc.gnu.org/onlinedocs/gcc/Extended-Asm.html#Extended-Asm
            : "+r" (variable1)     // sup : https://gcc.gnu.org/onlinedocs/gcc/Multi-Alternative.html#Multi-Alternative
            : "g" (variable2));
    #else
    {
        int copie = variable1;
        variable1 = variable2;
        variable2 = copie;

    }
    #endif

    /* Après l’échange du contenu des variables */
    printf("Variable 1: %d \n", variable1); /*  Variable 1: 5 */
    printf("Variable 2: %d \n", variable2); /*  Variable 2: 10 */

    exit(EXIT_SUCCESS);
}
