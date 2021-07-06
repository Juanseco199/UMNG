/*
Crear una tabla que almacene  la notas (0.0 a 5.0) de los 10 estudiantes de un curso en las cinco asignaturas
que que toman. Mostrar el contenido de la tabla.
Autor: Juan Sebastián Herrera Bahamón
Fecha: D/M/2021
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
	system("color a"); 
    setlocale(LC_ALL, "");

    float notas[10][5], n;

    for (int i = 0; i < 10; i++)
    {
        cout << "Estudiante No. " << i + 1 << ": " << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "Ingrese la nota No. " << j + 1 << ": ";
            cin >> n;
            if (n >= 0 && n <= 5.0)
            {
                notas[i][j] = n;
            }
            else
            {
                cout << "Nota no valida" << endl;
                j++;
            }
            
        }
        
    }
    
    system("cls");

    cout << endl << " Notas Ingresadas: " << endl << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Estudiante No. " << i + 1 << ": " << endl;
        for (int j = 0; j < 5; j++)
        {
            
            cout << notas[i][j] << " ";
        }
        
    }

    cout << endl;
	
	system("pause");
	return 0;
}