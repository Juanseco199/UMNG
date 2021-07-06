/*
Crear un vector que contenga las edades de 10 alumnos. Calcular y escribir la cantidad de alumnos mayores de
edad y la cantidad de alumnos menores de edad.
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

    int edades [10];
    int may = 0, men = 0;

    for (int i = 0; i < 10; i++)
    {
        edades[i] = rand()%100;
    }
    for(int i = 0; i < 10; i++)
    {
        cout << "[" << i << "] " << edades[i] << endl;
    }
    for(int i = 0; i < 10; i++)
    {
        if (edades[i] >= 18)
        {
            may++;
        }
        else
        {
            men++;
        }
    }

    cout << "Cantidad de estudiantes mayores de edad: " << may << endl;
    cout << "Cantidad de estudiantes menores de edad: " << men << endl;
	
	system("pause");
	return 0;
}