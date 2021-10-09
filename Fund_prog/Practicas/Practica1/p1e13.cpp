#include <iostream>
using namespace std;

int main()
{
    bool ok = (3.0 * (0.1 / 3.0)) == ((3.0 * 0.1) / 3.0);
    cout << 3.0 * (0.1 / 3.0) << " " << (3.0 * 0.1) / 3.0 << endl;
    cout << "Resultado de (3.0 * (0.1 / 3.0)) == ((3.0 * 0.1) / 3.0): "
    << boolalpha << ok << " -> ERROR" << endl;
}

/*
    Resultado esperado: true
    Resultado obtenido: false

    Explicación: 
*/