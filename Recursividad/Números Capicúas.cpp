#include <iostream>
#include <math.h>
using namespace std;
int medir_largo(int valor)
{
    int largo = 0;
    if (valor > 0)
    {
        valor /= 10;
        largo++;
        largo += medir_largo(valor);
    }
    return largo;
}

int capicua(int valor)
{
    int invertido = 0;
    int largo = medir_largo(valor);
    if (largo > 0)
    {
        invertido += pow(10, largo - 1) * (valor % 10);
        valor /= 10;
        invertido += capicua(valor);
    }
    return invertido;
}

main()
{
    int valor;
    do
    {
        cout << "Introduce un valor mayor que 9: ";
        cin >> valor;
        if (valor <= 9)
        {
            cout << "Valor no valido. ";
        }
    } while (valor <= 9);

    if (capicua(valor) == valor)
    {
        cout << "El valor " << valor << " es capicuo.\n";
    }
    else
    {
        cout << "El valor " << valor << " no es capicuo.\n";
    }
}
