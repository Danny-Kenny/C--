#include <stdio.h>

int main()
{
    int Matriz[3][3], Arreglo[8], resultado[3];
    int i, j, determinante, temp, Dx, Dy, Dz;

    printf("Ingrese los datos de la matriz:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d, %d: ", i + 1, j + 1);
            scanf("%d", &Matriz[i][j]);
        }
    }

    printf("Ingrese los datos del arreglo:\n");
    for (i = 0; i < 8; i++)
    {
        printf("El elemento %d es: ", i + 1);
        scanf("%d", &Arreglo[i]);
    }

    printf("Ingrese los resultados del sistema para el metodo del cramer (x, y, z en ese orden)\n");
    for (i = 0; i < 3; i++)
    {
        printf("Valor %d: ", i + 1);
        scanf("%d", &resultado[i]);
    }

    determinante = (Matriz[0][0] * Matriz[1][1] * Matriz[2][2]) + (Matriz[0][1] * Matriz[1][2] * Matriz[2][0]) + (Matriz[0][2] * Matriz[1][0] * Matriz[2][1]) - (Matriz[0][2] * Matriz[1][1] * Matriz[2][0]) - (Matriz[0][0] * Matriz[1][2] * Matriz[2][1]) - (Matriz[0][1] * Matriz[1][0] * Matriz[2][2]);

    printf("El determinante de la matriz es: %d\n", determinante);

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (Arreglo[j] < Arreglo[j + 1])
            {
                temp = Arreglo[j];
                Arreglo[j] = Arreglo[j + 1];
                Arreglo[j + 1] = temp;
            }
        }
    }

    Dx = (resultado[0] * Matriz[1][1] * Matriz[2][2]) + (resultado[2] * Matriz[1][2] * Matriz[2][0]) + (resultado[3] * Matriz[1][0] * Matriz[2][1]) - (Matriz[2][0] * Matriz[1][1] * resultado[3]) - (Matriz[2][1] * Matriz[1][2] * resultado[1]) - (Matriz[2][2] * Matriz[1][0] * resultado[2]);

    Dy = (Matriz[0][0] * resultado[2] * Matriz[2][2]) + (Matriz[0][1] * resultado[3] * Matriz[2][0]) + (Matriz[0][2] * resultado[1] * Matriz[2][1]) - (Matriz[2][0] * resultado[2] * Matriz[0][2]) - (Matriz[2][1] * resultado[3] * Matriz[0][0]) - (Matriz[2][2] * resultado[1] * Matriz[0][1]);

    Dz = (Matriz[0][0] * Matriz[1][1] * resultado[3]) + (Matriz[0][1] * Matriz[1][2] * resultado[1]) + (Matriz[0][2] * Matriz[1][0] * resultado[2]) - (Matriz[2][0] * Matriz[1][1] * resultado[1]) - (Matriz[2][1] * Matriz[1][2] * resultado[2]) - (Matriz[2][2] * Matriz[1][0] * resultado[3]);

    Dx = Dx / determinante;
    Dy = Dy / determinante;
    Dz = Dz / determinante;

    printf("El arreglo de forma desendente es:\n");
    for (i = 0; i < 8; i++)
    {
        printf("%d ,", Arreglo[i]);
    }

    printf("El valor de x es: %d\n", Dx);
    printf("El valor de y es: %d\n", Dy);
    printf("El valor de z es: %d\n", Dz);

    return 0;
}