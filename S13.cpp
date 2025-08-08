#include <stdio.h>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    // Intentamos abrir el archivo "numeros.txt" para leer datos
    ifstream inputFile("numeros.txt");
    // Verificamos que el archivo se haya abierto correctamente
    if (!inputFile)
    {
        printf("No se pudo abrir el archivo numeros.txt\n");
        return 1; // Terminamos el programa indicando error
    }

    vector<int> numeros;
    int valor;

    // Leemos cada número entero del archivo hasta el fin del archivo
    while (inputFile >> valor)
    {
        numeros.push_back(valor);
    }
    // Cerramos el archivo de lectura
    inputFile.close();

    // Verificamos si se leyó algún número
    if (numeros.empty())
    {
        printf("El archivo está vacío o no contiene números.\n");
    }
    else
    {
        // Calculamos la suma de los números usando un bucle for
        int suma = 0;
        for (int i = 0; i < numeros.size(); ++i)
        {
            suma += numeros[i];
        }

        // Calculamos el promedio; convertimos a double para obtener decimales
        double promedio = static_cast<double>(suma) / numeros.size();

        // Abrimos (o creamos) un nuevo archivo para escribir los resultados
        ofstream outputFile("resultados.txt");
        if (!outputFile)
        {
            printf("No se pudo crear o abrir resultados.txt");
            return 1;
        }

        // Escribimos los resultados en el archivo de salida
        outputFile << "Suma de los números: " << suma << endl;
        outputFile << "Cantidad de números: " << numeros.size() << endl;
        outputFile << "Promedio: " << promedio << endl;

        // Cerramos el archivo de escritura
        outputFile.close();
    }

    return 0;
}