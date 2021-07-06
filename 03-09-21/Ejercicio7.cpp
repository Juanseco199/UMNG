/*
Utilizando la instrucción switch, desarrollar un programa en C++, que muestre la siguiente pantalla:
Calculadora
1. Suma
2. Resta
3. Multiplicación
4. División
5. Potenciación
6. Radicación
Autor: Juan Sebastián Herrera Bahamón
Fecha: 02/Marzo/2021
*/

#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main()
{
	system("color a"); 
    setlocale(LC_ALL, "");

    int opcion;
    double n1, n2;

    cout << "Calculadora" << endl;
    cout << " 1. Suma \n 2. Resta \n 3. Multiplicación \n 4. División \n 5. Potenciación \n 6. Radicación" << endl;
    cout << "Seleccione una de las anteriores opciones " << endl;
    cin >> opcion;
    cout << "Ingrese dos números " << endl;
    cin >> n1 >> n2;

    switch (opcion)
    {
    case 1:
        cout << "La suma es = " << n1 + n2 << endl;
        break;

    case 2:
        cout << "La resta es = " << n1 - n2 << endl;
        break;

    case 3:
        cout << "La multiplicación es = " << n1 * n2 << endl;
        break;

    case 4:
        if (n2 != 0)
        {
            cout << "La división es = " << n1 / n2 << endl;
        }
        else
        {
            cout << "División por cero" << endl;
        }
        break;

    case 5:
        cout << "La potenciación es = " << pow(n1, n2) << endl;
        break;

    case 6:
        cout << "La radicación es = " << pow(n1,(double) 1 / n2) << endl;
        break;
    
    default:
        cout << "El número que ingreso no corresponde con ninguna opción" << endl;
        break;
    }

	return 0;
}