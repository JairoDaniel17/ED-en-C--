#include <iostream>
using namespace std;
int productoRecursivo(int, int);

main()
{
    cout << productoRecursivo(3, 5);
}

int productoRecursivo(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }
    else
    {
        return a + productoRecursivo(a, b - 1);
    }
}