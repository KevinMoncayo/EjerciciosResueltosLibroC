#include <stdio.h>

/*Cuenta las líneas de la entrada*/

int main(void)
{
    int c, espaciosBlanco, tabuladores, enters;

    espaciosBlanco = 0;
    tabuladores = 0;
    enters = 0;


    while((c=getchar()) != EOF){

    
        if (c == ' ')
        {
            ++espaciosBlanco;
        }
        else if (c == '\n')
        {
            ++enters;
        }
        else if (c == '\t')
        {
            ++tabuladores;
        }

        
    }     
    printf("En el texto redactado hay %d espacios en blanco, %d enters y %d tabuladores\r\n",espaciosBlanco,enters,tabuladores);

    return 0;
}