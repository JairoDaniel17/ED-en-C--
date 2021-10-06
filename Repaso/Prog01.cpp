#include <iostream>
#include <math.h>
using namespace std;
double a, b, c, r1 = 0, r2 = 0;
int main()
{
    do
    {
        cout << "escriba el primer coeficiente de la cuadratica: " << endl;
        cin >> a;
    } while (a = 0);
    int aux = a;
    cout << "escriba el segundocoeficiente de la cuadratica: " << endl;
    cin >> b;
    cout << "escriba el tercer coeficiente de la cuadratica: " << endl;
    cin >> c;
    cout << "\nDatos: " << a << " 1" << b << " " << c;
    r1 = (-b + sqrt(pow(b, 2) - 4 * aux * c)) / (2 * aux);
    r2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    cout << "\nEl resultado 1 es: " << r1 << endl;
    cout << "El resultado 2 es: " << r2 << endl;
}