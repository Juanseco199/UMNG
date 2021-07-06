/*
El Ministerio de Transporte requiere un programa para los dispositivos de control de velocidad instalado en las
principales carreteras del país, leer la velocidad del vehículo y mostrar un mensaje según la velocidad así:
Velocidad (km/h)  Mensaje
Hasta 80          Permitido
Entre 81 y 100    Alerta
Más de 100        Peligro
Autor: Juan Sebastián Herrera Bahamón
Fecha: 09/Marzo/2021
*/

#include <iostream>

using namespace std;

int main()
{
	int velocidad;

	cout << "Ingrese la velocidad del automóvil" << endl;
	cin >> velocidad;

	if (velocidad <= 80)
	{
		cout << "Permitido" << endl;
	}
	else if (velocidad >= 81 && velocidad <= 100)
	{
		cout << "Alerta" << endl;
	}
	else if (velocidad > 100)
	{
		cout << "Peligro" << endl;
	}
	else
	{
		cout << "Velocidad incorrecta" << endl;
	}
	
	return 0;
}