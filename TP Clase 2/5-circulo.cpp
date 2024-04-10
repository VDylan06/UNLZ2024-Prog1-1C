#include <iostream>

#define PI 3.1415

using namespace std;

int main() {
    
    double radio = 0;
    
    double area = 0;
    double perimetro = 0;

    cout << "Para calcular el area y perímetro de una circunferencia, ingrese el radio: " ;
    cin >> radio;
    
    area = PI * radio * radio;
    perimetro = 2 * PI * radio;

    cout << "El área de la circunferencia es de: "<< area << ", y el perimetro es de: "<<perimetro<<"." << endl;

    return 0;
}
