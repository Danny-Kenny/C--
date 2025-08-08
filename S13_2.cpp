#include <stdio.h>
#include <fstream>
using namespace std;

int main()
{
    // Abrimos el archivo "datos.txt" para lectura, con nombre y edad por línea
    ifstream inputFile("datos.txt");
    if (!inputFile.is_open())
    {
        printf("No se pudo abrir el archivo datos.txt\n");
        return 1;
    }

    // Abrimos un archivo para escribir los registros filtrados
    ofstream outputFile("mayores.txt");
    if (!outputFile)
    {
        printf("No se pudo crear o abrir mayores.txt\n");
        return 1;
    }

    string nombre;
    int edad;

    // Leemos nombre y edad mientras haya datos en el archivo
    while (inputFile >> nombre >> edad)
    {
        // Usamos una sentencia if para filtrar por edad
        if (edad >= 18)
        {
            outputFile << nombre << " " << edad << endl;
        }
        // Si edad < 18, simplemente ignoramos y seguimos leyendo
    }

    // Cerramos ambos archivos
    inputFile.close();
    outputFile.close();

    return 0;
}