/*
Contar los numeros positivos que se ingresan por teclado hasta que se ingrese un número negativo
Autor: Juan Sebastián Herrera Bahamón
Fecha: 16/Marzo/2021
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
	system("color a"); 
    setlocale(LC_ALL, "");

    int n = 0, p = -1;

    while (n >= 0)
    {
        p ++;

        cin >> n;
    }
    
    cout << "Ingreso " << p << "Números" << endl;

	return 0;
}