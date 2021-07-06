/*
Crear un switch con caracteres
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

    char opc;

    cin >> opc;

    switch (opc)
    {
    case 'a':
        cout << "Hola Mundo";
        break;
    
    default:
        break;
    }

	return 0;
}