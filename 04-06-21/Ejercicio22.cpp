/*
Realizar un programa en C++, que permita mostrar la siguiente figura utilizando
instrucciones repetitivas anidadas:
*
* *
* * *
* * * *
* * * * *
Autor: Juan Sebastián Herrera Bahamón
Fecha: 06/04/2021
*/

#include <iostream>

using namespace std;

int main()
{
	system("color a"); 

    int n = 0;

    for (int i = 0; i < 5; i++)
    {
        n++;

        for (int i = 0; i < n; i++)
        {
            cout << "* ";
        }
        
        cout << endl;
    }
    
	system("pause");
	return 0;
}