/*
Realizar la suceción de Fibonacci
Autor: Juan Sebastián Herrera Bahamón
Fecha: D/M/2021
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    system("color a"); 
    setlocale(LC_ALL, "");

    int count, opc, F = 1, F1 = 0, F2 = 1, i = 1;

    cout << "Por favor ingrese la cantidad de cifras que desea de la sucesión" << endl;
    cin >> count;

    cout << "Por favor ingrese la opcion" << endl;
    cin >> opc;
    
    cout << "1 ";

    switch (opc)
    {
    case 1:
        while (i < count)
        {
            F = F1 + F2;
            
            cout << F << " ";
            
            F1 = F2;
            F2 = F;
            
            i++;
        }
        break;

    case 2:
        do
        {
            F = F1 + F2;
            
            cout << F << " ";
            
            F1 = F2;
            F2 = F;
            
            i++;
        } while (i < count);
        break;

    case 3:
        for (int i = 1; i < count; i++)
        {
            F = F1 + F2;
            
            cout << F << " ";
            
            F1 = F2;
            F2 = F;
        }
        break;
    
    default:
        cout << "El número que usted ingreso no corresponde a ninguna opción" << endl; 
        break;
    }
    
	return 0;
}