#include <stdio.h>

int main()
{
    int A[2][2], B[2][2], C[2][2];
    int i, j;

    printf("Los valores para A:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Ingrese el valor de A para la fila %d, columna %d: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Los valores para B:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Ingrese el valor de B para fila %d, columna %d: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nLa suma de las matrices A:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("Mas la matriz B:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    printf("El resuldado es:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}