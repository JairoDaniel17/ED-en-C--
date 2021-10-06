//Leer n datos y determinar el meojr de ellos
#include <iostream>
using namespace std;
main()
{

    int n, i, a = 0, menor = 0;
    while (n <= 0)
    {
        cout << "Escriba la cantidad de datos que desea \ncomparar para saber cual es el menor: ";
        cin >> n;
    }
    cout << i + 1 << ". Escriba un numero: ";
    cin >> a;
    menor = a;
    for (i = 0; i < n - 1; i++)
    {
        cout << i + 2 << ". Escriba un numero: ";
        cin >> a;
        if (menor > a)
        {
            menor = a;
        }
    }
    cout << "El  menor numero es: " << menor << endl;
}