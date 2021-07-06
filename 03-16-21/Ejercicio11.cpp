/*
Suma enteros introducidos por teclado, el programa termina cuando se ingrese como número el número 10 
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

    int suma = 0, n = 0;

    while (n != 10)
    {
        cout << "Ingrese un número" << endl;
        cin >> n;

        suma += n;
    }
    
    cout << "Suma =" << endl;

	return 0;
}