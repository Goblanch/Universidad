#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Introduzca el primer número entero: ";

    cin >> num1;
    cout << "Introduzca el segundo número entero: ";
    cin >> num2;
    int suma = num1 + num2;
    cout << "Primer número: " << num1 << endl;
    cout << "Segundo número: " << num2 << endl;
    cout << "Resultado (num1 + num2): " << suma << endl;
}

/*
    a) Comportamiento normal. Salida esperada.
    b) Comportamiento normal. Salida esperada.
    c) Comportamiento normal. Salida esperada.
    d) Comportamiento anormal. Salida inesperada --> Desbordamiento.
    e) Comportamiento anormal. Salida inesperada --> Desbordamiento.
    f) Comportamiento anormal. Salida inesperada --> Se desborda la variable num2
       ya que se introduce un número mayor al máximo que se puede almacenar en 
       una variable del tipo int. Por lo mismo, la suma tambien se desborda como
       en el caso anterior.
*/