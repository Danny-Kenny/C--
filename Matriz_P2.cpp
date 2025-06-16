#include <stdio.h>

int main()
{
    int Matriz[3][5];
    int i, j;
    // Matriz 2x2 llenada q pida otra matriz y
    printf("Ingrese los valores para la matriz:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Ingrese el valor de la fila %d, columna %d: ", i + 1, j + 1);
            scanf("%d", &Matriz[i][j]);
        }
    }

    printf("La matriz es:\nA\tB\tC\tD\tE\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", Matriz[i][j]);
        }
        printf("\n");
    }
}