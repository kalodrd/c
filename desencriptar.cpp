//Desarrolle un programa para desencriptar palabras para el programa anterior.
//Su programa debe recibir el texto encriptado e imprimir todas las posibles
//palabras desencriptadas, 5 en total.


#include <iostream>
#include <string>

using namespace std;


string desencriptarPalabra(const string& palabra, int clave) {
    string palabraDesencriptada = "";


    for (char c : palabra) {

        palabraDesencriptada += char(int(c) - clave);
    }

    return palabraDesencriptada;
}

int main() {
    string palabraEncriptada;


    cout << "Introduce la palabra encriptada: ";
    cin >> palabraEncriptada;


    cout << "Posibles palabras desencriptadas:" << endl;
    for (int clave = 1; clave <= 5; ++clave) {
        string palabraDesencriptada = desencriptarPalabra(palabraEncriptada, clave);
        cout << "Clave " << clave << ": " << palabraDesencriptada << endl;
    }

    return 0;
}
