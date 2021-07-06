/*
Crear un código que imprima la palabra "Gato" con la función while
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

    int i = 1;

    while (i <= 10)
    {
        cout << "Gato" << i << endl;
        i++;
    }
    
    int i = 0;

    while (i < 10)
    {
        cout << "Gato" << i << endl;
        i++;
    }
	return 0;
}