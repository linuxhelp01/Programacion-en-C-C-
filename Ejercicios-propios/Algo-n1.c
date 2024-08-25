/* Objetico del programa: Multiplicar a por el valor ingresado y guardado en la variable b.
*/

#include <stdio.h>
#define g 10

char b = 0;

int main(void) //main
{   
    while (1) // Para que realice la pregunta una y otra vez
    {
        // Pide el valor de b
        printf("Cuantas veces la grabedad de la tierra desea?\n Esta puede ser maximo de 12 veces la gravedad de la tierra\n");
        printf("Ingrese valor de b:");                                 
        scanf("%d",&b);

        // Verifica si la operacion es valida
        if(b>12)
        {
        printf("Error\n"); // Su supera el valor dicho indica error y el programa vuelve al inicio
        }
        // Si b es menor o igual que 12 realiza la operacion y muesta la gravedad pedida
        else
        {
            b = b*g;
            printf("La cantidad de veces que se desea aumentar la grabedad es: %d\n",b);
        }
    }
    
    return 0;
}