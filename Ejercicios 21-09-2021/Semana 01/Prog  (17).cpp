//17.	Reportar la tabla de multiplicar del número 7. (usando for).
#include <iostream>
using namespace std;
int numero = 0;
main()
{
    cout << "Tabla de multiplicar del numero 7\n";
    for (int i = 0; i < 13; i++)
    {
        cout << i << " x " << " 7 = " << i * 7 << endl;
    }
}