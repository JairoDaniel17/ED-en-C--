#include <iostream>
using namespace std;
int panel(int x);
int valor = 0;

struct panel {
	int valor0[3][5] = {{1, 1, 1, 1, 1}, {1, 0, 0, 0, 1}, {1, 1, 1, 1, 1}};
	int valor1[3][5] = {{0, 1, 0, 0, 0}, {1, 1, 1, 1, 1}, {0, 0, 0, 0, 0}};
	int valor2[3][5] = {{1, 0, 1, 1, 1}, {1, 0, 1, 0, 1}, {1, 1, 1, 0, 1}};
	int valor3[3][5] = {{1, 0, 1, 0, 1}, {1, 0, 1, 0, 1}, {1, 1, 1, 1, 1}};
	int valor4[3][5] = {{1, 1, 1, 0, 0}, {0, 0, 1, 0, 0}, {1, 1, 1, 1, 1}};
	int valor5[3][5] = {{1, 1, 1, 0, 1}, {1, 0, 1, 0, 1}, {1, 0, 1, 1, 1}};
	int valor6[3][5] = {{1, 1, 1, 1, 1}, {1, 0, 1, 0, 1}, {1, 0, 1, 1, 1}};
	int valor7[3][5] = {{1, 0, 0, 1, 1}, {1, 0, 1, 0, 0}, {1, 1, 0, 0, 0}};
	int valor8[3][5] = {{1, 1, 1, 1, 1}, {1, 0, 1, 0, 1}, {1, 1, 1, 1, 1}};
	int valor9[3][5] = {{1, 1, 1, 0, 0}, {1, 0, 1, 0, 0}, {1, 1, 1, 1, 1}};
};
struct panel p;

main() {
	do {
		cout << "Ingrese un valor entero del 0 al 9: ";
		cin >> valor;
	} while (!((valor >= 0) && (valor <= 9)));
	panel(valor);
}

int panel(int x) {
	switch (x) {
		case 0:
			for (int filas = 0; filas < 5; filas++) {
				for (int columnas = 0; columnas < 3; columnas++) {
					cout << p.valor0[columnas][filas] << " ";
				}
				cout << "\n";
			}
			break;
		case 1:
			for (int filas = 0; filas < 5; filas++) {
				for (int columnas = 0; columnas < 3; columnas++) {
					cout << p.valor1[columnas][filas] << " ";
				}
				cout << "\n";
			}
			break;
		case 2:
			for (int filas = 0; filas < 5; filas++) {
				for (int columnas = 0; columnas < 3; columnas++) {
					cout << p.valor2[columnas][filas] << " ";
				}
				cout << "\n";
			}
			break;
		case 3:
			for (int filas = 0; filas < 5; filas++) {
				for (int columnas = 0; columnas < 3; columnas++) {
					cout << p.valor3[columnas][filas] << " ";
				}
				cout << "\n";
			}
			break;
		case 4:
			for (int filas = 0; filas < 5; filas++) {
				for (int columnas = 0; columnas < 3; columnas++) {
					cout << p.valor4[columnas][filas] << " ";
				}
				cout << "\n";
			}
			break;
		case 5:
			for (int filas = 0; filas < 5; filas++) {
				for (int columnas = 0; columnas < 3; columnas++) {
					cout << p.valor5[columnas][filas] << " ";
				}
				cout << "\n";
			}
			break;
		case 6:
			for (int filas = 0; filas < 5; filas++) {
				for (int columnas = 0; columnas < 3; columnas++) {
					cout << p.valor6[columnas][filas] << " ";
				}
				cout << "\n";
			}
			break;
		case 7:
			for (int filas = 0; filas < 5; filas++) {
				for (int columnas = 0; columnas < 3; columnas++) {
					cout << p.valor7[columnas][filas] << " ";
				}
				cout << "\n";
			}
			break;
		case 8:
			for (int filas = 0; filas < 5; filas++) {
				for (int columnas = 0; columnas < 3; columnas++) {
					cout << p.valor8[columnas][filas] << " ";
				}
				cout << "\n";
			}
			break;
		case 9:
			for (int filas = 0; filas < 5; filas++) {
				for (int columnas = 0; columnas < 3; columnas++) {
					cout << p.valor9[columnas][filas] << " ";
				}
				cout << "\n";
			}
			break;
	}
	return 0;
}
