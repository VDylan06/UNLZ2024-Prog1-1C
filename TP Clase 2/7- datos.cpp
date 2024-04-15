#include <iostream>
#include <string>

using namespace std;

int main() {
	string nombres = "";
	string apellidos = "";
	string direccion = "";
	string localidad = "";
	string provincia = "";
	string pais = "";
	string telefono = "";

    int edad = 0;

    cout << "Ingrese su nombre/s: ";
    getline(cin, nombres);

    cout << "Ingrese su apellido/s: ";
    getline(cin, apellidos);

    cout << "Ingrese su edad: ";
    cin >> edad;

    cin.ignore();

    cout << "Ingrese su direccion: ";
    getline(cin, direccion);

    cout << "Ingrese su localidad: ";
    getline(cin, localidad);

    cout << "Ingrese su provincia: ";
    getline(cin, provincia);

    cout << "Ingrese su pais: ";
    getline(cin, pais);

    cout << "Ingrese su telefono: ";
    getline(cin, telefono);
    
    cout << endl;

    cout << "--- Datos personales ---" << endl;
    cout << "Nombres: " << nombres << endl;
    cout << "Apellido: " << apellidos << endl;
    cout << "Edad: " << edad << endl;
    cout << "Direccion: " << direccion << endl;
    cout << "Localidad: " << localidad << endl;
    cout << "Provincia: " << provincia << endl;
    cout << "Pais: " << pais << endl;
    cout << "Telefono: " << telefono << endl;

    return 0;
}
