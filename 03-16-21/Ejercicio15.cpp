/*
Hacer con la función Switch un menú de saludos
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

    int opcion, a = 0;

    cout << "1. Saludo 1\n2. Saludo 2\n3. Saludo 3" << endl;
    cin >> opcion;

    do {
    switch (opcion)
    {
    case 1:
        cout << "Hola que tal" << endl;
        break;
    
    case 2:
        cout << "Quihubo" << endl;
        break;

    case 3:
        cout << "Entonces, qué tal" << endl;
        break;
    default:
        cout << "Usted está loco" << endl;
        break;
    }

    cout << "Desea continuar con otra opción\n1. Sí\n0. No" << endl;
    cin >> a;
    }while (a != 0);

	return 0;
}