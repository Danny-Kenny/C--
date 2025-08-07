#include <stdio.h>
#include <list>

int main()
{
    int i, j, op, Rep, Op2;
    std::list<int> Lista;
    
    printf("1.- Vectores\n");
    printf("2.- Matrices\n");
    printf("3.- Listas\n");
    printf("4.- Cola \n");
    printf("5.- Pila\n");
    printf("6.- Arbol\n");
    printf("Eliga la opcion: ");
    scanf("%d", &op);
    
    do
    {
   
        switch (op)
        {
            case 1:
                //Todos los vectores que se han hecho en el parcial
            break;
            case 2:
                //Todos las matrices que se hicieron
            break;
            case 3:
                printf("1.- Suma de valores\n");
                printf("2.- Ordenar por burbuja\n");
                printf("3.- Busqueda\n");
                printf("Elige la opcion a realizar: ");
                scanf("%d", &Op2);

                switch (Op2)
                {
                case 1:
                    
                    break;
                
                default:
                    break;
                }
            break;
            case 4:

            break;
            case 5:
            break;
            case 6:
            break;
        }

    } while (Rep == 1 );

    return 0;
}