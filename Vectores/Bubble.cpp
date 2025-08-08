#include <stdio.h>

int main()
{
    // Ordenamiento burbuja con 7 elementos definidos por el usuario
    int i, j, temp;
    int vector[7];

    // Pedir valores al usuario
    printf("Ingrese los elementos:\n");
    for (i = 0; i < 7; i++)
    {
        printf("%d.- ", i + 1);
        scanf("%d", &vector[i]);
    }

    printf("Vector desordenado: \n");
    for (i = 0; i < 7; i++)
    {
        printf("%d |", vector[i]);
    }

    // Metodo de ordenamiento
    for (i = 0; i < 7 - 1; i++)
    {
        for (j = 0; j < 7 - i - 1; j++)
        {
            // Si el elemento actual es mayor que el siguiente, intercambiarlos
            if (vector[j] > vector[j + 1])
            {
                // Intercambio de elementos, usando una variable temporal
                temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }

    printf("\n\nVector ordenado: \n");
    for (i = 0; i < 7; i++)
    {
        printf("%d |", vector[i]);
    }

    return 0;
}