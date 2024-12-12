//Crea una función que reciba dos números enteros como parámetros y devuelva su  suma.

#include <iostream>
using namespace std;


int sumar(int a, int b) {
    return a + b;
}

int main() {

    int num1, num2;


    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;


    int resultado = sumar(num1, num2);


    cout << "La suma de " << num1 << " y " << num2 << " es: " << resultado << endl;

    return 0;
}
