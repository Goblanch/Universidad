#include <iostream>
using namespace std;
int main()
{
    int num11 = -7;
    int num12 = 4;
    cout << "Valor de número11 (int): " << num11 << endl;

    cout << "Valor de número12 (int): " << num12 << endl;
    if (num11 < num12) {
        cout << "El valor " << num11 << " es menor que el valor " << num12
        << " CORRECTO" << endl;
    } else {
        cout << "El valor " << num11 << " NO es menor que el valor " << num12
        << " ERROR" << endl;
    }
    //-------------------------------
    int num21 = -7;
    unsigned num22 = 4;
    cout << "Valor de número21 (int): " << num21 << endl;
    cout << "Valor de número22 (unsigned): " << num22 << endl;
    if (num21 < num22) {
        cout << "El valor " << num21 << " es menor que el valor " << num22
        << " CORRECTO" << endl;
    } else {
        cout << "El valor " << num21 << " NO es menor que el valor " << num22
        << " ERROR" << endl;
    }
}

/*
    En el segundo bloque del programa al comparar un número negativo de tipo int con
    un numero de tipo unisgned, se obtiene una salida errónea. No se puede comparar
    entre estos dos tipos si el número de tipo int es negativo ya que dentro se los
    tipo unsigned no existen.
*/