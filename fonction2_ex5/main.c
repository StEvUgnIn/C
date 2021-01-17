#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void affichage(char *message)
{
    printf("%s\n", message);
}

char* definir_langue (char lang)
{
    char *string = malloc(50);
    switch (lang)
    {
        case 'D':
            strcpy(string, "Hallo, Welt!");
            break;
        case 'F':
            strcpy(string, "Bonjour, le monde !");
            break;
        case 'I':
            strcpy(string, "Ciao Mundo!");
            break;
        case 'S':
            strcpy(string, "Hola Mundo!");
            break;
        default:
            strcpy(string, "Hello, World!");
    }
    return string;
}

int main(int argc, char *argv[])
{
    char lang = 0;
    char *message;
    if (*argv+1 != NULL) lang = *argv[1];
    free(argv);
    message = definir_langue(lang);
    affichage(message);
    free(message);
    exit(EXIT_SUCCESS);
}
