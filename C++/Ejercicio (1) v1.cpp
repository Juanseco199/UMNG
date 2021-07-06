#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x, acum1, acum2, acum3, acum4, acum5, acum6, acum7, acum8, acum9, acum10, acum11, resultado = 0;

    cout<<"Ingrese un numero\n"; cin>>x;

    acum1 = x - 1;
	acum2 = 1 + x;
	acum3 = 2 * x;
	acum4 = pow(acum1,3);
	acum5 = pow(acum2,2);
	acum6 = acum3 + 1;
	acum7 = acum3 - 1;
	acum8 = 3 * acum7;
	acum9 = acum6 / acum8;
	acum10 = 4 * acum5;
	acum11 = 5 * acum9;
	resultado = acum4 + acum10 - acum11;

    cout<<"El resultado es: ";
    cout<<resultado;

    return 0;
}