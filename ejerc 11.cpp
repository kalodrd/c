//Crea un programa que solicite n�meros al usuario hasta que este ingrese un n�mero
//negativo. Al final, imprime la suma de todos los n�meros ingresados.

#include <iostream>  // Incluir la librer�a para entrada y salida de datos

using namespace std;  // Usar el espacio de nombres est�ndar

int main() {
    int num;  // Variable para almacenar el n�mero ingresado por el usuario
    int suma = 0;  // Variable para acumular la suma de los n�meros ingresados

    // Paso 1: Solicitar n�meros al usuario hasta que ingrese un n�mero negativo
    cout << "Ingrese numeros para sumarlos. Ingrese un numero negativo para terminar." << endl;

    while (true) {
        cout << "Ingrese un numero: ";
        cin >> num;  // Leer el n�mero ingresado por el usuario

        if (num < 0) {
            break;  // Si el n�mero es negativo, salimos del bucle
        }

        suma += num;  // Sumar el n�mero ingresado a la suma total
    }

    // Paso 2: Imprimir la suma total de los n�meros ingresados
    cout << "La suma total de los numeros ingresados es: " << suma << endl;

    return 0;  // Fin del programa
}
