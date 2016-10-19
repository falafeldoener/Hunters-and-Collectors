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
    int *piSelection;

    main_page(piSelection);

    switch(*piSelection)
    {
        case 1:
            printf("1\n");
        break;
        case 2:
            printf("2\n");
        break;
        case 3:
            printf("3\n");
        break;
        case 4:
            printf("4");
        break;
    }

    return 0;
}
