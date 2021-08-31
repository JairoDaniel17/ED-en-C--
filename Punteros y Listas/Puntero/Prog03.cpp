#include <iostream>
using namespace std;
main()
{
    int numeros[] = {0, 1, 2, 3, 4};
    int *dir_numero;
    dir_numero = numeros;
    for (int i = 0; i < 5; i++)
    {
        cout << "Elemento del vector [" << i << "]" << *dir_numero++ << endl; 
        //4 bytes
    }
}