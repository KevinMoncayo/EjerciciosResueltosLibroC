#include <stdio.h>

int a = 0; //Aquí se va a almacenar el valor de EOF
int b = 0; //Aquí se va a almacenar el valor de la tecla leida

int main (void)
{
    while (b <= 0)
    {
        a = '\n';
        printf("El valor de una nueva línea es %d",a);
        //sleep(1000);
        b=getchar();
    }
    
    
    return 0;
}