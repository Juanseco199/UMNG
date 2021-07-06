#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double peso, estatura, indice = 0;
    
    cout<<"Hola, para calcular el indice de masa por favor ingresa:\n";
	cout<<"Peso en Kg\n"; cin>>peso;
	cout<<"Estatura en cm, aunque deberia de ser en metros\n"; cin>>estatura;

	indice = (peso / (pow(estatura,2)));

	cout<<"El indice de masa corporal es: "<<indice;

    return 0;
}