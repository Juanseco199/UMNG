/*
Seleccionar y escribir el bucle adecuado para resolver las siguientes tareas:

a) Suma de la serie 1/2+1/3+1/4+1/5+...+1/50.

b) Lectura de la lista de n calificaciones de un examen de Historia.

c) Visualizar la suma de enteros en el intervalo 11...50.
Autor: Juan Sebastián Herrera Bahamón
1001193481
GRUPO MEC D (CALLE 100) 2021-01
1804072
Fecha: 23/03/2021
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
	system("color a");
	setlocale(LC_ALL, "");

	char opcion;
	int intervalo = 11, n, nota, x = 1;
	double denominador = 2, s = 0;

	cout << "Seleccionar y escribir el bucle adecuado para resolver las siguientes tareas:" << endl;
	cout << "a) Suma de la serie 1/2+1/3+1/4+1/5+...+1/50." << endl;
	cout << "b) Lectura de la lista de n calificaciones de un examen de Historia." << endl;
	cout << "c) Visualizar la suma de enteros en el intervalo 11...50." << endl;

	cout << "Ingrese la opcion" << endl;
	cin >> opcion;

	switch (opcion)
	{
	case 'a':
    for (double denominador = 2; denominador <= 50; denominador++)
	{
		s = s + 1 / denominador;

		cout << "La suma es: " << s << endl;
		
	}
		break;

	case 'b':
		cout << "Ingrese la cantidad de notas que desesa promediar" << endl;
		cin >> n;

		while (x <= n)
		{
			cout << "Ingrese la nota" << endl;
			cin >> nota;

			s = s + nota;
			x++;
		}

		cout << "El promedio de " << n << " notas es " << s / n << "\n" << endl;
		break;

	case 'c':
		while (intervalo <= 50)
		{
			cout << intervalo << endl;

			intervalo++;
		}
		break;
	
	default:
		cout << "La letra que ingreso no corresponde con ninguna opción" << endl;
		break;
	}

	return 0;
}