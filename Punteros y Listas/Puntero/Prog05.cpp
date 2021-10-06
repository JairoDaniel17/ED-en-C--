#include <iostream>
using namespace std;

int variable = 25;
int &referencia = variable;

main()
{
    cout << "Contenido de Variable = " << variable << endl;
    cout << "Direccion &variable = " << &variable << endl;
    cout << "Contenido de referencia = " << referencia << endl;
    cout << "Direccion &referencia = " << &referencia << endl;
}