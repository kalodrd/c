//Escribe un programa que muestre un menú con las opciones:
//1. Calcular el cuadrado de un número.
//2. Calcular el cubo de un número.
//3. Salir.
//El programa debe ejecutarse hasta que el usuario elija salir.

#include <iostream>  // Incluir la librería para entrada y salida de datos

using namespace std;  // Usar el espacio de nombres estándar

int main() {
    int opcion;  // Variable para almacenar la opción seleccionada por el usuario
    double numero, resultado;  // Variable para el número ingresado y el resultado

    // Paso 1: Bucle que ejecuta el menú hasta que el usuario elija salir
    do {
        // Mostrar el menú de opciones
        cout << "Seleccione una opcion:\n";
        cout << "1. Calcular el cuadrado de un numero\n";
        cout << "2. Calcular el cubo de un numero\n";
        cout << "3. Salir\n";
        cout << "Ingrese el numero de la opcion que desea seleccionar: ";
        cin >> opcion;  // Leer la opción elegida por el usuario

        switch (opcion) {
            case 1:  // Si la opción es 1, calcular el cuadrado
                cout << "Ingrese un numero: ";
                cin >> numero;  // Leer el número
                resultado = numero * numero;  // Calcular el cuadrado
                cout << "El cuadrado de " << numero << " es: " << resultado << endl;
                break;

            case 2:  // Si la opción es 2, calcular el cubo
                cout << "Ingrese un numero: ";
                cin >> numero;  // Leer el número
                resultado = numero * numero * numero;  // Calcular el cubo
                cout << "El cubo de " << numero << " es: " << resultado << endl;
                break;

            case 3:  // Si la opción es 3, salir del programa
                cout << "Saliendo del programa.  Hasta luego!" << endl;
                break;

            default:  // Si la opción es inválida, mostrar un mensaje de error
                cout << "Opcion no valida. Por favor seleccione una opcion entre 1 y 3." << endl;
                break;
        }

    } while (opcion != 3);  // El bucle continúa hasta que el usuario elige la opción 3 (Salir)

    return 0;  // Fin del programa
}
