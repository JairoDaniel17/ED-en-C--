//Ingresar solo números enteros de tres cifras.
#include <iostream>
using namespace std;
main()
{
    int num = 0;
    do
    {
        cout << "Ingrese un numero entero de 3 cifras: ";
        cin >> num;
    } while (!(num >= 100 && num < 1000));
    cout << "Su numero " << num << " es de 3 cifras";
}