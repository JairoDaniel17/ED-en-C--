//Ingresar un número de tres cifras e indicar cuantas centenas, decenas y unidades tiene.
#include <iostream>
using namespace std;
main()
{
    int num = 0, unidades, decenas, centenas;
    do
    {
        cout << "Ingrese un numero de hasta de 3 cifras, que pertenezca a N: ";
        cin >> num;
    } while (!((num >= 0) && (num <= 999)));
    centenas = (num / 100);
    decenas = (num - (centenas * 100)) / 10;
    unidades = num - ((centenas * 100) + (decenas * 10));
    cout << "Su numero " << num << " tiene: " << centenas << " centena(s), "
         << decenas << " decena(s) y " << unidades << " unidad(es)." << endl;
}