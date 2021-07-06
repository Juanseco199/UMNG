/*
Escribir un programa en C++, que permita crear un juego para adivinar en cinco intentos un número del 0 al 19.
Se debe generar aleatoriamente el número a adivinar. Utilizar las funciones para generar números aleatorios y
la instrucción break para interrumpir el juego si el usuario adivina antes de los 5 intentos.
Autor: Juan Sebastián Herrera Bahamón
Fecha: 16/Marzo/2021
*/

#include <iostream>
#include <locale>
#include <time.h>

using namespace std;

int main()
{
	system("color a"); 
    setlocale(LC_ALL, "");

    int opc, n, y, i = 0;
    srand(time(NULL));

    switch (opc)
    {
    case 1:
        y = rand () % 19;

        do
        {
            cout << "Intento " << i << endl;
            cout << "Ingrese el número a adivinar" << endl;
            cin >> n;

            if (n == y)
            {
                cout << "¡Gano!" << endl;
            }
            else
            {
                cout << "¡Perdio!" << endl;
            }
            
            i ++;
        } while (i < 5);
        
        break;

    case 2:
        do
        {
            y = rand () % 19;

            cout << "Intento " << i << endl;
            cout << "Ingrese el número a adivinar" << endl;
            cin >> n;

            if (n == y)
            {
                cout << "¡Gano!" << endl;

                break;
            }
            else
            {
                cout << "¡Perdio!" << endl;
            }
            
            i ++;
        } while (i < 5);
        
        break;
    
    default:
        cout << "Esa opción no existe" << endl;

        break;
    }
    
	return 0;
}