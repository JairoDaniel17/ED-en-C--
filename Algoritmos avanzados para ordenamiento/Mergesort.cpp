/*
Definición
Consiste en dividir el problema a resolver en 
subproblemas del mismo tipo que a su vez se dividirán, 
mientras no sean suficientemente pequeños o triviales.
Complejidad del algoritmo
Para ordenar un arreglo de tamaño n se ordenan 2 arreglos de tamaño n/2, 
de aquí el 2T(n/2), y luego se consume O(n) en realizar la mezcla. 
Resolviendo la ecuación recurrente tenemos que T(n) = O(n log n).
Propiedades:
Es Estable.
Memoria Auxiliar O(n).
No ordena en el lugar.
Es O(n log n).
*/
#include <iostream>
#include <conio.h>
using namespace std;
int a[50];
void merge(int, int, int);

void merge_sort(int izquierda, int derecha)
{
    int medio;
    if (izquierda < derecha)
    {
        medio = (izquierda + derecha) / 2;
        merge_sort(izquierda, medio);
        merge_sort(medio + 1, derecha);
        merge(izquierda, medio, derecha);
    }
}
void merge(int izquierda, int medio, int derecha)
{
    int h, i, j, b[50], k;
    h = izquierda;
    i = izquierda;
    j = medio + 1;

    while ((h <= medio) && (j <= derecha))
    {
        if (a[h] <= a[j])
        {
            b[i] = a[h];
            h++;
        }
        else
        {
            b[i] = a[j];
            j++;
        }
        i++;
    }
    if (h > medio)
    {
        for (k = j; k <= derecha; k++)
        {
            b[i] = a[k];
            i++;
        }
    }
    else
    {
        for (k = h; k <= medio; k++)
        {
            b[i] = a[k];
            i++;
        }
    }
    for (k = izquierda; k <= derecha; k++)
    {
        a[k] = b[k];
    }
}
main()
{
    int num, i;
    cout << "  *******************************" << endl;
    cout << "   PROGRAMA MERGE SORT         " << endl;
    cout << "  ******************************  " << endl;
    cout << endl
         << endl;
    cout << "INGRESE LA CANTIDAD DE ELEMENTOS" << endl;
    cin >> num;
    cout << endl;
    cout << "LOS ELEMENTOS SON:" << endl;
    for (i = 1; i <= num; i++)
    {
        cin >> a[i];
    }
    merge_sort(1, num);
    cout << endl;
    cout << endl
         << endl;
    cout << "EL NUEVO ORDEN DE ELEMENTOS ES:" << endl;
    for (i = 1; i <= num; i++)
    {
        cout << a[i] << "   ";
    }
    return 0;
}