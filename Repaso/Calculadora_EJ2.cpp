#include <stdio.h>
#include <cmath>

double Area_Circulo(double r)
{
    return M_PI * (std::pow(r, 2));
}

double Densidad(double masa, double volumen)
{
    return masa / volumen;
}

double Masa(double densidad, double volumen)
{
    return densidad * volumen;
}

double Volumen(double masa, double densidad)
{
    return masa / densidad;
}

double Formula_General(double a, double b, double c)
{
    double discriminante = (std::pow(b, 2)) - (4 * a * c);
    if (discriminante < 0)
    {
        printf("No hay soluciones reales\n");
        return 0;
    }
    else
    {
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Las soluciones son: %lf y %lf\n", x1, x2);
        return 0;
    }
}

int main()
{
    int Op, Op2;
    double r, masa, volumen, densidad, a, b, c, discriminante;

    do
    {
        printf("1. Calcular area del circulo\n");
        printf("2. Calcular densidad\n");
        printf("3. Calcular masa\n");
        printf("4. Calcular volumen\n");
        printf("5. Calcular formula general\n");
        printf("Eliga alguna de las siguientes opciones:");
        scanf("%d", &Op);

        switch (Op)
        {
        case 1:
            printf("Area del circulo\n");

            printf("Ingrese el radio del circulo: ");
            scanf("%lf", &r);
            printf("El area del circulo es: %lf", Area_Circulo(r));
            break;

        case 2:
            printf("Densidad\n");

            printf("Ingrese la masa: ");
            scanf("%lf", &masa);
            printf("Ingrese el volumen: ");
            scanf("%lf", &volumen);
            printf("La densidad es: %lf", Densidad(masa, volumen));
            break;

        case 3:
            printf("Masa\n");

            printf("Ingrese la densidad: ");
            scanf("%lf", &densidad);
            printf("Ingrese el volumen: ");
            scanf("%lf", &volumen);
            printf("La masa es: %lf", Masa(densidad, volumen));
            break;
        case 4:
            printf("Volumen\n");

            printf("Ingrese la masa: ");
            scanf("%lf", &masa);
            printf("Ingrese la densidad: ");
            scanf("%lf", &densidad);
            printf("El volumen es: %lf", Volumen(masa, densidad));
            break;
        case 5:
            printf("Formula general\n");

            printf("Ingrese el valor cuadratico a: ");
            scanf("%lf", &a);
            printf("Ingrese el valor lineal b: ");
            scanf("%lf", &b);
            printf("Ingrese el valor independiente c: ");
            scanf("%lf", &c);
            Formula_General(a, b, c);
            break;
        default:
            printf("Opcion no valida\n");
            break;
        }

        printf("\n ¿Quieres realizar otro calculo? (1: Si, 0: No): ");
        scanf("%d", &Op2);

        if (Op2 == 1)
        {
            r = 0;
            masa = 0;
            volumen = 0;
            densidad = 0;
            a = 0;
            b = 0;
            c = 0;
            discriminante = 0;
        }

    } while (Op2 == 1);

    printf("Gracias por usar el programa");
    return 0;
}