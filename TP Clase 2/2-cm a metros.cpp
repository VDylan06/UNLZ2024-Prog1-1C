#include <iostream>
#include <string>

using namespace std;

int main() {
    
    double centimetros = 0;
    double metros = 0;
    
    cout << "Ingrese los centimetros a convertir en metros: ";
    cin >> centimetros;
    
    metros = centimetros * 0.01;
    
    cout << ""<< centimetros <<" centímetros son "<< metros <<" metros.";
    
    return 0;
}
