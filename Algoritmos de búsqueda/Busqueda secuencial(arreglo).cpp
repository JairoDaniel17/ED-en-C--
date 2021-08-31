#include <iostream>
using namespace std;
main()
{
    int a[] = {3, 4, 2, 1, 5};
    int i, dato;
    char bandera = 'F';

    //Busqyeda secuencial
    i = 0;
    dato = 4;
    while ((bandera == 'F') && (i < 5))
    {
        if (a[i] == dato)
        {
            bandera = 'V';
        }
        i++;
    }
    if (bandera == 'F')
    {
        cout << "El numero a buscar no existe en el arreglo" << endl;
    }
    else if (bandera == 'V')
    {
        cout << "El numero a sido encontrado en la posicion " << i - 1 << endl;
    }
}