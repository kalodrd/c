//Escribe un programa que use una función para intercambiar los valores de dos
//variables. Usa paso por referencia.

#include <iostream>

using namespace std;


void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int num1, num2;


    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;


    cout << "Antes del intercambio:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;


    intercambiar(num1, num2);


    cout << "Despues del intercambio:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
