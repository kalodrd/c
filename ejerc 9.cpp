//Escribe un programa que simule un men� de operaciones matem�ticas. El usuario
//elige  una operaci�n (suma, resta, multiplicaci�n, divisi�n) mediante un n�mero,
//luego  ingresa dos n�meros y el programa realiza la operaci�n seleccionada usando
//switch.

#include <iostream>  // Incluir la librer�a para entrada y salida de datos

using namespace std;  // Usar el espacio de nombres est�ndar

int main() {
    // Paso 1: Declarar variables para almacenar la elecci�n de la operaci�n y los n�meros
    int operacion;
    double num1, num2, resultado;

    // Paso 2: Mostrar el men� de operaciones
    cout << "Seleccione una operacion:\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Division\n";
    cout << "Ingrese el numero de la operacion que desea realizar: ";
    cin >> operacion;  // Leer la elecci�n de operaci�n

    // Paso 3: Solicitar al usuario los dos n�meros
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Paso 4: Usar switch para determinar la operaci�n seleccionada
    switch (operacion) {
        case 1:  // Si la operaci�n es 1, realizar la suma
            resultado = num1 + num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case 2:  // Si la operaci�n es 2, realizar la resta
            resultado = num1 - num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case 3:  // Si la operaci�n es 3, realizar la multiplicaci�n
            resultado = num1 * num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case 4:  // Si la operaci�n es 4, realizar la divisi�n
            if (num2 != 0) {  // Verificar que el divisor no sea cero
                resultado = num1 / num2;
                cout << "Resultado: " << resultado << endl;
            } else {
                cout << "Error: No se puede dividir por cero." << endl;  // Si el divisor es cero, mostrar un error
            }
            break;

        default:  // Si la opci�n no es v�lida, mostrar un mensaje de error
            cout << "Operacion invalida. Por favor ingrese un numero entre 1 y 4." << endl;
            break;
    }

    return 0;  // Fin del programa
}
