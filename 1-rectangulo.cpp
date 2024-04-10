#include <iostream>
#include <string>

using namespace std;

int main() {
    
    double longitud = 0;
    double ancho = 0; 
    double area = 0;
    double perimetro = 0;
    
    cout << "Para calcular el area deseada del rectángulo, primero ingrese el ancho: ";
    cin >> ancho;
    cout << "Ingrese la longitud: " ;
    cin >> longitud;
    
    area = ancho * longitud;
    perimetro = 2 * (longitud + ancho);
    
    cout << "El area es: " << area << endl;
    cout << "El perimetro es: " << perimetro << endl;
    
    return 0;
}
