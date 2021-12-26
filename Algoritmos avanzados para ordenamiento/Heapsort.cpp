/*Es un método de ordenamiento basado con comparación,
usa el Montículo o Heap como estructura de datos. Este
método es más lento que otros métodos, pero es más eficaz
en escenarios más rigurosos.
Se define como un método No Recursivo, No Estable y
con Complejidad Computacional.

Formula:
o (n log n)
Aclaración:
•  No es estable.
•  Método complejo.
*/  
#include <windows.h>
#include <iostream>
#define MAX 100
using namespace std;

class Heapsort {
	public:
		int lista[MAX];
		int j, temp, hijo;
		bool esmonticulo;
		void heapsort(int[], int);
		void monticulo(int[], int, int);
};
void Heapsort::monticulo(int lista[], int primero, int ultimo) {
	cout << endl
	     << endl
	     << "Nuevo Monticulo" << endl
	     << endl;
	esmonticulo = false;
	for (int k = primero; k <= ultimo; k++) {
		cout << lista[k] << "\t";
	}
	cout << endl;
	while ((primero <= ultimo / 2) && !esmonticulo) {
		if (2 * primero == ultimo) {
			hijo = 2 * primero;
		} else {
			if (lista[2 * primero] > lista[2 * primero + 1]) {
				hijo = 2 * primero;
			} else {
				hijo = 2 * primero + 1;
			}
		}
		if (lista[primero] < lista[hijo]) {
			cout << endl
			     << endl
			     << "Cambio de " << lista[primero] << " por " << lista[hijo] << endl
			     << endl;
			temp = lista[primero];
			lista[primero] = lista[hijo];
			lista[hijo] = temp;
			primero = hijo;
		} else {
			esmonticulo = true;
		}
	}
}

void Heapsort::heapsort(int lista[], int n) {
	for (j = n / 2; j >= 0; j--) {
		monticulo(lista, j, n);
	}
	for (j = n; j >= 1; j--) {
		temp = lista[0];
		lista[0] = lista[j];
		lista[j] = temp;
		cout << endl
		     << "Sacamos al dato " << lista[j] << " de la lista." << endl
		     << endl;
		cout << endl
		     << "************************************************************" << endl
		     << "Nueva Lista: " << endl
		     << endl;
		for (int k = 0; k < j; k++) {
			cout << lista[k] << "\t";
		}
		Sleep(2000);
		cout << endl;
		monticulo(lista, 0, j - 1);
	}
}

main() {
	Heapsort h;
	int c;
	cout << "cuantos datos: ";
	cin >> c;
	for (int i = 1; i <= c; i++) {
		system("cls");
		cout << "dato[" << i << "]: ";
		cin >> h.lista[i];
	}
	system("cls");
	/**/ cout << "Lista Original" << endl
	          << endl;
	for (int i = 1; i <= c; i++) {
		cout << h.lista[i] << "  ";
	}
	h.heapsort(h.lista, c);
	cout << endl;
	cout << endl
	     << "Lista Ordenada" << endl
	     << endl;
	for (int i = 1; i <= c; i++) {
		cout << h.lista[i] << "  ";
	}
	cout << endl
	     << endl;
	system("pause");
}
