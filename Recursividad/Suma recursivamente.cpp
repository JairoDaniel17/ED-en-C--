#include <iostream>
using namespace std;

int sumaRecursiva(int, int);

main()
{
    cout << sumaRecursiva(32, 41);
}

int sumaRecursiva(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else if (a == 0)
    {
        return b;
    }
    else
    {
        return 1 + sumaRecursiva(a, b - 1);
    }
}