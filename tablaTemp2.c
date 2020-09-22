#include <stdio.h>

/* Imprime la tabla Fahrenheit-Celsius para fahr = 0,20,40, ... ,300; versión punto flotante*/

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; //Límite superior de la tabla de temperaturas
    upper = 300; //Límite superior
    step = 20; //Tamaño del incremento

    printf("Tabla de equivalencias de temperatura\r\n Faharenheit\t Celsius\r\n");

    fahr = lower;
    while (fahr<=upper)
    {
        celsius = (5.0/9.0)*(fahr-32);
        printf("%3.0f\t\t %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
       
    return 0;
}

/*Fin del programa*/