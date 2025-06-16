#include <stdio.h>

int main()
{
    int Ej_1[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int suma = 0;
    int i;

    printf("Los elementos del arreglo son: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", Ej_1[i]);
    }
    printf("\nEl promedio del arreglo es: ");
    for (i = 0; i < 10; i++)
    {
        suma += Ej_1[i];
    }
    printf("%d", suma / 10);
    printf("\nLos elementos mayores al promedio son: ");
    for (i = 0; i < 10; i++)
    {
        if (Ej_1[i] > (suma / 10))
        {
            printf("%d ", Ej_1[i]);
        }
    }
}