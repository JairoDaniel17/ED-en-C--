#include <iostream>
#include <math.h>
using namespace std;
int numero = 0, *dir_numero, contador = 0;
main()
{
    cout << "Ingrese un numero: ";
    cin >> numero;
    dir_numero = &numero;
    for (int i = 1; i < *dir_numero; i++)
    {
        if (*dir_numero % i == 0)
        {
            contador++;
        }
    }
    if (contador > 2)
    {
        cout << "El numero" << *dir_numero << "no es primo" << endl;
        cout << "La posicion de memoria es " << dir_numero << endl;
    }
    else
    {
        cout << "El numero " << *dir_numero << " es primo" << endl;
        cout << "La posicion de memoria " << dir_numero << endl;
    }
}
