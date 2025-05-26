#include <stdio.h>

void Ejercicio_1(int arreglo1[4], int i)
{
    for (i = 0; i < 4; i++) // Solicita el ingreso de los valores del arreglo//
    {
        printf("Ingrese el valor del indice: ");
        scanf("%d", &arreglo1[i]);
    }

    for (i = 0; i < 4; i++) // Muestra los valores ingresados del arreglo//
    {
        printf("El valor del indice %d es: %d\n", i, arreglo1[i]);
    }
}

void Ejercicio_2(char arreglo2[5][20], int i)
{
    for (i = 0; i < 5; i++)
    {
        printf("Ingresa el valor del indice %d: ", i);
        scanf("%s", &arreglo2[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("El valor del indice %d es: %s\n", i, arreglo2[i]);
    }
}

int main()
{
    char arreglo2[5][20]; // Declaracion del arreglo//
    int i;

    Ejercicio_2(arreglo2, i); // Llamada a la funcion arreglo para ingresar y mostrar los valores del arreglo//

    return 0;
}
