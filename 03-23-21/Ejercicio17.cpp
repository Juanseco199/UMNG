/*
Realizar un programa que imprima los 25 primeros términos de la serie 11, 22, 33, 44, etc.
(No se ingresan valores por teclado).
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

    int i, opc, t = 11;

    switch (opc)
    {
    case 1:
        while (i <= 25)
        {
            t = i * 11;
            cout << "Termino " << i << " = " << t << endl;
            i++;
        }
        break;

    case 2:
        do
        {
            t = i * 11;
            cout << "Termino " << i << " = " << t << endl;
            i++;
        } while (i <= 25);
        break;

    case 3:
        for (int i = 1; i <= 25; i++)
        {
            t = i * 11;
            cout << "Termino " << i << " = " << t << endl;
        }
        break;
    
    default:
        cout << "El número que usted ingreso no corresponde a ninguna opción" << endl;
        break;
    }

	return 0;
}