//3.	Ingresar un dígito reportar su denominación en italiano (usando if).
#include <iostream>
using namespace std;
main()
{
    int numero = 0;
    do
    {
        cout << "Ingrese un numero del [0-9]:";
        cin >> numero;
    } while (!(numero >= 0 && numero <= 9));

    if (numero == 0)
    {
        cout << "0 en italiano es: zero";
    }
    if (numero == 1)
    {
        cout << "1 en italiano es: uno";
    }
    if (numero == 2)
    {
        cout << "2 en italiano es: due";
    }
    if (numero == 3)
    {
        cout << "3 en italiano es: tre";
    }
    if (numero == 4)
    {
        cout << "4 en italiano es: quattro";
    }
    if (numero == 5)
    {
        cout << "5 en italiano es: cinque";
    }
    if (numero == 6)
    {
        cout << "6 en italiano es: sei";
    }
    if (numero == 7)
    {
        cout << "7 en italiano es: sette";
    }
    if (numero == 8)
    {
        cout << "8 en italiano es: otto";
    }
    if (numero == 9)
    {
        cout << "9 en italiano es: nove";
    }
}