#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombres, apellido, direccion, localidad, provincia, pais, telefono;
    int edad = 0;

    cout << "Ingrese sus nombres: ";
    getline(cin, nombres);

    cout << "Ingrese su apellido: ";
    getline(cin, apellido);

    cout << "Ingrese su edad: ";
    cin >> edad;

    cin.ignore();

    cout << "Ingrese su dirección: ";
    getline(cin, direccion);

    cout << "Ingrese su localidad: ";
    getline(cin, localidad);

    cout << "Ingrese su provincia: ";
    getline(cin, provincia);

    cout << "Ingrese su país: ";
    getline(cin, pais);

    cout << "Ingrese su teléfono: ";
    getline(cin, telefono);
    
    cout << endl;

    cout << "--- Datos personales ---" << endl;
    cout << "Nombres: " << nombres << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Edad: " << edad << endl;
    cout << "Dirección: " << direccion << endl;
    cout << "Localidad: " << localidad << endl;
    cout << "Provincia: " << provincia << endl;
    cout << "País: " << pais << endl;
    cout << "Teléfono: " << telefono << endl;

    return 0;
}
