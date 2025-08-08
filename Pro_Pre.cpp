#include <stdio.h>
#include <list>

// *** Funcion para Gauss Jordan *** //
int Verificacion(double Aumentada[3][4])
{
    for (int i = 0; i < 3; i++)
    {
        if (Aumentada[i][0] == 0 && Aumentada[i][1] == 0 && Aumentada[i][2] == 0)
        {
            if (Aumentada[i][3] != 0)
            {
                printf("El sistema es inconsistente\n");
                return 1;
            }
        }
    }
    return 0;
}

// *** Funciones para Vectores ***

void Arreglo_Ordenado()
{
    int numeros[20];
    int temp, i, j;
    printf("Ingrese 20 numeros enteros:\n");
    for (i = 0; i < 20; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("\nEl arreglo es:\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d ", numeros[i]);
    }
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 20 - i; j++)
        {
            if (numeros[j] > numeros[j + 1])
            {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
    printf("\nEl arreglo descendentemente es:\n");
    for (i = 19; i >= 0; i--)
    {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}

void Arreglo_P()
{
    int arreglo1[4];
    char arreglo2[5][20];
    int i;
    printf("--- Ejercicio 1 (Arreglo de enteros) ---\n");
    for (i = 0; i < 4; i++)
    {
        printf("Ingrese el valor del indice: ");
        scanf("%d", &arreglo1[i]);
    }
    for (i = 0; i < 4; i++)
    {
        printf("El valor del indice %d es: %d\n", i, arreglo1[i]);
    }
    printf("\n");
    printf("--- Ejercicio 2 (Arreglo de cadenas) ---\n");
    for (i = 0; i < 5; i++)
    {
        printf("Ingresa el valor del indice %d: ", i);
        scanf("%s", &arreglo2[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("El valor del indice %d es: %s\n", i, arreglo2[i]);
    }
    printf("\n");
}

void Ar_Pos()
{
    int Numero[5];
    int i;
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
    printf("\n");
}

void Arre_Suma()
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
    printf("\n");
}

void Bubble()
{
    int i, j, temp;
    int vector[7];
    printf("Ingrese los elementos:\n");
    for (i = 0; i < 7; i++)
    {
        printf("%d.- ", i + 1);
        scanf("%d", &vector[i]);
    }
    printf("Vector desordenado: \n");
    for (i = 0; i < 7; i++)
    {
        printf("%d |", vector[i]);
    }
    for (i = 0; i < 7 - 1; i++)
    {
        for (j = 0; j < 7 - i - 1; j++)
        {
            if (vector[j] > vector[j + 1])
            {
                temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
    printf("\n\nVector ordenado: \n");
    for (i = 0; i < 7; i++)
    {
        printf("%d |", vector[i]);
    }
    printf("\n");
}

void Bubble_2()
{
    int i, j, N, temp;
    printf("Defina de que tamano sera tu arreglo: ");
    scanf("%d", &N);
    int bubble[N];
    int ordenado[N];
    printf("Ingrese los elementos del arreglo\n");
    for (i = 0; i < N; i++)
    {
        printf("%d.- ", i + 1);
        scanf("%d", &bubble[i]);
        ordenado[i] = (bubble[i] * 3);
    }
    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < N - i - 1; j++)
        {
            if (ordenado[j] < ordenado[j + 1])
            {
                temp = ordenado[j];
                ordenado[j] = ordenado[j + 1];
                ordenado[j + 1] = temp;
            }
        }
    }
    printf("Arreglo original: \n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", bubble[i]);
    }
    printf("\nArreglo ordenado de mayor a menor:\n");
    for (j = 0; j < N; j++)
    {
        printf("%d ", ordenado[j]);
    }
    printf("\n");
}

void Orde_Inser()
{
    int i, j, vector[8], clave;
    printf("Ingrese los datos del vector\n");
    for (i = 0; i < 8; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vector[i]);
    }
    printf("Vector Original\n");
    for (i = 0; i < 8; i++)
    {
        printf("| %d |", vector[i]);
    }
    printf("\n");
    for (i = 1; i < 8; i++)
    {
        clave = vector[i];
        j = i - 1;
        while (j >= 0 && vector[j] > clave)
        {
            vector[j + 1] = vector[j];
            j -= 1;
        }
        vector[j + 1] = clave;
    }
    printf("Vector Ordenado\n");
    for (i = 0; i < 8; i++)
    {
        printf("| %d |", vector[i]);
    }
    printf("\n");
}

void Orde_Shell()
{
    int i, j, salto, temp, vector[8];
    printf("Ingrese los valores para el vector\n");
    for (i = 0; i < 8; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vector[i]);
    }
    printf("Vector Original\n");
    for (i = 0; i < 8; i++)
    {
        printf("| %d |", vector[i]);
    }
    printf("\n");
    for (salto = 8 / 2; salto > 0; salto /= 2)
    {
        for (i = salto; i < 8; i++)
        {
            temp = vector[i];
            for (j = i; j >= salto && vector[j - salto] > temp; j -= salto)
            {
                vector[j] = vector[j - salto];
            }
            vector[j] = temp;
        }
    }
    printf("Vector Ordenado\n");
    for (i = 0; i < 8; i++)
    {
        printf("| %d |", vector[i]);
    }
    printf("\n");
}

void Promedio()
{
    double arreglo_promedio[15];
    double suma = 0.0;
    int i;
    printf("Programa para calcular el promedio de edades de 15 alumnos.\n");
    printf("--------------------------------------------------\n");
    for (i = 0; i < 15; i++)
    {
        printf("Ingresa la edad del %d alumno: ", i + 1);
        scanf("%lf", &arreglo_promedio[i]);
        suma += arreglo_promedio[i];
    }
    printf("El promedio es: %.2f\n", suma / 15);
    printf("\n");
}

void Vector_Suma_Indi()
{
    int Pares[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int i;
    double promedio, suma = 0;
    for (i = 0; i < 10; i++)
    {
        suma += Pares[i];
    }
    promedio = (double)suma / 10;
    printf("Los numeros pares en el arreglo son (horizontal):\n");
    for (i = 0; i < 10; i++)
    {
        printf(" %d |", Pares[i]);
    }
    printf("\n\n");
    printf("La suma de los valores es: %.2f\n", suma);
    printf("El promedio de los valores es: %.2f\n", promedio);
    printf("\n");
}

// *** Funciones para Matrices ***

void Bidimensional()
{
    int Matriz[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%d", &Matriz[i][j]);
        }
    }
    printf("La matriz ingresada es:\n");
    printf("A\tB\tC\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t ", Matriz[i][j]);
        }
        printf("\n");
    }
}

