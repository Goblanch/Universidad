#include <iostream>
using namespace std;

int main(){

    int num1, num2;
    cout << "Introduzca un numero entero: ";
    cin >> num1;
    cout << "Introduzca otro numero entero: ";
    cin >> num2;

    cout << "El valor del primer numero introducido es: " << num1 << endl;
    cout << "El valor del segundo numero introducido es: " << num2 << endl;

    return 0;
}

/*
    En la primera ejecución todo normal

    En la segunda ejecución al introducir "hola" como un numero
    aparece 0

    En la tercera ejecución al introducir hola como primer número, 
    se salta el resto de la ejecución, no espera a que el usuario
    introduzca otro número y la termina.
*/