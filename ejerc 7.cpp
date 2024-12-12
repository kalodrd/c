//Escribe un programa que solicite un número e imprima si es positivo, negativo
//o cero  usando if-else

#include <iostream>  // Incluir la librería para manejar la entrada y salida de datos

using namespace std;  // Usar el espacio de nombres estándar para evitar escribir std:: antes de cada función

int main() {
    // Paso 1: Declarar una variable para almacenar el número ingresado por el usuario
    int numero;

    // Paso 2: Solicitar al usuario que ingrese un número
    cout << "Ingrese un numero: ";  // Imprime un mensaje en pantalla
    cin >> numero;  // Lee el número ingresado por el usuario y lo guarda en la variable "numero"

    // Paso 3: Usar la estructura if-else para determinar si el número es positivo, negativo o cero
    if (numero > 0) {
        // Si el número es mayor que 0, es positivo
        cout << "El numero es positivo." << endl;
    } else if (numero < 0) {
        // Si el número es menor que 0, es negativo
        cout << "El numero es negativo." << endl;
    } else {
        // Si el número no es ni mayor ni menor que 0, entonces es cero
        cout << "El numero es cero." << endl;
    }

    return 0;  // Fin del programa
}
