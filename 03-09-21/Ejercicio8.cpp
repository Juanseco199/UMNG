/*
Un restaurante requiere un programa para calcular y escribir el valor a pagar por un pedido dado el tipo de
menú, así:
Tipo de Menú  Valor Unitario
A             $9,500
B             $12,500
C             $16,000
El usuario debe seleccionar el tipo de menú, la cantidad a solicitar e indicar si requiere la entrega a
domicilio o no (S/N). Si el pedido es a domicilio se debe pagar por el empaque $500 por cada almuerzo y un 
recargo fijo de $3.500. Utilice la estructura switch en la solución.
Autor: Juan Sebastián Herrera Bahamón
Fecha: 02/Marzo/2021
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
	system("color a"); 
    setlocale(LC_ALL, "");

    char opcion, domicilio;
    int cantidad;

    cout << "Tipo de Menú  Valor Unitario" << endl;
    cout << "A             $9,500" << endl;
    cout << "B             $12,500" << endl;
    cout << "C             $16,000" << endl;
    cout << "Ingrese el tipo de menú" << endl;
    cin >> opcion;
    cout << "Ingrese la cantidad solicitada" << endl;
    cin >> cantidad;
    cout << "¿Se requiere domicilio? \n (Y/N)" << endl;
    cin >> domicilio;

    if (domicilio == 'Y' || domicilio == 'y')
    {
        switch (opcion)
        {
        case 'A':
            /* code */
            break;
        
        default:
            break;
        }
    }
    else
    {
        
    }
    

	return 0;
}