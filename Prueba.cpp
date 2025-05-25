#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Introduce el primer numero: ");
    scanf("%d", &a);
    printf("Introduce el segundo numero: ");
    scanf("%d", &b);
    c = a + b;
    printf("\nEl resultado es:%d", c);
    return 0;
}