//Crea un programa que solicite un número del 1 al 7 y use switch para imprimir
//el día de  la semana correspondiente (por ejemplo, 1 = Lunes).

#include <iostream>  // Incluir la librería para entrada y salida de datos

using namespace std;  // Usar el espacio de nombres estándar para evitar escribir std:: antes de cada función

int main() {
    // Paso 1: Declarar una variable para almacenar el número ingresado por el usuario
    int dia;

    // Paso 2: Solicitar al usuario que ingrese un número del 1 al 7
    cout << "Ingrese un numero del 1 al 7 para conocer el dia de la semana: ";  // Imprime un mensaje
    cin >> dia;  // Lee el número ingresado por el usuario y lo guarda en la variable "dia"

    // Paso 3: Usar la estructura switch para evaluar el número
    switch (dia) {
        case 1:
            cout << "Lunes" << endl;  // Si el número es 1, imprime "Lunes"
            break;
        case 2:
            cout << "Martes" << endl;  // Si el número es 2, imprime "Martes"
            break;
        case 3:
            cout << "Miercoles" << endl;  // Si el número es 3, imprime "Miercoles"
            break;
        case 4:
            cout << "Jueves" << endl;  // Si el número es 4, imprime "Jueves"
            break;
        case 5:
            cout << "Viernes" << endl;  // Si el número es 5, imprime "Viernes"
            break;
        case 6:
            cout << "Sabado" << endl;  // Si el número es 6, imprime "Sabado"
            break;
        case 7:
            cout << "Domingo" << endl;  // Si el número es 7, imprime "Domingo"
            break;
        default:
            // Si el número no está entre 1 y 7, muestra un mensaje de error
            cout << "Numero invalido. Ingrese un numero entre 1 y 7." << endl;
            break;
    }

    return 0;  // Fin del programa
}
