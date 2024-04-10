#include <iostream>

using namespace std; 

#define VelocidadSonido 343

int main() {
    
    double Segundos = 0;
    double Distancia = 0;
    
    cout << "Ingrese en segundos el tiempo transcurrido entre el relámpago y el trueno: " ;
    cin >> Segundos;

    Distancia = Segundos * VelocidadSonido;

    cout << "La tormenta tormenta se encuentra a " << Distancia << " metros." << endl;

    return 0;
}
