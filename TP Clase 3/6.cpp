#include <iostream>
using namespace std;

int main() {
    
    float num1 = 0;
    float num2 = 0;
    int cuenta = 0;

    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese una de las opciones para la operación a realizar mediante un número: suma (1), resta (2)," << endl;
    cout << "multiplicación (3), división (4): ";
    cin >> cuenta;

    switch (cuenta) {
        case 1:
            cout << "El resultado de la suma es: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "El resultado de la resta es: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "El resultado de la multiplicación es: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 == 0) {
                cout << "Error: No se puede dividir por cero." << endl;
            } else {
                cout << "El resultado de la división es: " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "La opción ingresada no es válida." << endl;
            break;
    }

    return 0;
}