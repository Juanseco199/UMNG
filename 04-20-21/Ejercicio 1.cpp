/*

Autor: Juan Sebastián Herrera Bahamón
Fecha: 20/04/2021
*/

#include <iostream>
#include <time.h>
#include <locale>

using namespace std;

int main()
{
	system("color a"); 
    setlocale(LC_ALL, "");

    float estatura[5] = {1.70, 1.56, 1.67, 1.81, 1.45};

    for (int i = 0; i < 5; i++)
    {
        cout << estatura[i] << " ";
        cout << i << " ";
        cout << "[" << i << "]=" << estatura[i] << endl;
    }
    
    cout << endl;
	
	system("pause");
	return 0;
}