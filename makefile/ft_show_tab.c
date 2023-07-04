#include <unistd.h>

void ft_show_tab(char **tab)
{
    int i = 0;
    int i2 = 0;

    while(tab[i])
    {
        while(tab[i][i2])
        {
            write(1, &tab[i][i2], 1);
            i2++;
        }
        i++;
        i2=0;
    }
    write(1, "\n", 2);
}