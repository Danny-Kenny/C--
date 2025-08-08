#include <stdio.h>

int main()
{
    int Pares[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int i;
    double promedio, suma = 0;

    for (i = 0; i < 10; i++)
    {
        suma += Pares[i];
    }

    promedio = (double)suma / 10;

    printf("Los numeros pares en el arreglo son (horizontal):\n");
    for (i = 0; i < 10; i++)
    {
        printf(" %d |", Pares[i]);
    }
    printf("\n\n");
    printf("La suma de los valores es: %.2f\n", suma);
    printf("El promedio de los valores es: %.2f\n", promedio);

    return 0;
}