#include <iostream>
using namespace std;
main()
{
    int numeros[] = {2, 1, 8, 3, 4, 5, 6};
    int i, pos, aux;
    int limit = (sizeof(numeros) / sizeof(numeros[0]));

    //Ordenar el arreglo
    for (i = 0; i < limit; i++)
    {
        pos = i;
        aux = numeros[i];
        while ((pos > 0) && (numeros[pos - 1] > aux))
        {
            numeros[pos] = numeros[pos - 1];
            pos--;
        }
        numeros[pos] = aux;
    }
    // Muestra el arreglo ya ordenado en forma ascendente
    cout << "Orden ascendente: ";
    for (i = 0; i < limit; i++)
    {
        cout << numeros[i] << " ";
    }
    // Muestra el arreglo ya ordenado en forma ascendente
    cout << "\nOrden descendente: ";
    for (i = limit - 1; i >= 0; i--)
    {
        cout << numeros[i] << " ";
    }
}