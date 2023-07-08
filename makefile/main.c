#include "file.h"
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int swit = 0;
    int *ptr;

    char *str;

    int i = 0;

    char **day = (char **)malloc(sizeof(char *) * 25);
    while(i < 25)
    {
        day[i] = "Nothing";
        i++;
    }

    printf("welcome on planner\n\n");

    while(swit < 3)
    {
        printf("0 : print | 1 : modifying | 2 : quit\n");
        scanf("%d", ptr);
        swit = *ptr;
        if(swit == 0)
        {
            // ft_show_tab(lundi);
        }

        else if(swit == 1)
        {
            printf("please enter the time and then the text to be inserted in this format :\n");
            printf("<hour> : <text>\n");
            scanf("%s", str);
        }

        else
        {
            printf("bye ...\n");
            break;
        }
    }

    free(day);
    return 0;
}