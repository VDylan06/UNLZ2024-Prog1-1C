#include <iostream>
using namespace std;

int main() {
    
    char character = 'a';

    cout << "Ingrese un solo caracter: ";
    cin >> character;

    switch (character) {
        case 'a':
        cout << "Es vocal.";
        break;
        case 'e':
        cout << "Es vocal.";
        break;
        case 'i':
        cout << "Es vocal.";
        break;
        case 'o':
        cout << "Es vocal.";
        break;
        case 'u':
        cout << "Es vocal.";
        break;
         case 'A':
        cout << "Es vocal.";
        break;
        case 'E':
        cout << "Es vocal.";
        break;
        case 'I':
        cout << "Es vocal.";
        break;
        case 'O':
        cout << "Es vocal.";
        break;
        case 'U':
        cout << "Es vocal.";
        break;
        default:
            cout << "Es consonante.";
            break;
    }

    return 0;
}
