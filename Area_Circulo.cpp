#include <stdio.h>
#include <cmath>

double Area_Circulo(double r)
{
    return M_PI * (std::pow(r, 2));
}

int main()
{
    double r;
    printf("Ingrese el radio del círculo: ");
    scanf("%lf", &r);
    printf("El área del circulo es: %lf", Area_Circulo(r));
    return 0;
}