// realize un programa q cargue datos a una matriz 3x4 se solicita imprimir sus datos, calcular promedio, numero de datos positivos y sumar los numeros pares
// en la matriz

#include <stdio.h>
#include <cmath>
int main()
{
    double Matriz[3][4];
    int i, j;
    double promedio = 0.0, positivo = 0, suma = 0.0, pares = 0.0;

    printf("Ingrese los valores de la matriz:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Valor de %d, %d: ", i + 1, j + 1);
            scanf("%lf", &Matriz[i][j]);
        }
    }

    printf("La matriz ingresada es:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%lf\t", Matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            suma += Matriz[i][j];
        }
    }
    promedio = suma / 12.0;

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

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            double temp = Matriz[i][j];
            if (fabs(fmod(temp, 1.0)) < 1e-9)
            {
                long long entero = static_cast<long long>(temp);
                if (entero % 2 == 0)
                {
                    pares += temp;
                }
            }
        }
    }

    printf("La suma de los elementos de la matriz es: %.3lf\n", suma);
    printf("La suma de los numeros pares de la matriz es: %.3lf\n", pares);
    printf("El promedio de la matriz es: %.3lf\n", promedio);
    printf("Esta matriz cuenta con %.3lf elementos positivos.\n", positivo);

    return 0;
}