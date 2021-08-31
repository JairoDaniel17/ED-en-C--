#include <iostream>
using namespace std;
int mcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    return mcd(b % a, a);
}
main()
{
    cout << mcd(240, 180);
}