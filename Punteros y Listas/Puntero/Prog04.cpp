#include <iostream>
using namespace std;
int numeros[] = {1, 2, 3, 4, 5};
int *dir_numero;

main()
{
    dir_numero = numeros;
    for (int i = 0; i < 5; i++)
    {
        cout << "Elemento del vector: "
             << "[" << i << "]: " << *dir_numero++ << endl;
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Posiciones de memoria "
             << numeros[i] << " es: " << dir_numero++ << endl;
    }
}
