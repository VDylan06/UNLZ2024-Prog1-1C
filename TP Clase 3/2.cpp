#include <iostream>
using namespace std;

// Estructura de decisión simple (if-else):

/*2. Desarrollar un programa que solicite el año de nacimiento de una persona, calcular su
edad: Si la edad es mayor o igual a 18 años, imprimir "La persona es mayor de edad",
de lo contrario, imprimir "La persona es menor de edad". */

int main() {
    
    int añoNacimiento = 0;
    int añoActual = 2024;
    int edad = 0;
    
    cout << "Ingrese el año de nacimiento: ";
    cin >> añoNacimiento;
    
    edad = añoActual - añoNacimiento;
    
    cout << "Su edad es de "  << edad << " años.";
    
    if (edad >= 18) {
         cout << " La persona es mayor de edad.";
    } else {
        cout << " La persona es menor de edad.";
    }

    return 0;
}