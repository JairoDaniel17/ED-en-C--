#include <iostream>
using namespace std;
bool palindromo(string palabra);
main()
{
    int variableAux = 0;
    variableAux = palindromo("jairo");
    if (variableAux == 1){
        cout << "La palabra es un palindromo";
    }
    else{
        cout<< "La palabra no es un palindromo";
    }
}

bool palindromo(string palabra)
{
    int ultimo = palabra.length() - 1;
    if (palabra[0] != palabra[ultimo])
    {
        return false;
    }
    if (palabra.length() < 2)
    {
        return true;
    }
    string subpalabra = palabra.substr(1, ultimo - 1);
    if (palindromo(subpalabra))
    {
        return true;
    }
    return false;
}