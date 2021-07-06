/*
Factorial de n elementos
Autor: Juan Sebastián Herrera Bahamón
Fecha: 23/03/2021
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
	system("color a"); 
    setlocale(LC_ALL, "");

    int n, factorial = 1;

    cout << "Ingrese el numero para calcular para calcular el factorial" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    
    cout << "Factorial de " << n << " = " << factorial << endl;
    
	return 0;
}