//Escribe un programa que solicite dos
//números enteros y calcule su suma, resta,  multiplicación y división.

 #include <iostream>  // Librería para manejo de entrada y salida
using namespace std;

int main() {
    // Declaración de las variables
    int num1, num2;

    // Solicitar al usuario que ingrese dos números enteros
    cout << "Ingrese el primer numero: ";
    cin >> num1;  // Leer el primer número

    cout << "Ingrese el segundo numero: ";
    cin >> num2;  // Leer el segundo número

    // Realizar las operaciones
    int suma = num1 + num2;        // Suma
    int resta = num1 - num2;       // Resta
    int multiplicacion = num1 * num2; // Multiplicación

    // Comprobar si el segundo número es distinto de cero para evitar división por cero
    if (num2 != 0) {
        double division = static_cast<double>(num1) / num2;  // División
        cout << "La division de " << num1 << " entre " << num2 << " es: " << division << endl;
    } else {
        cout << "No se puede dividir por cero." << endl;
    }

    // Imprimir los resultados de la suma, resta y multiplicación
    cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << endl;
    cout << "La resta de " << num1 << " y " << num2 << " es: " << resta << endl;
    cout << "La multiplicacion de " << num1 << " y " << num2 << " es: " << multiplicacion << endl;

    return 0;
}
