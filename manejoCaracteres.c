#include <stdio.h>

/*Copia la entrada a la salida; 1ra versión*/

int main(void)
{
    int c;

    c = getchar();

    while (c != EOF) //EOF - End of file - es un número muy grande definido en stdio.h
    {
        putchar(c);
        c = getchar();
    }
    
    
    return 0;
}

/*Fin del programa*/