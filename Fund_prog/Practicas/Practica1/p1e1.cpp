#include <iostream>
using namespace std;
const double PTS_EUR = 166.386;

int main(){
    double pts, euros;
    cout<<"Introduzca la cantidad de pesetas: ";
    cin>>pts;
    euros = pts / PTS_EUR;
    cout<<pts<<" equivalen a "<<euros<<" euros"<<endl;
    
    return 0;
}