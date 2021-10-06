//15.	Imprimir tantos dígitos decimales como lo indica su 
//valor numérico, es decir uno una vez, 2 dos veces, 3 tres veces, 
//etc. (usando for).
#include <iostream>
using namespace std;
main(){
    int numero = 0;
    cout <<"Ingrese un numero ";
    cin >> numero;
    cout << "\nSu numero es: " << numero << ".";
    for (int i = 0; i < numero; i++){
        cout << "0";
    }
}