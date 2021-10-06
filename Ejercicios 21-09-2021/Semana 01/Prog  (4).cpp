//Ingresar un dígito reportar su denominación en Quechua (usando case).
#include <iostream>
using namespace std;
int dato;
main()
{
    do
    {
        cout << "\nIngrese un digito: ";
        cin >> dato;
    } while (!(dato >= 0 && dato <= 9));
    switch (dato)
    {
    case 0:
        cout << "El numero " << dato << " en quechua se escribe : Ch'usaq" << endl;
        break;
    case 1:
        cout << "El numero " << dato << " en quechua se escribe : Huk" << endl;
        break;
    case 2:
        cout << "El numero " << dato << " en quechua se escribe : Iskay" << endl;
        break;
    case 3:
        cout << "El numero " << dato << " en quechua se escribe : Kimsa" << endl;
        break;
    case 4:
        cout << "El numero " << dato << " en quechua se escribe : Tawa" << endl;
        break;
    case 5:
        cout << "El numero " << dato << " en quechua se escribe : Pichqa" << endl;
        break;
    case 6:
        cout << "El numero " << dato << " en quechua se escribe : Suqta" << endl;
        break;
    case 7:
        cout << "El numero " << dato << " en quechua se escribe : Qanchis" << endl;
        break;
    case 8:
        cout << "El numero " << dato << " en quechua se escribe : Pusaq" << endl;
        break;
    case 9:
        cout << "El numero " << dato << " en quechua se escribe : Isqun" << endl;
        break;
    }
}