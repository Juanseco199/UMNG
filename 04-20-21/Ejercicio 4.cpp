/*

Autor: Juan Sebastián Herrera Bahamón
Fecha: 20/04/2021
*/

#include <iostream>
#include <locale>
#include <ctime>

using namespace std;

int main()
{
	system("color a"); 
    setlocale(LC_ALL, "");
	srand(time(NULL));

    int i, n, aleatorio, DESDE = 4, HASTA = 10;

	cout << "Números aleatorios entre " << DESDE << " y " << HASTA << endl;
	cout << "¿Cuantos números aleatoriios quiere generar?";
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		aleatorio = rand() %(HASTA-DESDE+1)+DESDE;
		cout << aleatorio << " ";
	}

	cout << endl;
	
	system("pause");
	return 0;
}