/*
Se tienen tres arreglos M, N y Z de 10 elementos cada uno. Guardar en Z la suma de los 
elementos correspondientes de los arreglos M y N
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
    srand(time(NULL));

    int m[10], n[10], z[10];

    for (int i = 0; i < 10; i++)
    {
        m[i] = rand() %100;
    }
    for (int i = 0; i < 10; i++)
    {
        n[i] = rand() %100;
    }
    for (int i = 0; i < 10; i++)
    {
        z[i] = m[i] + n[i];
        cout << "[" << i << "]" << m[i] << "+" << n[i] << "=" << z[i] << endl;
    }
	
	system("pause");
	return 0;
}