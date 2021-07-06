/*
Diseñar un programa en C++ que indique si un número es par
Autor: Juan Sebastián Herrera Bahamón
Fecha: 09/Marzo/2021
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    system("color a"); 
    setlocale(LC_ALL, "");
    
    int n;

    cout << "Ingrese un número" << endl;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Es par" << endl;
    }
    else
    {
        cout << "Es impar" << endl;
    }

    return 0;
}