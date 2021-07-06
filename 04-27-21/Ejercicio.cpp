/*

Autor: Juan Sebastián Herrera Bahamón
Fecha: 27/04/2021
*/

#include <iostream>
#include <locale>

#define fil 4
#define col 4

using namespace std;

int main()
{
	system("color a"); 
    setlocale(LC_ALL, "");

    int m[fil][col] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

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