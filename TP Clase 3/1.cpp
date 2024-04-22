#include <iostream>
using namespace std;

int main() {
    
    double num1 = 0;
    double num2 = 0;
    double num3 = 0;
    double mayor = 0;

    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese el tercer número: ";
    cin >> num3;

    if (num1 >= num2 && num1 >= num3) {
        mayor = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        mayor = num2;
    } else {
        mayor = num3;
    }

    cout << "El mayor de los 3 números ingresados es el " << mayor << "." << endl;

    return 0;
}
