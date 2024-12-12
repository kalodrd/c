//Escribe un programa que simule un menú de operaciones matemáticas. El usuario
//elige  una operación (suma, resta, multiplicación, división) mediante un número,
//luego  ingresa dos números y el programa realiza la operación seleccionada usando
//switch.

#include <iostream>  // Incluir la librería para entrada y salida de datos

using namespace std;  // Usar el espacio de nombres estándar

int main() {
    // Paso 1: Declarar variables para almacenar la elección de la operación y los números
    int operacion;
    double num1, num2, resultado;

    // Paso 2: Mostrar el menú de operaciones
    cout << "Seleccione una operacion:\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Division\n";
    cout << "Ingrese el numero de la operacion que desea realizar: ";
    cin >> operacion;  // Leer la elección de operación

    // Paso 3: Solicitar al usuario los dos números
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Paso 4: Usar switch para determinar la operación seleccionada
    switch (operacion) {
        case 1:  // Si la operación es 1, realizar la suma
            resultado = num1 + num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case 2:  // Si la operación es 2, realizar la resta
            resultado = num1 - num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case 3:  // Si la operación es 3, realizar la multiplicación
            resultado = num1 * num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case 4:  // Si la operación es 4, realizar la división
            if (num2 != 0) {  // Verificar que el divisor no sea cero
                resultado = num1 / num2;
                cout << "Resultado: " << resultado << endl;
            } else {
                cout << "Error: No se puede dividir por cero." << endl;  // Si el divisor es cero, mostrar un error
            }
            break;

        default:  // Si la opción no es válida, mostrar un mensaje de error
            cout << "Operacion invalida. Por favor ingrese un numero entre 1 y 4." << endl;
            break;
    }

    return 0;  // Fin del programa
}
