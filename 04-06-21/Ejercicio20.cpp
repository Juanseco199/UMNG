/*
Realizar un programa en C++, que permita mostrar la siguiente figura utilizando
instrucciones repetitivas anidadas:
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
Autor: Juan Sebastián Herrera Bahamón
Fecha: 06/04/2021
*/

#include <iostream>

using namespace std;

int main()
{
	system("color a");

    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "* ";
        }
        
        cout << endl;
    }
    
	
	system("pause");
	return 0;
}