#include <stdio.h>

void compt_sup(int compteur)
{
    for(int i = 0; i<=compteur; i++)
        printf("%d\t", i);
    printf("\n");
}

void compt_dow(int compteur)
{
    for(int i = compteur; i>=0; i--)
        printf("%d\t", i);
    printf("\n");
}


int main(void)
{
    int compteur = 15;

    compt_sup(compteur);
    compt_dow(compteur);


    return 0;
}