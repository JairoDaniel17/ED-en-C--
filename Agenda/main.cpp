#include "procesos-internos/agenda.h"

int main() {
    //Formato:
    //Clase objeto(datos);
    //datos tiene el siguiente orden string(nombre,apellidos,direccion), int (telefono)
    //estos datos que se ingresaron de forma predeterminada puede ser ingresados por la consola pero necesita de otras variables
    Datos p1("Jairo Daniel", "Mendoza Torres", "Jr. los topacios 2161A", 934076419);
    Datos p2("Ella", "Si te ama", " O quien sabe XD", 123456789);
    cout << "\n";
    //para poder mostrar los datos se necesita un objeto es decir los datos de p1 o p2
    p1.mostrarDatos();
    cout << "\n--------------------------------------------------------\n";
    p2.mostrarDatos();
    system("pause");
}
