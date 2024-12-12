//Escribe un programa que multiplique dos matrices de 2x2 ingresadas por el usuario.

#include <iostream>

using namespace std;

int main() {

    int A[2][2], B[2][2], C[2][2];


    cout << "Ingrese los elementos de la primera matriz A (2x2):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }


    cout << "Ingrese los elementos de la segunda matriz B (2x2):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento B[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> B[i][j];
        }
    }



    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }


    cout << "El resultado de la multiplicacion de las matrices es:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
