/*
Hunters and Collectors
Christopher Herting
Lukas Fleper
Datum:      18.10.2016
*/

#include <stdio.h>
#include <stdlib.h>

int main();
int iWhatToDo;
float fVersion = 1.0;

int main()
{
    iWhatToDo = 1;

    printf("Welcome to:\n\n\n");
    printf("\t|  |            |                                |     +--      |   |             |\n");
    printf("\t|  |           -+-                               |     |        |   |            -+-\n");
    printf("\t+--+ |  | +--+  |   +--+ +-- +--     +--+ +--+ +-+     |   +--+ |   |   +--+ +--  |   +--+ +-- +--\n");
    printf("\t|  | |  | |  |  |   |--+ |   +-+     |  | |  | | |     |   |  | |   |   |--+ |    |   |  | |   +-+\n");
    printf("\t|  | +--+ |  |  +-- +--- |   --+     +--+ |  | +-+     +-- +--+ +-- +-- +--- +--  +-- +--+ |   --+\n");

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tver %.2f", fVersion);

    printf("What do you wanna do?\n");
    printf("(1) Begin a new game (will delete your current game if exists)\n");
    printf("(2) Continue with current game\n");
    printf("(3) Settings\n");
    printf("(4) Found a bug? New idea for Hunters and Collectors? (We are on GitHub!)\n\n");

    printf("Enter a number between 1 and 4: ");
    scanf("%d", &iWhatToDo);

    switch(iWhatToDo)
    {
        case 1: printf("No 1!"); break;
        case 2: printf("No 2!"); break;
        case 3: printf("No 3!"); break;
        case 4: printf("No 4!"); break;
        default: printf("You are to dumb to enter a number between 1 and 4! You shouldn't play this game!!!\n");
    }
    return 0;
}
