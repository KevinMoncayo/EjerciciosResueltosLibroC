#include <stdio.h>

/*Cuenta los caracteres de entrada 1ra versión*/

int main(void)
{
    long nc;
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n",nc);
    return 0;
}