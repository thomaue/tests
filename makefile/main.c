#include "file.h"
#include <stdio.h>


int main(void)
{
    int *swit = 0;
    char *str;

    int i = 0;

    char **day = (char **)malloc(sizeof(char *) * 25);
    while(i < 25)
    {
        day[i] = i;
        i++;
    }




    printf("welcome on planner\n\n");

    while(*swit < 3)
    {
        printf("0 : print | 1 : modifying | 2 : quit\n");
        scanf("%d", swit);
        if(*swit == 0)
        {
            // ft_show_tab(lundi);
        }

        else if(*swit == 1)
        {
            printf("please enter the time and then the text to be inserted in this format :");
            printf("<hour> : <text>");
            scanf("%s", str);
        }

        else
        {
            break;
        }
    }

    free(day);
    return 0;
}