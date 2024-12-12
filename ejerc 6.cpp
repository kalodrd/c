//Escribe un programa que solicite cinco números y verifique si todos son mayores
//que  un número de referencia ingresado por el usuario.

#include <iostream>  // Librería para manejo de entrada y salida
using namespace std;

int main() {
    // Declarar las variables para los cinco números y el número de referencia
    double num1, num2, num3, num4, num5, referencia;

    // Solicitar al usuario que ingrese el número de referencia
    cout << "Ingrese el numero de referencia: ";
    cin >> referencia;

    // Solicitar al usuario que ingrese los cinco números
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    cout << "Ingrese el cuarto numero: ";
    cin >> num4;

    cout << "Ingrese el quinto numero: ";
    cin >> num5;

    // Verificar si todos los números son mayores que el número de referencia
    if (num1 > referencia && num2 > referencia && num3 > referencia && num4 > referencia && num5 > referencia) {
        cout << "Todos los numeros son mayores que el numero de referencia." << endl;
    } else {
        cout << "No todos los numeros son mayores que el numero de referencia." << endl;
    }

    return 0;
}
