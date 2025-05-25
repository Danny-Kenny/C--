#include <stdio.h>

double Area(double h, double b)
{
    double r = (b * h) / 2;
    return r;
}

int main()
{
    double b, h;
    printf("Ingresa la base:");
    scanf("%lf", &b);
    printf("Ingresa la altura:");
    scanf("%lf", &h);

    printf("El area del triangulo es: %lf", Area(h, b));
    return 0;
}
