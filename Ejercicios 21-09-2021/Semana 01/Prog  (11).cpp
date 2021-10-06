//11.	Reportar la suma de cuadrados de los "n" primeros números naturales (usando while).
#include <iostream>
using namespace std;
main(){
    int natural = 0, n = 0, suma = 0;
    cout << "Ingrese un numero ";
    cin >> n;
    while(natural <= n){
      suma = (natural * natural) + suma;   
    }
    cout << "La suma de cuadrados hasta " << n << " es: "<< suma << endl;
}