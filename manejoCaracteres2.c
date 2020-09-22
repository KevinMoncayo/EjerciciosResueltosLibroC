#include <stdio.h>

/*Copia la entrada a la salida; 2da versión*/

int main(void)
{
    int c;
    /*Si la asignación de un carácter a c se coloca dentro de la sección de prueba
    de un ciclo while, el programa que copia puede escribirse así:
    */
    while (c = getchar() != EOF) //EOF - End of file - es un número muy grande definido en stdio.h
    {
        putchar(c);
        //c = getchar();
    }
    
    
    return 0;
}

/*Fin del programa*/