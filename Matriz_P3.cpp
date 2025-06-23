// realize un programa q cargue datos a una matriz 3x4 se solicita imprimir sus datos, calcular promedio, numero de datos positivos y sumar los numeros pares
// en la matriz

#include <stdio.h>

int main()
{
    int Matriz[3][4];
    int i, j, Promedio, suma = 0, positivo = 0, pares = 0;

    printf("Ingrese los valores de la matriz 3x4:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d, %d: ", i + 1, j + 1);
            scanf("%d", &Matriz[i][j]);
        }
    }

    printf("La matriz ingresada es:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", Matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            suma += Matriz[i][j];
            Promedio = suma / 12;
        }
    }
    printf("El promedio de los datos de la matriz es: %d\n", Promedio);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (Matriz[i][j] > 0)
            {
                positivo += 1;
            }
        }
    }
    printf("El arreglo posee %d numeros positivos.\n", positivo);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (Matriz[i][j] % 2 == 0)
            {
                pares += Matriz[i][j];
            }
        }
    }
    printf("La suma de los elementos pares de la matriz es: %d", pares);

    return 0;
}