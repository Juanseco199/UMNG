/*
Realizar un programa en C++ que permita visualizar un rectángulo de n filas por m
columnas, siendo n y m datos digitados por el usuario
Autor: Juan Sebastián Herrera Bahamón
Fecha: 06/04/2021
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
	system("color a"); 
    setlocale(LC_ALL, "");

    int n, m;

    cout << "Ingrese el número de filas que desea" << endl;
    cin >> n;
    cout << "Ingrese el número de columnas que desea" << endl;
    cin >> m;

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < m; i++)
        {
            cout << "* ";
        }
        
        cout << endl;
    }
	
	system("pause");
	return 0;
}