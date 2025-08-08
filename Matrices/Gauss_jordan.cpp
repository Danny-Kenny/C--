// Realiza un programan q resuelva un sistema de ecuaciones lineales por gauss jordan

#include <stdio.h>

// Funcion que verifica si algun valor es 0 o si una variable tiene un valor diferente de 0x != 0
int Verificacion(double Aumentada[3][4])
{
    for (int i = 0; i < 3; i++)
    {
        if (Aumentada[i][0] == 0 && Aumentada[i][1] == 0 && Aumentada[i][2] == 0)
        {
            if (Aumentada[i][3] != 0)
            {
                printf("El sistema es inconsistente\n");
                return 1;
            }
        }
    }
}

int main()
{
    double Aumentada[3][4];
    double Temporal[4];
    int i, j, k;
    double pivote, temp;
    char variables[] = {'x', 'y', 'z'};

    printf("Ingrese los x, y y z de de las ecuaciones: (sin igualdad)\n");
    for (i = 0; i < 3; i++)
    {
        printf("Ecuacion %d (coeficientes y resultado):\n", i + 1);
        for (j = 0; j < 4; j++)
        {
            printf("Elemento[%d][%d]: ", i + 1, j + 1);
            scanf("%lf", &Aumentada[i][j]);
        }
    }

    pivote = Aumentada[0][0];
    if (pivote == 0)
    {
        // Ciclo que guarda y cambia filas
        for (i = 0; i < 3; i++)
        {
            if (Aumentada[i][0] != 0)
            {
                for (j = 0; j < 4; j++)
                {
                    Temporal[j] = Aumentada[i][j];
                    Aumentada[i][j] = Aumentada[0][j];
                    Aumentada[0][j] = Temporal[j];
                }
                break;
            }
        }
        pivote = Aumentada[0][0];
    }

    if (Verificacion(Aumentada) == 1)
        return 1;

    // Normailzacion de fila
    for (j = 0; j < 4; j++)
    {
        Aumentada[0][j] /= pivote;
    }

    // Normalizacion de filas superiores y inferiores
    if (Aumentada[1][0] != 0 || Aumentada[2][0] != 0)
    {
        for (i = 1; i < 3; i++)
        {
            temp = Aumentada[i][0];
            for (k = 0; k < 4; k++)
            {
                Aumentada[i][k] -= temp * Aumentada[0][k];
            }
        }
    }

    pivote = Aumentada[1][1];
    if (pivote == 0)
    {
        if (Aumentada[2][1] != 0)
        {
            for (j = 0; j < 4; j++)
            {
                Temporal[j] = Aumentada[2][j];
                Aumentada[2][j] = Aumentada[1][j];
                Aumentada[1][j] = Temporal[j];
            }
        }
        pivote = Aumentada[1][1];
    }

    if (Verificacion(Aumentada) == 1)
        return 1;

    for (j = 0; j < 4; j++)
    {
        Aumentada[1][j] /= pivote;
    }

    if (Aumentada[0][1] != 0 || Aumentada[2][1] != 0)
    {
        temp = Aumentada[0][1];
        for (k = 0; k < 4; k++)
        {
            Aumentada[0][k] -= temp * Aumentada[1][k];
        }
        temp = Aumentada[2][1];
        for (k = 0; k < 4; k++)
        {
            Aumentada[2][k] -= temp * Aumentada[1][k];
        }
    }

    pivote = Aumentada[2][2];
    for (j = 0; j < 4; j++)
    {
        Aumentada[2][j] /= pivote;
    }

    if (Aumentada[0][2] != 0 || Aumentada[1][2] != 0)
    {
        for (i = 1; i >= 0; i--)
        {
            temp = Aumentada[i][2];
            for (k = 0; k < 4; k++)
            {
                Aumentada[i][k] -= temp * Aumentada[2][k];
            }
        }
    }

    if (Verificacion(Aumentada) == 1)
        return 1;

    int diagonal_correcta = 1;
    for (i = 0; i < 3; i++)
    {
        if (Aumentada[i][i] != 1)
        {
            diagonal_correcta = 0;
            break;
        }
    }
    if (!diagonal_correcta)
    {
        printf("Advertencia: La diagonal principal no es toda 1. El sistema puede no estar en forma reducida.\n");
    }

    printf("Soluciones del sistema:\n");
    for (i = 0; i < 3; i++)
    {
        printf("%c = %.4f\n", variables[i], Aumentada[i][3]);
    }

    return 0;
}