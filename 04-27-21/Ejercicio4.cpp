/*

Autor: Juan Sebastián Herrera Bahamón
Fecha: D/M/2021
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
	system("color a"); 
    setlocale(LC_ALL, "");

    int fil, col, fila, columna;
    
    for(int i = 0; i<fil; i++)
    {
        fila[i] = 0;
    }
    for(int i = 0; i<col; i++)
    {
        columna[i] = 0;
    }
    for (int i = 0; i<fil; i++)
    {
       for(int j = 0; j<col; j++)
       {
           fila[i] = fila[i] + m[i][j];
           columna[j] = columna[j] + m[i][j];
        }
    }

    system("pause");
	return 0;
}