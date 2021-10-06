//
// Created by Jairo2021 on 25/09/2021.
//
#include <iostream>

using namespace std;

class Datos {
public://se declaran estos datos publicos para que en el archivo main pueda acceder a ella, mediante las funciones
    // o alguna otra necesidad como sera el construtor
    int dia, mes, telefono;
    string nombre, apellido, direccion; // para el string en class se necesita el using namespace std
    //constructor de entrada de datos tiene la finalidad de darle una asignacion a los datos que ingresen en un orden especifico
    Datos(string, string, string, int);

    void mostrarDatos(); //con esto se mostrara todos los datos tanto los ingresados por la consola como los que ya fueron dados
    //se crea un objeto con los valores de entrada int, no es muy usual crear de esta forma pero sirve tambien
    void cumpleanio(int, int);

private:
    //funciones publicas no se recomienda usar en private porque en el caso de querer usarlas en el main no podran usarlas
    void apodo();
};

Datos::Datos(string _nombre, string _apellido, string _direccion, int _telefono) {
    // se pone un guion bajo para darles una asignacion de los nuevos datos que ingresen incluso podria ser otra nombre de variable pero
    // me indicaron que asi es para una buena practica de programacion y todos puedan entender tu codigo
    nombre = _nombre;
    apellido = _apellido;
    direccion = _direccion;
    telefono = _telefono;
}

void Datos::apodo() { // se puede crear una funcion vacia dentro de clases y objetos
    cout << nombre << apellido.length();

}

void Datos::cumpleanio(int _dia, int _mes) {
    dia = _dia;
    mes = _mes;
    cout << "Ingrese su dia de cumple: ";
    cin >> dia;
    cout << "\nIngrese su mes de cumple: ";
    cin >> mes;
    cout << "\nEl formato que se usa es dd/mm: " << dia << "/" << mes << endl;
}

void Datos::mostrarDatos() {
    cumpleanio(dia, mes);
    cout << "\nSu apodo es: ";
    cout << "\nSu nombre(s) son: " << nombre;
    cout << "\nSus apellidos son: " << apellido;
    cout << "\nSu Direccion es :" << direccion;
    cout << "\nSu telefono es: " << telefono;
    cout << "\nSu cumple es: " << dia << "/" << mes;
    cout << "\nSu apodo es: ";
    apodo();
    cout << "\n";
}

//esto no es util por ahora dejenlo nomas XD
#ifndef AGENDA_AGENDA_H
#define AGENDA_AGENDA_H

#endif //AGENDA_AGENDA_H