void Arre_Suma_Matrix()
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
}

void Sum_Matriz()
{
    int A[2][2], B[2][2], C[2][2];
    int i, j;
    printf("Los valores para A:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Ingrese el valor de A para la fila %d, columna %d: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Los valores para B:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Ingrese el valor de B para fila %d, columna %d: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nLa suma de las matrices A:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("Mas la matriz B:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    printf("El resuldado es:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
}

void Multi_Matriz()
{
    int A[3][3], B[3][3], C[3][3];
    int i, j, k;
    printf("Los valores de la matriz A son:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d, %d:", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Los valores de la matriz B son:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d, %d:", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("El producto de A:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("por B:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    printf("El producto es:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
}

void Diago_Matriz()
{
    int matriz[3][3];
    int i, j;
    printf("Los elementos de la matriz son:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("La fila %d de la columna %d:", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("La diagonal principal es:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
                printf("|%d| ", matriz[i][j]);
        }
    }
}

void Matriz_P2()
{
    int Matriz[3][5];
    int i, j;
    printf("Ingrese los valores para la matriz:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Ingrese el valor de la fila %d, columna %d: ", i + 1, j + 1);
            scanf("%d", &Matriz[i][j]);
        }
    }
    printf("La matriz es:\nA\tB\tC\tD\tE\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", Matriz[i][j]);
        }
        printf("\n");
    }
}

void Matriz_P3()
{
    int Matriz[3][4];
    int i, j, suma = 0, positivo = 0, pares = 0;
    double Promedio;
    printf("Ingrese los valores de la matriz 3x4:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d, %d: ", i + 1, j + 1);
            scanf("%d", &Matriz[i][j]);
        }
    }
    printf("La matriz ingresada es:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", Matriz[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            suma += Matriz[i][j];
        }
    }
    Promedio = suma / 12.0;
    printf("El promedio de los datos de la matriz es: %.2lf\n", Promedio);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (Matriz[i][j] > 0)
            {
                positivo += 1;
            }
        }
    }
    printf("El arreglo posee %d numeros positivos.\n", positivo);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (Matriz[i][j] % 2 == 0)
            {
                pares += Matriz[i][j];
            }
        }
    }
    printf("La suma de los elementos pares de la matriz es: %d", pares);
    printf("\n");
}

