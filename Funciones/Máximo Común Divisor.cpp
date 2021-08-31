#include <iostream>
using namespace std;
int mcd(int a, int b);
main()
{
    cout << mcd(240, 180);
}

int mcd(int a, int b)
{
    int acumulador = 1;
    for (int i = 2; i <= 11; i++)
    {
        while ((a % i == 0) && (b % i == 0))
        {
            acumulador *= i;
            a /= i;
            b /= i;
        }
    }
    return acumulador;
}