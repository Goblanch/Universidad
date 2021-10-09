#include <iostream>
using namespace std;

int main(){
    int a = 6;
    int b = 14;
    int auxiliar;
    cout << "a vale " << a << " y b vale " << b << endl;
    // ¿Qué hacen estas tres sentencias?
    auxiliar = a;
    a = b;
    b = auxiliar;
    cout << "a vale " << a << " y b vale " << b << endl;
}

/*
    El programa tiene 3 variables a, b, y auxialiar. En la primera sentencia de 
    cout, muestra los valores que contienen a y b.

    A continuación, en las tres sentencias siguientes, se almacena el valor de a en auxiliar,
    se le asigna el valor de 'b' a 'a' y el valor de auxiliar a b. Como hemos dicho antes,
    auxiliar contiene el valor de a y de esta manera, se estan intercambiando los valores de 
    a y b en estas tres sentencias.

    Finalmente se muestran de nuevo los valores de a y b y se puede comprobar correctamente
    que a pasa a valer b y que b pasa a valer a.
*/