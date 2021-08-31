#include <iostream>
using namespace std;
int factorial(int num);
main()
{
    cout << factorial(10);
}
int factorial(int num)
{
    if (num == 0)
    {
        num = 1;
    }
    else
    {
        num = num * factorial(num - 1);
    }
    return num;
}