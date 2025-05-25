#include <stdio.h>
#include <cmath>

double calcula_formula_general(double a, double b, double c) 
{ 
    double R1, R2,R3,R4,R5;
    R1=pow(b,2);
    R2=4*a;
    R3=R2*c;
    R4=R1-R3;
    R5=sqrt(R4);
    double x1, x2;

    x1 = (-b + R5) / (2 * a);
    x2 = (-b - R5) / (2 * a);
    
    return x1, x2;
}
int main()
{
    double a, b, c, x1, x2;

    printf("Introduce el valor de a: ");
    scanf("%lf", &a);
    printf("Introduce el valor de b: ");
    scanf("%lf", &b);
    printf("Introduce el valor de c: ");
    scanf("%lf", &c);
    printf("El resultado es:   x1:  %lf   y  x2:  %lf   " , calcula_formula_general(a, b, c));
    return 0;
}