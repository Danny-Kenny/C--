#include <stdio.h>

int main()
{
    double A[3][3], B[3][3], C[3][3], D[3][3], E[3][3];
    int i, j, k;

    printf("Ingrese los valores de A\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("El valor de %d, %d: ", i + 1, j + 1);
            scanf("%lf", &A[i][j]);
        }
    }

    printf("Ingrese los valores de B\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("El valor de %d, %d: ", i + 1, j + 1);
            scanf("%lf", &B[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = 0.0;
            for (k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            D[i][j] = 0.0;
            D[i][j] = A[i][j] - B[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            E[i][j] = 0.0;
            E[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("La suma de las matrices es:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%.2lf\t", D[i][j]);
        }
        printf("\n");
    }

    printf("La resta de las matrices es:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%.2lf\t", E[i][j]);
        }
        printf("\n");
    }

    printf("La multiplicacion de las matrices es: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%.2lf\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}