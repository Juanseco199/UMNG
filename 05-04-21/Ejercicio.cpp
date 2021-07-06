#include <iostream>
#include <locale>

using namespace std;

int a, b, c;

void orden()
{
	int num[3] = {a, b, c}, aux = 0;

	for (int i = 0; i <3; i++) 
	{
		for (int j = i+1; j <3; j++)
		{
			if (num[i] < num[j])
			{
				aux = num[i];
				num[i] = num[j];
				num[j] = aux;
			}
		}
	}
	for (int i = 0; i <3; i++)
	{
		cout << num[i] << endl;
	}
}

int main()
{
	system("color a"); 
	setlocale(LC_ALL, "");
	
	cout << "Ingrese 3 numeros para ordenarlos de forma descendente" << endl;
	cin >> a >> b >> c;

	orden();
	
	system("pause");
	return 0;
}