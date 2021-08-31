#include <iostream>
#include <conio.h>
using namespace std;

void intercambiar(float &x, float &y)
{
    float aux;

    aux = x;
    x = y;
    y = aux;
}

void ordenacionShell(float a[], int n)
{
    int salto, i, j, k;
    salto = n / 2;

    while (salto > 0)
    {
        for (i = salto; i < n; i++)
        {
            j = i - salto;
            while (j >= 0)
            {
                k = j + salto;
                if (a[j] <= a[k])
                {
                    j = -1; //par de elementos ordenado
                }
                else
                {
                    intercambiar(a[j], a[k]);
                    j -= salto;
                }
            }
        }
        salto = salto / 2;
    }
}

main()
{
    float arreglo[] = {6, 1, 5, 2, 3, 4, 0};

    ordenacionShell(arreglo, 7);

    cout << "Arreglo Ordenado - Forma Ascendente: " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << arreglo[i] << "|";
    }

    cout << "\n\nArreglo Ordenado - Forma Descendente" << endl;
    for (int i = 6; i >= 0; i--)
    {
        cout << arreglo[i] << "|";
    }

    getch();
    return 0;
}