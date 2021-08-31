#include <iostream>
using namespace std;
int fibonacciPosicion(int num);
void seriefibonacci();
main() {
	seriefibonacci();
}
//Muestra el numero en la posicion de la serie fibonacci
int fibonacciPosicion(int num) {
	if (num > 1) {
		return fibonacciPosicion(num - 1) + fibonacciPosicion(num - 2);
	} else {
		if (num == 0) {
			return 0;
		}
		if (num == 1) {
			return 1;
		}
	}
}
//Muestra la serie fibonacci
void seriefibonacci() {
	int numero = 0;
	cout << "Cuanto numeros desea de la serie fibonacci: ";
	cin >> numero;
	cout << "Los " << numero << " primeros numeros de la serie fibonacci es:" << endl;
	for (int i = 0; i < numero; i++) {
		cout << fibonacciPosicion(i) << " ";
	}
}
