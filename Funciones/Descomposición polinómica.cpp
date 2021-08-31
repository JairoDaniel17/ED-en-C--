#include <iostream>
using namespace std;
void descomposicion(int num);
main()
{
    descomposicion(170728);
}
void descomposicion(int num)
{
    for (int i = 2; num > 1; i++)
    {
        int contador = 0;
        while (num % i == 0)
        {
            contador++;
            num = num / i;
            if (num % i != 0)
            {
                if (contador > 1)
                {
                    cout << i << "^" << contador;
                    if (num > 1)
                    {
                        cout << "x";
                    }
                }
                else if (num == 1)
                {
                    cout << i;
                }
                else
                {
                    cout << i << "x";
                }
            }
        }
    }
}