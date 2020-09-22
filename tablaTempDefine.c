#include <stdio.h>

/* Imprime la tabla Fahrenheit-Celsius para fahr = 0,20,40, ... ,300; versión punto flotante*/
// En esta ocasión se usa un ciclo for
// Se añade el uso de constantes simbólicas

#define LOWER 0 /*Límite inferior de la tabla*/
#define UPPER 300 /*Límite superior*/
#define STEP 20 /*Tamaño del incremento*/

int main(void)
{
    int fahr;

    printf("Tabla de equivalencias de temperatura\r\n Faharenheit\t Celsius\r\n");

    // No sirvió la siguiente proposición en el segundo argumento del for (fahr >= 0 && fahr < 300)
    for (fahr = LOWER; fahr < UPPER ; fahr = fahr + STEP)
    {
        printf("%3.0f\t\t %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
    
    return 0;
}

/*Fin del programa*/