#include <iostream>
using namespace std;

int main(){

    string palabra, aux;
    cout << "Introduzca una palabra de 4 letras minúsculas: ";
    cin >> palabra;
    aux = palabra;
    palabra[0] = palabra[0] - 32;
    palabra[1] = palabra[1] - 32;
    palabra[2] = palabra[2] - 32;
    palabra[3] = palabra[3] - 32;

    cout << "La palabra [" << aux << "] transformada es [" << palabra << "]" << endl;

    return 0;
}