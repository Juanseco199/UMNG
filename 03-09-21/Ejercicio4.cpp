/*
Desarrollar un programa en C++ que lea tres números y determine si la suma de cualquier pareja de ellos es
igual al otro número. Si se cumple esta condición escribir IGUALES en caso contrario DIFERENTE.
Autor: Juan Sebastián Herrera Bahamón
Fecha: 09/Marzo/2021
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    system("color a"); 
    setlocale(LC_ALL, "");

	int num1, num2, num3;

    cout << "Digite un número entero por favor" << endl;
    cin >> num1;
    cout << "Digite un número entero por favor" << endl;
    cin >> num2;
    cout << "Digite un número entero por favor" << endl;
    cin >> num3;
    
    if (num1 + num2 == num3 || num1 + num3 == num2 || num2 + num3 == num1)
    {
        cout << "IGUALES" << endl;
    }
    else {
        cout << "DIFERENTES" << endl;
    }

	return 0;
}