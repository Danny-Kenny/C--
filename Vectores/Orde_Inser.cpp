#include <stdio.h>

int main()
{
    int i, j, vector[8], clave;

    printf("Ingrese los datos del vector\n");
    for (i = 0; i < 8; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    printf("Vector Original\n");
    for (i = 0; i < 8; i++)
    {
        printf("| %d |", vector[i]);
    }
    printf("\n");

    for (i = 1; i < 8; i++)
    {
        clave = vector[i];
        j = i - 1;

        while (j >= 0 && vector[j] > clave)
        {
            vector[j + 1] = vector[j];
            j -= 1;
        }
        vector[j + 1] = clave;
    }

    printf("Vector Ordenado\n");
    for (i = 0; i < 8; i++)
    {
        printf("| %d |", vector[i]);
    }

    return 0;
}