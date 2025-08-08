#include <stdio.h>

int main()
{
    int i, j, k, salto, temp, vector[8];

    printf("Ingrese los valores para el vector\n");
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

    for (salto = 8 / 2; salto > 0; salto /= 2)
    {
        for (i = salto; i < 8; i++)
        {
            temp = vector[i];
            for (j = i; j >= salto && vector[j - salto] > temp; j -= salto)
            {
                vector[j] = vector[j - salto];
            }
            vector[j] = temp;
        }
    }

    printf("Vector Ordenado\n");
    for (i = 0; i < 8; i++)
    {
        printf("| %d |", vector[i]);
    }

    return 0;
}