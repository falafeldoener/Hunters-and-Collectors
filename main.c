/*Hunters and Collectors
Christopher Herting
Lukas Fleper

date:                   19.10.2016
last change:
*/

#include <stdio.h>
#include <stdlib.h>
#include "main_page.h"

//Alphabetical order
char cOS;
char cSettingsLine[512];
int main();
int iSettingsLine;
FILE *fpSettings_append;
FILE *fpSettings_read;
FILE *fpSettings_write;
float fVersion = 1.0;
void About();
void clear_screen();
void Multiplayer();
void os_ask();
void scan_char(char c);
void Settings();
void Singleplayer();

int main()
{
    //Declaration main_page selection
    int iSelection;
    fpSettings_read = fopen("Hunters-and-Collectors_settings.txt", "r");

    //Check whether the file exist
    if(fpSettings_read)
    {
        //The file exist so read the file and find out whether Windows or UNIX
        char buffer[255];
        fscanf(fpSettings_read, "%s", buffer);

        switch(buffer[8])
        {
            case 'w': cOS = 'w'; break;
            case 'u': cOS = 'u'; break;
            default: printf("Something went terribly wrong! (Error Code: 1.1)");
        }
    }
    else
    {
        //The file doesn't exists so ask for the operating system and create the file
        fpSettings_write = fopen("Hunters-and-Collectors_settings.txt", "w");
        fclose(fpSettings_write);

        fpSettings_append = fopen("Hunters-and-Collectors_settings.txt", "a");
        os_ask();
        fclose(fpSettings_append);

        clear_screen();
    }
    fclose(fpSettings_read);

    main_page();

    //display program version
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tver %.2f\n\n", fVersion);

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

void os_ask()
{
    printf("Are you using a Windows or a UNIX based operating system?");

    printf("(w/u)");
    scanf("%c", &cOS);

    if(cOS == 'w')
    {
        fprintf(fpSettings_append, "os_kind=w");
    }
    else if(cOS == 'u')
    {
        fprintf(fpSettings_append, "os_kind=u");
    }
    else
    {
        printf("Invaild input! (Try it again)\n");
        os_ask();
    }
}

void clear_screen()
{
    //Checks the OS variable and clears the screen
    if(cOS == 'w')
    {
        system("cls"); //Clear screen -> windows
    }
    else
    {
        system("clear"); //Clear screen -> unix
    }
}
