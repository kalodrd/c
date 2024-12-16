//Desarrolle un programa para encriptar palabras. Recuerde que cada letra tiene su
//valor numérico equivalente en ASCII.
//El programa debe solicitar una palabra, un número del 1 al 5 como clave para
//encriptar e imprimir la palabra encriptada.



#include <iostream>
#include <string>

using namespace std;


string encriptarPalabra(const string& palabra, int clave) {
    string palabraEncriptada = "";


    for (char c : palabra) {

        palabraEncriptada += char(int(c) + clave);
    }

    return palabraEncriptada;
}

int main() {
    string palabra;
    int clave;


    cout << "Introduce una palabra: ";
    cin >> palabra;


    cout << "Introduce un numero de clave (1-5): ";
    cin >> clave;


    if (clave < 1 || clave > 5) {
        cout << "La clave debe estar entre 1 y 5." << endl;
        return 1;
    }


    string palabraEncriptada = encriptarPalabra(palabra, clave);


    cout << "Palabra encriptada: " << palabraEncriptada << endl;

    return 0;
}
