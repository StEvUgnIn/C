/*
* @sources      https://www.includehelp.com/c-programs/gotoxy-clrscr-getch-getche-for-gcc-linux.aspx
                https://faq.cprogramming.com/cgi-bin/smartfaq.cgi?answer=1044844545&id=1043284392
                https://stackoverflow.com/questions/6812224/getting-terminal-size-in-c-for-windows#12642749
*
* @description  Faire un programme qui récupère en continu les caractères saisis au clavier (sans enter)
*               pour déplacer un symbole ‘*’ à travers l’écran.
*               Si le symbole dépasse un des bords, il réapparait de l’autre coté.
*               Pour effacer l’écran, on peut utiliser une commande système « cls » par exemple.
**/

#include "main.h"

CONSOLE_SCREEN_BUFFER_INFO *csbi;

int main(void)
{
    int x = 0, y = 0;
    SetConsoleTitleA("IO - Exercice 4");
    csbi = malloc(sizeof(CONSOLE_SCREEN_BUFFER_INFO));
    printf("*");

    for (;;)
    {
        const int MOVE = 1;

        switch (getch()) {
            case 'w': case 'W':
                y -= MOVE;
                break;
            case 's': case 'S':
                y += MOVE;
                break;
            case 'a': case 'A':
                x -= MOVE;
                break;
            case 'd': case 'D':
                x += MOVE;
                break;
            default: continue;
        }

        clrscr();

        checkxy(&x, &y);

        gotoxy(x, y);
        printf("*");

        writexy(x, y);
    }
    free(csbi);
    exit(EXIT_SUCCESS);
}

void checkxy(int *x, int *y)
{
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), csbi);
    if (*x < 0) *x = csbi->srWindow.Right;
    if (*y < 0) *y = csbi->srWindow.Bottom;
    if (*x > csbi->srWindow.Right)  *x = 0;
    if (*y > csbi->srWindow.Bottom) *y = 0;
}

void gotoxy(int x, int y)
{
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){x, y});
}

void writexy(int x, int y)
{
    gotoxy(csbi->srWindow.Right - 8, csbi->srWindow.Bottom);
    printf("%3d, %3d", x, y);
}

void clrscr(void)
{
    system("cls");
}
