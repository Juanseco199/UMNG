/*
Introducción C++
Autor: Juan Sebastián Herrera Bahamón
Fecha: 02/Marzo/2021
*/

#include <iostream>
#include <locale.h>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	system("color a"); 
    setlocale(LC_ALL, "");

    double n, n1, t;

    t = n > n1;

    cout << "Hola Mundo" << endl;
    cout << "Ingrese dos números" << endl;
    cin >> n >> n1;
    cout << "El número que ingreso es" << setw(18) << setiosflags(ios::fixed) << setprecision(3) << n << endl;
    cout << "Seno de " << n << " = " << sin(n) << endl;
    cout << "Raíz cúbica de " << n << " = " << cbrt(n) << endl; //pow(n,(double)1/3)
    cout << "Valor de la comparación es " << t << endl;

	return 0;
}