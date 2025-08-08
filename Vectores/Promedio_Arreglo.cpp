#include <stdio.h>

double Promedio(double arreglo_promedio[15], int i)
{
    double suma = 0.0;

    for (i = 0; i < 15; i++)
    {
        printf("Ingresa la edad del %d alumno: ", i + 1);
        scanf("%lf", &arreglo_promedio[i]);
        suma += arreglo_promedio[i];
    }

    return suma / 15;
}

int main()
{
    double arreglo_promedio[15];
    int i;
    printf("Programa para calcular el promedio de edades de 15 alumnos.\n");
    printf("--------------------------------------------------\n");
    printf("El promedio es: %.2f\n", Promedio(arreglo_promedio, i));
}