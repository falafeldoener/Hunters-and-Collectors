/*Hunters and Collectors
Christopher Herting
Lukas Fleper

date:                   19.10.2016
last change:
*/

#include <stdio.h>
#include <stdlib.h>
#include "main_page.h"


int main()
{
    //Declaration main_page selection
    int iSelection;

    main_page();

    //
    scanf("%d", &iSelection);       fflush(stdin);

    //Chooses the option
    switch(iSelection)
    {
        case 1:

        break;
        case 2:

        break;
        case 3:

        break;
        case 4:

        break;
        default:
            printf("WRONG INPUT!\n");
    }

    return 0;
}
