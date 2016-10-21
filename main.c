/*Hunters and Collectors
Christopher Herting
Lukas Fleper

date:                   19.10.2016
last change:
*/

#include <stdio.h>
#include <stdlib.h>
#include "main_page.h"
#include "game.h"


int main()
{
    //Declaration main_page selection
    int iSelection, iSelection2;

    main_page();

    scanf("%d", &iSelection);       fflush(stdin);

    //Chooses the option
    switch(iSelection)
    {
        case 1:
                system("cls");
                //open selection
                selection();

                scanf("%d", &iSelection2);      fflush(stdin);

                switch(iSelection2)
                {
                    //PART ONE
                    case 1:
                            system("cls");
                            page_one();
                    break;
                    //PART TWO
                    case 2:
                    break;
                    //PART THREE
                    case 3:
                    break;
                    //PART FOUR
                    case 4:
                    break;
                }

        break;
        case 2:

        break;
        default:
                printf("WRONG INPUT!\n");
    }

    return 0;
}
