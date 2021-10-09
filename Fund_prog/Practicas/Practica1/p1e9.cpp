#include <iostream>
#include <iomanip>
using namespace std;
const int SEG_SEMANA = 604800;
const int SEG_DIA = 86400;
const int SEG_HORA = 3600;
const int SEG_MINUTO = 60;

int main(){

    int semanas, dias, horas, minutos, seg, seg_aux;

    cout << "Introduzca los segundos: ";
    cin >> seg;
    seg_aux = seg;

    semanas = seg / SEG_SEMANA;
    seg = seg % SEG_SEMANA;
    dias = seg / SEG_DIA;
    seg = seg % SEG_DIA;
    horas = seg / SEG_HORA;
    seg = seg % SEG_HORA;
    minutos = seg / SEG_MINUTO;
    seg = seg % SEG_MINUTO;

    cout << seg_aux << " segundos equivalen a [" << setfill(' ') << setw(3);
    cout << semanas << "] semanas, " << dias << " dias, ";
    cout << setfill('0') << setw(2) << horas << ":";
    cout << setfill('0') << setw(2) << minutos << ":";
    cout << setfill('0') << setw(2) << seg << endl;

    return 0;
}