#include <stdio.h>

int main()
{
    int numeros[20];
    int temp, i, j;

    // Ingreso de datos
    printf("Ingrese 20 numeros enteros:\n");
    for (i = 0; i < 20; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nEl arreglo es:\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d ", numeros[i]);
    }
    // Ordenamiento de los numeros menor a mayor

    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 20 - i; j++)
        {
            if (numeros[j] > numeros[j + 1])
            {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    printf("\nEl arreglo descendentemente es:\n");
    for (i = 19; i >= 0; i--)
    {
        printf("%d ", numeros[i]);
    }

    return 0;
}