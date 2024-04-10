#include <iostream>
#include <cmath>
using namespace std;

int main() { 
    
    double longitud = 0; 
    double perimetro = 0; 
    double area = 0;
    
    cout << "Para calcular el área y el perímetro de un triángulo equilátero, ingrese la longitud de uno de los lados: ";
    cin >> longitud;
    
    area = (longitud * longitud * sqrt(3)) / 4;
    perimetro = longitud * 3;
    
    cout << "El área es de " << area << ", y el perímetro es de " << perimetro << "." ;
    
    return 0; 
}
