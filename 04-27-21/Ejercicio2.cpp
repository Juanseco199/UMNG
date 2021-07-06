/*

Autor: Juan Sebastián Herrera Bahamón
Fecha: 27/04/2021
*/

#include <iostream>
#include <time.h>
#include <locale>

#define fil 1
#define col 1

using namespace std;

int main()
{
	system("color a"); 
    setlocale(LC_ALL, "");
	srand(time(NULL));

	cout << "Ingrese la cantidad de filas y de columnas para la matriz" << endl;
	cin >> fil >> col;

    int m[fil][col];

	for (int i = 0; i < fil; i++)
	{
		for (int j = 0; i < col; j++)
		{
			m[i][j] = (rand()%(5-10+1)+5);
		}
	}
		
	
	system("pause");
	return 0;
}