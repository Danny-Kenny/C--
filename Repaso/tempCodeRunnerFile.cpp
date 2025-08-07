#include <stdio.h>

int main()
{
    double A[3][3], B[3][3], C[3][3], D[3][3], E[3][3];
    int i, j, k;

    printf("Ingrese los valores de A\n");
    for (i = 0; i < 3, i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("El valor de %d, %d: ", i + 1, j + 1);
            scanf("%.2lf\t", &A);
        }
    }

    printf("Ingrese los valores de B\n");
    for (i = 0; i < 3, i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("El valor de %d, %d: ", i + 1, j + 1);
            scanf("%.2lf\t", &B);
        }
    }

    printf("Ingrese los valores de C\n");
    for (i = 0; i < 3, i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("El valor de %d, %d: ", i + 1, j + 1);
            scanf("%.2lf\t", &C);
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

    return 0;
}