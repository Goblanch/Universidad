#include <iostream>
using namespace std;
const double POND_TEORICA = 0.7;
const double POND_PRACTICA = 0.3;

int main(){

    double teoria, practica, nota_final;

    cout << "Introduzca la nota de la parte teorica: ";
    cin >> teoria;
    cout << "Introduzca la nota de la parte practica: ";
    cin >> practica;

    nota_final = (POND_TEORICA * teoria) + (POND_PRACTICA * practica);

    cout << "La calificacion es: " << nota_final << endl;

    return 0;
}