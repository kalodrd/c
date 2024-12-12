//Escribe un programa que solicite dos n�meros y determine cu�l es mayor o si son
//iguales

#include <iostream>  // Librer�a para manejo de entrada y salida
using namespace std;

int main() {
    // Declarar las variables para los dos n�meros
    double num1, num2;

    // Solicitar al usuario que ingrese dos n�meros
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Comparar los dos n�meros y determinar cu�l es mayor o si son iguales
    if (num1 > num2) {
        cout << "El primer numero (" << num1 << ") es mayor que el segundo numero (" << num2 << ")." << endl;
    } else if (num1 < num2) {
        cout << "El segundo numero (" << num2 << ") es mayor que el primer numero (" << num1 << ")." << endl;
    } else {
        cout << "Los dos numeros son iguales." << endl;
    }

    return 0;
}
