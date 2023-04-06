#include <stdio.h>

void ft_switch(int nombre1, int nombre2)
{
    int temp = 0;

    temp = nombre1;
    nombre1 = nombre2;
    nombre2 = temp;
}

int main(void)
{
    int nb1 = 10;
    int nb2 = 20;

    printf("Avant fonction : NB 1 = %d, NB 2 = %d\n", nb1, nb2);

    ft_switch(nb1, nb2); //fonction 

    printf("Après fonction : NB 1 = %d, NB 2 = %d\n", nb1, nb2);
    return 0;
}

