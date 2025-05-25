#include <stdio.h>

double Trapecio(double Base, double base, double altura)
{
    return ((Base + base) * altura) / 2;
}

int main()
{
    double Base, base, altura;
    printf("Ingrese la base mayor: ");
    scanf("%lf", &Base);
    printf("Ingrese la base menor: ");
    scanf("%lf", &base);
    printf("Ingrese la altura: ");
    scanf("%lf", &altura);

    printf("El area del trapecio es: %lf\n", Trapecio(Base, base, altura));

    return 0;
}