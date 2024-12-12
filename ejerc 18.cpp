//Crea un programa que lea tres números y use una función para calcular el mayor. La
//función debe recibir los números por valor y devolver el resultado por referencia.

#include <iostream>
using namespace std;


void calcularMayor(int a, int b, int c, int &resultado) {
    if (a >= b && a >= c) {
        resultado = a;
    } else if (b >= a && b >= c) {
        resultado = b;
    } else {
        resultado = c;
    }
}

int main() {

    int num1, num2, num3, mayor;


    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;


    calcularMayor(num1, num2, num3, mayor);


    cout << "El numero mayor es: " << mayor << endl;

    return 0;
}
