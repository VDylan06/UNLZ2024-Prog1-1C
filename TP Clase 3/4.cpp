
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int opcion = 0;
    
    cout << "Ingrese un número del 1 al 7: ";
    cin >> opcion;
    

    switch (opcion) {
        case 1:
            cout << "Lunes.";
            break;
        case 2:
            cout << "Martes.";
            break;
        case 3:
            cout << "Miercoles.";
            break;
        case 4:
            cout << "Jueves.";
            break;
        case 5:
            cout << "Viernes.";
            break;
        case 6:
            cout << "Sabado.";
            break;
        case 7:
            cout << "Domingo.";
            break;
            default:
            cout << "Ingrese una opción válida (1-7).";
            break;
    }
    
    return 0;
    
    }