/*
Elaborar un programa en C++ que imprima una tabla de multiplicar hasta el 10, dado el número multiplicando
digitado por teclado.
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

    int t = 0, i = 1;

    cout << "Ingrese el número de la tabla de multiplicar" << endl;
    cin >> t;

    while (i <= 10)
    {
        cout << t << " x " << i << " = " << t * i << endl;

        i ++;
    }
    

	return 0;
}