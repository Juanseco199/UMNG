/*

Autor: Juan Sebastián Herrera Bahamón
Fecha: 27/04/2021
*/

#include <iostream>
#include <time.h>
#include <locale>

#define fil 4
#define col 4

using namespace std;

int main()
{
	system("color a"); 
    setlocale(LC_ALL, "");
    srand(time(NULL));

    int m[fil][col];

	for (int i = 0; i < fil; i++)
	{
		cout << endl;
		for (int j = 0; i < col; j++)
		{
			cout << m[i][j] << "\t";
		}
		
	}
		
	
	system("pause");
	return 0;
}