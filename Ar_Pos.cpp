#include <stdio.h>
int main()
{
    int Numero[5];
    int i, j, temp;

    printf("Ingrese 5 numeros enteros:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &Numero[i]);
    }

    int menor = Numero[0];
    int posicion = 0;

    for (i = 0; i < 5; i++)
    {
        if (Numero[i] < menor)
        {
            menor = Numero[i];
            posicion = i;
        }
    }

    printf("\nEl numero menor es: %d\n", menor);
    printf("Su indice en el arreglo es: %d\n", posicion);
    printf("Su posicion en el arreglo es: %d\n", posicion + 1);

    return 0;
}