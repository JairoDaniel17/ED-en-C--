//27.	Solo permitir ingresar múltiplos de 6 (usando do… while).
#include <iostream>
using namespace std;
int numero = 0;
main(){
    do {
        cout << "Ingrese un numero multiplo de 6: ";
        cin >> numero;
    }while(!(numero % 6 == 0));
    cout <<"Su numero es multiplo de 6";
}