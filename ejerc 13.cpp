//Crea un programa que almacene en un vector cinco números ingresados por
//el usuario  y los imprima en orden inverso.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros(5);

    cout << "Por favor, ingrese 5 numeros: \n";
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }


    cout << "\nLos numeros en orden inverso son: \n";
    for (int i = 4; i >= 0; i--) {
        cout << numeros[i] << endl;
    }

    return 0;
}
