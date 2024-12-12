//Escribe un programa que solicite un n�mero e imprima si es positivo, negativo
//o cero  usando if-else

#include <iostream>  // Incluir la librer�a para manejar la entrada y salida de datos

using namespace std;  // Usar el espacio de nombres est�ndar para evitar escribir std:: antes de cada funci�n

int main() {
    // Paso 1: Declarar una variable para almacenar el n�mero ingresado por el usuario
    int numero;

    // Paso 2: Solicitar al usuario que ingrese un n�mero
    cout << "Ingrese un numero: ";  // Imprime un mensaje en pantalla
    cin >> numero;  // Lee el n�mero ingresado por el usuario y lo guarda en la variable "numero"

    // Paso 3: Usar la estructura if-else para determinar si el n�mero es positivo, negativo o cero
    if (numero > 0) {
        // Si el n�mero es mayor que 0, es positivo
        cout << "El numero es positivo." << endl;
    } else if (numero < 0) {
        // Si el n�mero es menor que 0, es negativo
        cout << "El numero es negativo." << endl;
    } else {
        // Si el n�mero no es ni mayor ni menor que 0, entonces es cero
        cout << "El numero es cero." << endl;
    }

    return 0;  // Fin del programa
}
