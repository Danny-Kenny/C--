#include <stdio.h>

int main()
{
    int Matriz[3][3];
    int i, j;

    for (i = 0; i < 3; i++) //<------El primer bucle indica las filas de la matriz
    {
        for (j = 0; j < 3; j++) //<------El segundo bucle indica las columnas de la matriz
        {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%d", &Matriz[i][j]);
        }
    }

    printf("La matriz ingresada es:\n");
    printf("A\tB\tC\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t ", Matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}