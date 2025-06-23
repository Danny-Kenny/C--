#include <stdio.h>
// Arreglo de tamaño N definido por el usuario que los datos se guarden en 2 vectores, donde 1 lo multiplicas por 3 cada valor
// El arreglo multiplicado lo ordenaremos de mayor a menor y viceversa

int main()
{
    int i, j, N, temp;

    printf("Defina de que tamano sera tu arreglo: ");
    scanf("%d", &N);

    int bubble[N];
    int ordenado[N];

    printf("Ingrese los elementos del arreglo\n");
    for (i = 0; i < N; i++)
    {
        printf("%d.- ", i + 1);
        scanf("%d", &bubble[i]);
        ordenado[i] = (bubble[i] * 3);
    }

    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < N - i - 1; j++)
        {
            if (ordenado[j] < ordenado[j + 1])
            {
                temp = ordenado[j];
                ordenado[j] = ordenado[j + 1];
                ordenado[j + 1] = temp;
            }
        }
    }

    printf("Arreglo original: \n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", bubble[i]);
    }
    printf("\nArreglo ordenado de mayor a menor:\n");
    for (j = 0; j < N; j++)
    {
        printf("%d ", ordenado[j]);
    }

    return 0;
}