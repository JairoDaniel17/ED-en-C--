//26.	Solo permitir ingresar solo dígitos (usando do---while)-
#include <iostream>
using namespace std;
int numero = 0;
main()
{
    do
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
    } while (!((numero >= 0) && (numero <= 9)));
    cout << "Su numero es de un solo digito";
}