#include <iostream>
using namespace std;
int divisores(int num);
main()
{
    cout << divisores(465);
}

int divisores(int num)
{
    cout << "Los divisores son: " << endl;
    int contador = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
            contador++;
        }
    }
    cout << "\nTotal divisores: " << endl;
    return contador;
}