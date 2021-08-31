#include <iostream>
using namespace std;
main()
{
    int numero, *dir_numero;
    cout << "Digite un numero: ";
    cin >> numero;
    dir_numero = &numero; //Guardando la posicion de memoria
    if (*dir_numero % 2 == 0)
    {
        cout << "El numero " << *dir_numero << " es par" << endl;
        cout << "La posicion de memoria " << dir_numero << endl;
    }
    else {
        cout << "El numero " << *dir_numero <<" no es par" << endl;
        cout << "La posicion de memoria " << dir_numero << endl;
    }
}