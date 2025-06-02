#include <stdio.h>

int main()
{
    int Suma[10];

    int suma = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese el valor %d: ", i + 1);
        scanf("%d", &Suma[i]);
        suma += Suma[i];
    }

    printf("La suma de los valores ingresados es: %d\n", suma);

    return 0;
}