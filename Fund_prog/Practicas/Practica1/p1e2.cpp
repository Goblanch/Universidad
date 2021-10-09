#include <iostream>
using namespace std;
const double TASA = 25.0;
const double PRECIO_HORA = 60.0;

int main(){
    double horas, dias, total, neto;

    cout << "Introduzca las horas trabajadas: ";
    cin >> horas;
    cout << "Introduzca los dias trabajados: ";
    cin >> dias;
    //horas*dias*PRECIO_HORA = total;
    total = horas * PRECIO_HORA * dias;
    neto = total-TASA;
    cout << "El valor total a pagar es: " << total << endl;
    cout << "El valor neto a pagar es: " << neto << endl;

    return 0;
}