void Gauss_Jordan()
{
    double Aumentada[3][4];
    double Temporal[4];
    int i, j, k;
    double pivote, temp;
    char variables[] = {'x', 'y', 'z'};

    printf("Ingrese los x, y y z de de las ecuaciones: (sin igualdad)\n");
    for (i = 0; i < 3; i++)
    {
        printf("Ecuacion %d (coeficientes y resultado):\n", i + 1);
        for (j = 0; j < 4; j++)
        {
            printf("Elemento[%d][%d]: ", i + 1, j + 1);
            scanf("%lf", &Aumentada[i][j]);
        }
    }

    pivote = Aumentada[0][0];
    if (pivote == 0)
    {
        for (i = 0; i < 3; i++)
        {
            if (Aumentada[i][0] != 0)
            {
                for (j = 0; j < 4; j++)
                {
                    Temporal[j] = Aumentada[i][j];
                    Aumentada[i][j] = Aumentada[0][j];
                    Aumentada[0][j] = Temporal[j];
                }
                break;
            }
        }
        pivote = Aumentada[0][0];
    }
    if (Verificacion(Aumentada) == 1)
        return;
    for (j = 0; j < 4; j++)
    {
        Aumentada[0][j] /= pivote;
    }
    if (Aumentada[1][0] != 0 || Aumentada[2][0] != 0)
    {
        for (i = 1; i < 3; i++)
        {
            temp = Aumentada[i][0];
            for (k = 0; k < 4; k++)
            {
                Aumentada[i][k] -= temp * Aumentada[0][k];
            }
        }
    }
    pivote = Aumentada[1][1];
    if (pivote == 0)
    {
        if (Aumentada[2][1] != 0)
        {
            for (j = 0; j < 4; j++)
            {
                Temporal[j] = Aumentada[2][j];
                Aumentada[2][j] = Aumentada[1][j];
                Aumentada[1][j] = Temporal[j];
            }
        }
        pivote = Aumentada[1][1];
    }
    if (Verificacion(Aumentada) == 1)
        return;
    for (j = 0; j < 4; j++)
    {
        Aumentada[1][j] /= pivote;
    }
    if (Aumentada[0][1] != 0 || Aumentada[2][1] != 0)
    {
        temp = Aumentada[0][1];
        for (k = 0; k < 4; k++)
        {
            Aumentada[0][k] -= temp * Aumentada[1][k];
        }
        temp = Aumentada[2][1];
        for (k = 0; k < 4; k++)
        {
            Aumentada[2][k] -= temp * Aumentada[1][k];
        }
    }
    pivote = Aumentada[2][2];
    for (j = 0; j < 4; j++)
    {
        Aumentada[2][j] /= pivote;
    }
    if (Aumentada[0][2] != 0 || Aumentada[1][2] != 0)
    {
        for (i = 1; i >= 0; i--)
        {
            temp = Aumentada[i][2];
            for (k = 0; k < 4; k++)
            {
                Aumentada[i][k] -= temp * Aumentada[2][k];
            }
        }
    }
    if (Verificacion(Aumentada) == 1)
        return;
    int diagonal_correcta = 1;
    for (i = 0; i < 3; i++)
    {
        if (Aumentada[i][i] != 1)
        {
            diagonal_correcta = 0;
            break;
        }
    }
    if (!diagonal_correcta)
    {
        printf("Advertencia: La diagonal principal no es toda 1. El sistema puede no estar en forma reducida.\n");
    }
    printf("Soluciones del sistema:\n");
    for (i = 0; i < 3; i++)
    {
        printf("%c = %.4f\n", variables[i], Aumentada[i][3]);
    }
    printf("\n");
}

// *** Funciones de listas ***//
void imprimirLista(const std::list<int> &lista)
{
    if (lista.empty())
    {
        printf("La lista esta vacia.\n");
    }
    else
    {
        printf("Elementos de la lista: ");
        for (int elemento : lista)
        {
            printf("%d ", elemento);
        }
        printf("\n");
    }
}

