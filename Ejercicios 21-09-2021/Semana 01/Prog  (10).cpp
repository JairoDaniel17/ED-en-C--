//10.	Reportar la suma de los "n" primeros números naturales pares(usando for).
#include <iostream>
using namespace std;
int numero = 0, par = 0;
main()
{
    cout << "Ingrese un numero ";
    cin >> numero;
    for (int i = 0; i <= numero; i++)
    {
        if (numero % 2 == 0)
        {
            par = par + i;
        }
        else{

        }
    }
    cout << "\nLa suma de los n primeros numeros naturales pares es: " << par << endl;
}
