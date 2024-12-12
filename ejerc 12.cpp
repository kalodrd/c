//Escribe un programa que muestre un men� con las opciones:
//1. Calcular el cuadrado de un n�mero.
//2. Calcular el cubo de un n�mero.
//3. Salir.
//El programa debe ejecutarse hasta que el usuario elija salir.

#include <iostream>  // Incluir la librer�a para entrada y salida de datos

using namespace std;  // Usar el espacio de nombres est�ndar

int main() {
    int opcion;  // Variable para almacenar la opci�n seleccionada por el usuario
    double numero, resultado;  // Variable para el n�mero ingresado y el resultado

    // Paso 1: Bucle que ejecuta el men� hasta que el usuario elija salir
    do {
        // Mostrar el men� de opciones
        cout << "Seleccione una opcion:\n";
        cout << "1. Calcular el cuadrado de un numero\n";
        cout << "2. Calcular el cubo de un numero\n";
        cout << "3. Salir\n";
        cout << "Ingrese el numero de la opcion que desea seleccionar: ";
        cin >> opcion;  // Leer la opci�n elegida por el usuario

        switch (opcion) {
            case 1:  // Si la opci�n es 1, calcular el cuadrado
                cout << "Ingrese un numero: ";
                cin >> numero;  // Leer el n�mero
                resultado = numero * numero;  // Calcular el cuadrado
                cout << "El cuadrado de " << numero << " es: " << resultado << endl;
                break;

            case 2:  // Si la opci�n es 2, calcular el cubo
                cout << "Ingrese un numero: ";
                cin >> numero;  // Leer el n�mero
                resultado = numero * numero * numero;  // Calcular el cubo
                cout << "El cubo de " << numero << " es: " << resultado << endl;
                break;

            case 3:  // Si la opci�n es 3, salir del programa
                cout << "Saliendo del programa.  Hasta luego!" << endl;
                break;

            default:  // Si la opci�n es inv�lida, mostrar un mensaje de error
                cout << "Opcion no valida. Por favor seleccione una opcion entre 1 y 3." << endl;
                break;
        }

    } while (opcion != 3);  // El bucle contin�a hasta que el usuario elige la opci�n 3 (Salir)

    return 0;  // Fin del programa
}