void invertirlista(std::list<int> &lista)
{
    int i, n, valor;
    lista.clear();

    printf("Cuantos elementos quieres agregar: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &valor);
        lista.push_back(valor);
    }

    printf("Lista original:\n");
    imprimirLista(lista);
    printf("Lista inversa:\n");
    imprimirLista(lista);
}

int main()
{
    int op, Op2, Rep;
    std::list<int> Lista;

    do
    {
        printf("--- Menu Principal ---\n");
        printf("1.- Vectores\n");
        printf("2.- Matrices\n");
        printf("3.- Listas\n");
        printf("4.- Cola \n");
        printf("5.- Pila\n");
        printf("6.- Arbol\n");
        printf("Eliga la opcion: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("--- Programas de Vectores ---\n");
            printf("1.- Arreglo Ordenado (20 elementos)\n");
            printf("2.- Arreglo con Punteros\n");
            printf("3.- Arreglo: Encontrar el Menor y su Posicion\n");
            printf("4.- Arreglo: Suma de 10 Valores\n");
            printf("5.- Ordenamiento Burbuja (7 elementos)\n");
            printf("6.- Ordenamiento Burbuja (Multiplicar y ordenar)\n");
            printf("7.- Ordenamiento por Insercion\n");
            printf("8.- Ordenamiento Shell\n");
            printf("9.- Promedio de Edades\n");
            printf("10.- Vector: Suma y Promedio de Pares\n");
            printf("Elige la opcion a realizar: ");
            scanf("%d", &Op2);

            switch (Op2)
            {
            case 1:
                Arreglo_Ordenado();
                break;
            case 2:
                Arreglo_P();
                break;
            case 3:
                Ar_Pos();
                break;
            case 4:
                Arre_Suma();
                break;
            case 5:
                Bubble();
                break;
            case 6:
                Bubble_2();
                break;
            case 7:
                Orde_Inser();
                break;
            case 8:
                Orde_Shell();
                break;
            case 9:
                Promedio();
                break;
            case 10:
                Vector_Suma_Indi();
                break;
            default:
                printf("Opcion invalida.\n");
                break;
            }
            break;
        case 2:
            printf("--- Programas de Matrices ---\n");
            printf("1.- Matriz Bidimensional (3x3)\n");
            printf("2.- Matriz: Suma de Arreglos (Vectores)\n");
            printf("3.- Matriz: Suma de dos matrices (2x2)\n");
            printf("4.- Matriz: Multiplicacion de dos matrices (3x3)\n");
            printf("5.- Matriz: Diagonal Principal (3x3)\n");
            printf("6.- Matriz (3x5)\n");
            printf("7.- Matriz (3x4): Promedio, Positivos y Suma de Pares\n");
            printf("8.- Matriz: Gauss-Jordan\n");
            printf("Elige la opcion a realizar: ");
            scanf("%d", &Op2);

            switch (Op2)
            {
            case 1:
                Bidimensional();
                break;
            case 2:
                Arre_Suma_Matrix();
                break;
            case 3:
                Sum_Matriz();
                break;
            case 4:
                Multi_Matriz();
                break;
            case 5:
                Diago_Matriz();
                break;
            case 6:
                Matriz_P2();
                break;
            case 7:
                Matriz_P3();
                break;
            case 8:
                Gauss_Jordan();
                break;
            default:
                printf("Opcion invalida.\n");
                break;
            }
            break;
        case 3:
            printf("--- Programas de Listas ---\n");
            printf("1.- Invertir lista\n");
            printf("2.- Ordenamiento Burbuja\n");
            printf("3.- Concatenar listas\n");
            printf("4.- Frecuencia de un valor\n");
            printf("Elige la opcion a realizar: ");
            scanf("%d", &Op2);
            switch (Op2)
            {
            case 1:
                invertirlista(Lista);
                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            default:
                printf("Opcion invalida.\n");
                break;
            }
            break;
        case 4:
            // Código para cola
            break;
        case 5:
            // Código para pila
            break;
        case 6:
            // Código para árbol
            break;
        default:
            printf("Opcion invalida.\n");
            break;
        }

        printf("\nDesea realizar otra operacion? (1 = si, 0 = no): ");
        scanf("%d", &Rep);

    } while (Rep == 1);

    printf("\n\t Gracias por usar el programa");

    return 0;
}