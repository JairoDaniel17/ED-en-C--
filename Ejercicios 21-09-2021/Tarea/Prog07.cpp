//Reportar los primeros 50 números de la serie de Fibonacchi 0,1,1,2,3,5,8,13,21,...
#include <iostream>
using namespace std;
main()
{
    double numero = 50, fibo1 = 1, fibo2 = 1;
    int espacio = 0;
    cout << endl
         << "Los " << numero << " primeros numeros de la serie de Fibonacci son:" << endl;
    cout << fibo1 << " ";
    for (double i = 2; i <= numero; i++)
    {
        cout << fibo2 << " ";
        fibo2 = fibo1 + fibo2;
        fibo1 = fibo2 - fibo1;
        espacio++;
        if (espacio % 5 == 0)
        {
            cout << "\n";
        }
    }
}