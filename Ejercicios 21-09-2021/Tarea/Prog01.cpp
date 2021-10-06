//Determinar el mayor de cinco enteros,
//reportando cuantos son iguales al mayor
#include <iostream>
using namespace std;
main()
{
    int n1, n2, n3, n4, n5, mayor, a = 0, b = 0, c = 0, d = 0, e = 0;
    cout << "Escriba el primer numero: ";
    cin >> n1;
    cout << "\nEscriba el segundo numero: ";
    cin >> n2;
    cout << "\nEscriba el tercero numero: ";
    cin >> n3;
    cout << "\nEscriba el cuarto numero: ";
    cin >> n4;
    cout << "\nEscriba el quiunto numero: ";
    cin >> n5;
    mayor = n1;
    if (n2 > mayor)
    {
        mayor = n2;
    }
    if (n3 > mayor)
    {
        mayor = n3;
    }
    if (n4 > mayor)
    {
        mayor = n4;
    }
    if (n5 > mayor)
    {
        mayor = n5;
    }
    cout << "El numero mayor es: " << mayor << endl;
    if (mayor == n1)
    {
        a++;
    }
    if (mayor == n2)
    {
        b++;
    }
    if (mayor == n3)
    {
        c++;
    }
    if (mayor == n4)
    {
        d++;
    }
    if (mayor == n5)
    {
        e++;
    }
    cout << "El numero mayor se repite " << (a + b + c + d + e) - 1 << " veces" << endl;
}