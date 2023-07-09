#include <stdio.h>

void ft_show_tab(char **tab)
{
    int i = 0;
    
    for(i = 0; i < 4; i++)
    {
        if(i == 2)
            printf("The happiness of your life depends upon the quality of your thoughts.");
        printf("\n");
    }


    for(i = 0; i < 24; i++)
    {
        if(i < 10)
            printf(" ");
        printf("%d h : %s\n", i, tab[i]);
    }

    for(i = 0; i < 2; i++)
        printf("\n");
}