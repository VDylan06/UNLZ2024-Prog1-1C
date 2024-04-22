
#include <iostream>
using namespace std;

int main() {
    
    int año = 0;
    int añoBisiesto = 0;
    
    cout << "Ingrese el año: ";
    cin >> año;
    
    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
       cout << "El año ingresado es bisiesto.";
    } else { 
       cout << "El año ingreaso no es bisiesto.";
    }

    return 0;
}
