/*
Elaborar un programa en C++ para una Tienda que desea calcular el monto total de venta. Se deben leer dos
variables (costo unitario y cantidad vendida). Imprimir el valor de cada venta y determinar el valor final de
la venta si se realizan 10 ventas al día. Validar que no se registren ventas ni cantidades negativas.
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

    int costoUnitario, cantidadVendida, totalVendido;
    int i = 1, a = 0;
    
    while (i <= 10)
    {
        cout << "Ingrese el costo unitario" << endl;
        cin >> costoUnitario;
        cout << "Ingrese la cantidad vendida" << endl;
        cin >> cantidadVendida;

        if (costoUnitario > 0 && cantidadVendida > 0)
        {
            cout << "Costo de la venta " << i << " es " << costoUnitario * cantidadVendida << endl;
            
            a + totalVendido;
        }
        else
        {
            cout << "Usted a ingresado un número negativo" << endl;
        }
        
        i ++;
    }
    

	return 0;
}