// De una matriz 3x3 llenada por el usuario, muestre la diagonal principal de la matriz
#include <stdio.h>

int main()
{
    int matriz[3][3];
    int i, j;

    printf("Los elementos de la matriz son:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("La fila %d de la columna %d:", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("La diagonal principal es:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
                printf("|%d| ", matriz[i][j]);
        }
    }

    return 0;
}