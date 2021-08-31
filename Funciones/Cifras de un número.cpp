#include <iostream>
using namespace std;
int NdeCifras(int num);
main()
{
    cout << NdeCifras(445897);
}
int NdeCifras(int num)
{
    int contador = 0;
    while (num != 0)
    {
        num /= 10;
        contador++;
    }
    cout << "El numero tiene un total de cifras de:" << endl;
    return contador;
}