#include <stdio.h>

int main()
{
    int Ej_2[12];
    int i, suma = 0, menor = 0, mayor = 0, impar = 0;
    ;
    double superior = 0, porcentaje = 0;
    printf("Ingrese 12 numeros enteros:\n");
    for (i = 0; i < 12; i++)
    {
        scanf("%d", &Ej_2[i]);
    }

    printf("\nLa suma total de los elementos es: ");
    for (i = 0; i < 12; i++)
    {
        suma += Ej_2[i];
    }
    printf("%d", suma);

    printf("\nEl elemento menor del vector es: ");
    for (i = 0; i < 12; i++)
    {
        if (i == 0)
        {
            menor = Ej_2[i];
        }
        else if (Ej_2[i] < menor)
        {
            menor = Ej_2[i];
        }
    }
    printf("%d", menor);

    printf("\nEl elemento mayor del vector es: ");
    for (i = 0; i < 12; i++)
    {
        if (i == 0)
        {
            mayor = Ej_2[i];
        }
        else if (Ej_2[i] > mayor)
        {
            mayor = Ej_2[i];
        }
    }
    printf("%d", mayor);

    printf("\nLa cantidad de numeros impares que tiene el arreglo es: ");
    for (i = 0; i < 12; i++)
    {
        if (Ej_2[i] % 2 != 0)
        {
            impar += 1;
        }
    }
    printf("%d", impar);

    printf("\nEl arreglo se compone de numeros superiores a 50 en un: ");
    for (i = 0; i < 12; i++)
    {
        if (Ej_2[i] > 50)
        {
            superior += 1;
        }
    }
    porcentaje = (superior * 100) / 12;
    printf("%.2f%%", porcentaje);
}