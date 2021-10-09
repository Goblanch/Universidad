#include <iostream>
using namespace std;

int main(){

    string palabra, aux;
    cout << "Introduzca una palabra de 4 letras: ";
    cin >> palabra;
    aux = palabra;

    palabra[0] = palabra[0] + 1;
    palabra[1] = palabra[1] + 1;
    palabra[2] = palabra[2] + 1;
    palabra[3] = palabra[3] + 1;

    cout << "La palabra [" << aux << "] transformada es: [" << palabra << "]" << endl;

    return 0;
}