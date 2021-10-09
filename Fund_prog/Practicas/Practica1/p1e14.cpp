#include <iostream>
using namespace std;

int main()
{
    int num11 = -7;
    int num12 = 4;
    double num13 = num11 + num12;
    cout << "Valor de número11 (int): " << num11 << endl;
    cout << "Valor de número12 (int): " << num12 << endl;
    cout << "Valor de número13 (double) (num11 + num12): " << num13 << " CORRECTO" << endl;
    //-------------------------------
    int num21 = -7;
    unsigned num22 = 4;
    double num23 = num21 + num22;
    cout << "Valor de número21 (int): " << num21 << endl;
    cout << "Valor de número22 (unsigned): " << num22 << endl;
    cout << "Valor de número23 (double) (num21 + num22): " << num23 << " ERROR" << endl;
}

/*
    En el segundo bloque, la salida no es correcta ya que estamos operando un tipo
    int negativo con un tipo unsigned, el cual no contiene números negativas.
*/