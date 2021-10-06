//Reportar los 20 primeros números de la serie 1,2,5,26,...
#include <iostream>
using namespace std;
long double x = 0;
main()
{
    cout << "Los 20 primeros numeros de la serie asignada es:\n";
    for (int i = 0; i < 20; i++)
    {
        x = (x * x) + 1;
        cout << x << "\n";
    }
}