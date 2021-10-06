//Ingresar solo números múltiplos de 9.
#include <iostream>
using namespace std;
main()
{
    int num = 0, condicion = 0;
    do
    {
        cout << "Ingrese un numero multiplo de 9: ";
        cin >> num;
        if (num % 9 == 0)
        {
            condicion = 1;
        }
    } while (num != 0 && condicion != 1);
    cout << "\nSu numero " << num << " es un multiplo de 9" << endl;
}