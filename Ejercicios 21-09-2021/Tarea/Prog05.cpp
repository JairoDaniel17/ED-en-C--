/*
Reportar la comisión por ventas según la siguiente tabla.
Valor de ventas(S/.) Comisión (%)
0-1000               0%
1001-5000            30%
5001-10000           50%
Mayores que 10001    60%
*/

#include <iostream>
using namespace std;
int total = 0;
main()
{
    do
    {
        cout << "Ingrese el total del valor de ventas para que sepa la comision: ";
        cin >> total;
    } while (!(total >= 0));
    if (total >= 0 && total <= 1000)
    {
        cout << "La comisión es 0%" << endl;
    }
    if (total >= 1001 && total <= 5000)
    {
        cout << "La comision es del 30%: " << (total * 0.3);
        cout << "\nUn total de: " << total + (total * 0.3);
    }
    if (total >= 5001 && total <= 10000)
    {
        cout << "La comision es del 50%: " << (total * 0.5);
        cout << "\nUn total de: " << total + (total * 0.5);
    }
    if (total >= 10001)
    {
        cout << "La comision es del 60%: " << (total * 0.6);
        cout << "\nUn total de: " << total + (total * 0.6);
    }
}
