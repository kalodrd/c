//Crea un programa que solicite números al usuario hasta que este ingrese un número
//negativo. Al final, imprime la suma de todos los números ingresados.

#include <iostream>  // Incluir la librería para entrada y salida de datos

using namespace std;  // Usar el espacio de nombres estándar

int main() {
    int num;  // Variable para almacenar el número ingresado por el usuario
    int suma = 0;  // Variable para acumular la suma de los números ingresados

    // Paso 1: Solicitar números al usuario hasta que ingrese un número negativo
    cout << "Ingrese numeros para sumarlos. Ingrese un numero negativo para terminar." << endl;

    while (true) {
        cout << "Ingrese un numero: ";
        cin >> num;  // Leer el número ingresado por el usuario

        if (num < 0) {
            break;  // Si el número es negativo, salimos del bucle
        }

        suma += num;  // Sumar el número ingresado a la suma total
    }

    // Paso 2: Imprimir la suma total de los números ingresados
    cout << "La suma total de los numeros ingresados es: " << suma << endl;

    return 0;  // Fin del programa
}
