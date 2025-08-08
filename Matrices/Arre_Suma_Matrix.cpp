#include <stdio.h>

int main()
{
    int A[3], B[3], R[3];
    int i;

    printf("Ingrese los valores de A y B: \n");
    for (i = 0; i < 3; i++)
    {
        printf("A[%d]: ", i + 1);
        scanf("%d", &A[i]);
        printf("B[%d]: ", i + 1);
        scanf("%d", &B[i]);

        R[i] = A[i] + B[i];
    }

    printf("El resultado de la suma es: \n");
    printf("A\tB\tR\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d\t%d\t%d\n", A[i], B[i], R[i]);
    }

    return 0;
}