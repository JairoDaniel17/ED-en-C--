#include <iostream>
using namespace std;

class fechas
{
public:
    void capturarSuma();
    void capturarResta();
    void sumarfechas();
    void restarfechas();
    fechas(int, int, int, int, int, int);

private:
    int dia, mes, anio, dia2, mes2, anio2;
};
//constructor 1
fechas::fechas(int _dia, int _mes, int _anio, int _dia2, int _mes2, int _anio2)
{
    dia = _dia;
    mes = _mes;
    anio = _anio;
    dia2 = _dia2;
    mes2 = _mes2;
    anio2 = _anio2;
}

void fechas::capturarSuma()
{
    cout << "Ingrese el dia de la fecha 1: ";
    cin >> dia;
    cout << "\nIngrese el mes de la fecha 1: ";
    cin >> mes;
    cout << "\nIngrese el año de la fecha 1: ";
    cin >> anio;
    cout << "\nIngrese el dia de la fecha 2: ";
    cin >> dia2;
    cout << "\nIngrese el mes de la fecha 2: ";
    cin >> mes2;
    cout << "\nIngrese el año de la fecha 2: ";
    cin >> anio2;
    fechas suma(dia, mes, anio, dia2, mes2, anio2);
    cout << "\nEl resultado de la suma de fechas es: ";
    suma.sumarfechas();
}

void fechas::capturarResta()
{
    cout << "Ingrese el dia de la fecha 1: ";
    cin >> dia;
    cout << "\nIngrese el mes de la fecha 1: ";
    cin >> mes;
    cout << "\nIngrese el año de la fecha 1: ";
    cin >> anio;
    cout << "\nIngrese el dia de la fecha 2: ";
    cin >> dia2;
    cout << "\nIngrese el mes de la fecha 2: ";
    cin >> mes2;
    cout << "\nIngrese el año de la fecha 2: ";
    cin >> anio2;
    fechas resta(dia, mes, anio, dia2, mes2, anio2);
    cout << "\nEl resultado de la resta de fechas es: ";
    resta.restarfechas();
}

void fechas::sumarfechas()
{
    int totaldias = dia + dia2;
    int totalmes = mes + mes2;
    int totalanios = anio + anio2;
    cout << totaldias << " / " << totalmes << " / " << totalanios;
}
void fechas::restarfechas()
{
    int totaldias = dia - dia2;
    int totalmes = mes - mes2;
    int totalanios = anio - anio2;
    cout << totaldias << " / " << totalmes << " / " << totalanios;
}
main()
{
    int opcion;
    cout << "Hola buen dia el programa puede sumar y\n restar 2 fechas\n";
    cout << "1. Sumar fechas" << endl;
    cout << "2. Restar fechas" << endl;
    cout << "Elija una opcion:  ";
    cin >> opcion;
    switch (opcion)
    {
    case 1:
    {
        fechas f1(0, 0, 0, 0, 0, 0);
        f1.capturarSuma();
        cout << "\n";
    }
    break;
    case 2:
    {
        fechas f2(0, 0, 0, 0, 0, 0);
        f2.capturarResta();
        cout << "\n";
    }
    break;
    default:
        cout << "\nNo eligio una opcion valida, adios";
    }
}