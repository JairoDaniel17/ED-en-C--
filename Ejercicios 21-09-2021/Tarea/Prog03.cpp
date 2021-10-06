//Leer los lados de un triángulo y clasificarlos según sus lados.
#include <iostream>
using namespace std;
float dato1, dato2, dato3;
main()
{
    do
    {
        cout << "Escriba el numero del primer lado de un triangulo: ";
        cin >> dato1;
        if (dato1 <= 0)
        {
            cout << "El lado de un triangulo no puede ser negativo: ";
        }
        else
        {
        }
    } while (dato1 <= 0);
    do
    {
        cout << "Escriba el numero del segundo lado de un triangulo: ";
        cin >> dato2;
        if (dato2 <= 0)
        {
            cout << "El lado de un triangulo no puede ser negativo: ";
        }
        else
        {
        }
    } while (dato2 <= 0);
    do
    {
        cout << "Escriba el numero del tercer lado de un triangulo: ";
        cin >> dato3;
        if (dato3 <= 0)
        {
            cout << "El lado de un triangulo no puede ser negativo: ";
        }
        else
        {
        }
    } while (dato3 <= 0);
    if ((dato1 + dato2 > dato3) && (dato1 + dato3 > dato2) && (dato3 + dato2 > dato1))
    {

        if ((dato1 == dato2) && (dato1 == dato3))
        {
            cout << "\nEs triangulo equilatero" << endl;
        }
        else if ((dato1 == dato2) || (dato1 == dato3))
        {
            cout << "\nEs triangulo Isoceles" << endl;
        }
        else if ((dato1 != dato2) && (dato1 != dato3))
        {
            cout << "\nEs triangulo escaleno" << endl;
        }
    }
    else
    {
        cout << "\nNo Existe un Triangulo con esas medidas" << endl;
    }
}