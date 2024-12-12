//Escribe un programa que solicite dos
//n�meros enteros y calcule su suma, resta,  multiplicaci�n y divisi�n.

 #include <iostream>  // Librer�a para manejo de entrada y salida
using namespace std;

int main() {
    // Declaraci�n de las variables
    int num1, num2;

    // Solicitar al usuario que ingrese dos n�meros enteros
    cout << "Ingrese el primer numero: ";
    cin >> num1;  // Leer el primer n�mero

    cout << "Ingrese el segundo numero: ";
    cin >> num2;  // Leer el segundo n�mero

    // Realizar las operaciones
    int suma = num1 + num2;        // Suma
    int resta = num1 - num2;       // Resta
    int multiplicacion = num1 * num2; // Multiplicaci�n

    // Comprobar si el segundo n�mero es distinto de cero para evitar divisi�n por cero
    if (num2 != 0) {
        double division = static_cast<double>(num1) / num2;  // Divisi�n
        cout << "La division de " << num1 << " entre " << num2 << " es: " << division << endl;
    } else {
        cout << "No se puede dividir por cero." << endl;
    }

    // Imprimir los resultados de la suma, resta y multiplicaci�n
    cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << endl;
    cout << "La resta de " << num1 << " y " << num2 << " es: " << resta << endl;
    cout << "La multiplicacion de " << num1 << " y " << num2 << " es: " << multiplicacion << endl;

    return 0;
}
