#include <iostream>
using namespace std;
main()
{
    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    int inf, sup, mitad, dato, contador = 1;
    char band = 'F';

    dato = 1;
    inf = 0;
    sup = sizeof(numeros) / sizeof(numeros[0]);

    //Algoritmo de la Busqueda Binaria
    while (inf <= sup)
    {
        mitad = (inf + sup) / 2;
        if (numeros[mitad] == dato)
        {
            band = 'V';
            break;
        }
        if (numeros[mitad] > dato)
        {
            sup = mitad;
            mitad = (inf + sup) / 2;
        }
        if (numeros[mitad] < dato)
        {
            inf = mitad;
            mitad = (inf + sup) / 2;
        }
        contador++;
    }

    if (band == 'V')
    {
        cout << "El numero se encontro en la posicion: " << mitad << endl;
        cout << "El contador de veces que se vuelve a repetir el ciclo es: " << contador << endl;
    }
    else
    {
        cout << "El numero NO se encontro";
    }
    //system("pause");
}