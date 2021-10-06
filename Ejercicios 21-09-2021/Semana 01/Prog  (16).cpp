//16.	Imprimir tantos dígitos decimales como
//lo indica su valor numérico, es decir uno una vez,
//2 dos veces, 3 tres veces, etc. (usando while).
#include <iostream>
using namespace std;
int numero = 0, n;
main()
{
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "\nSu numero es: " << numero << ".";
    do
    {
        cout << "0";
        n++;
    } while (n < numero);
}