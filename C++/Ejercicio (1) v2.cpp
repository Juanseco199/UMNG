#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  double x, resultado = 0;

    cout<<"Ingrese un numero\n"; cin>>x;

	resultado = (pow((x - 1),3) + (4 * (pow((1 + x),2))) - (5 * (((2 * x) + 1) / (3 * ((2 * x) - 1)))));

    cout<<"El resultado es: ";
    cout<<resultado;

    return 0;
}