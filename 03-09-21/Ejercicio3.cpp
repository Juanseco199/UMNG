/*
Diseñar un programa en C++ que lea un número de tres cifras y determine si es palíndromo 
(el mismo al leerlo al revés, Ejemplo: 474).
Autor: Juan Sebastián Herrera Bahamón
Fecha: 09/Marzo/2021
*/

#include <iostream>
#include <locale>

using namespace std;

int main ()
{
    system("color a"); 
    setlocale(LC_ALL, "");

    int n, c, d, u;

    cout << "Ingrese un número" << endl;
    cin >> n;
    
    c = n / 100;
	d = (n/10)%10;
    u = n%10;

    if (n >= 100 && n <= 999)
    {
        if (c == u)
        {
            cout << "Es palindromo" << endl;
        }
        else
        {
            cout << "No es palindromo" << endl;
        }
    }
    else
    {
        cout << "Dato de más de tres cifras" << endl;
    }

    return 0;
}