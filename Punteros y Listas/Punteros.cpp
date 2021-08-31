#include <iostream>
using namespace std;
int num= 20, *dir_num;
main(){
    dir_num = &num;
    cout << "Numero "<< num << endl;
    cout << "Direccion de num " << dir_num << endl;
}

/*
si pones asterisco al inicio de la variable lo que haces
es declarar que quieres que vea lo que hay dentro de la memoria y si pones un
& lo que haces es dar la posicion de memoria.*/