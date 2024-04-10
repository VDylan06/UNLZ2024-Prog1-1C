#include <iostream>
using namespace std;

int main() {
    
    float Pesos = 0;
    float CotDolar = 0;
    float Dolares = 0;
    
    cout << "Ingrese la cantidad de pesos argentinos a convertir: ";
    cin >> Pesos;
    cout << "Ingrese la cotización del dolar: ";
    cin >> CotDolar;
    
    Dolares = Pesos/CotDolar;
    
    cout << "Ústed tendría " << Dolares << " Dolares." << endl;
    
    return 0;
    
}