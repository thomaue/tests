#include <unistd.h> 
#include <stdio.h>



int main(void)
{
    char testeur;
    int entier; 

    testeur = 'a';
    entier = '2';

    write (1 , "essaie \n " , 12); ///écriture libre///

    write (1 , &testeur , 1); /// appel char///
    write (1 , "\n" , 2); 

    write (1 , &entier, 2); /// appel int///
    write (1 , "\n" , 2); 

    printf("Tulum!"); ///texte libre printf///

    return(0);
}

