#include <stdio.h>

int main(void)
{
    printf("char : %d octets\n", sizeof(char));

    printf("int : %d octets\n", sizeof(int));

    printf("long : %d octets\n", sizeof(long));

    printf("double : %d octets\n", sizeof(double));
    return 0;
}