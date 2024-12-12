//Crea un programa que solicite un n�mero del 1 al 7 y use switch para imprimir
//el d�a de  la semana correspondiente (por ejemplo, 1 = Lunes).

#include <iostream>  // Incluir la librer�a para entrada y salida de datos

using namespace std;  // Usar el espacio de nombres est�ndar para evitar escribir std:: antes de cada funci�n

int main() {
    // Paso 1: Declarar una variable para almacenar el n�mero ingresado por el usuario
    int dia;

    // Paso 2: Solicitar al usuario que ingrese un n�mero del 1 al 7
    cout << "Ingrese un numero del 1 al 7 para conocer el dia de la semana: ";  // Imprime un mensaje
    cin >> dia;  // Lee el n�mero ingresado por el usuario y lo guarda en la variable "dia"

    // Paso 3: Usar la estructura switch para evaluar el n�mero
    switch (dia) {
        case 1:
            cout << "Lunes" << endl;  // Si el n�mero es 1, imprime "Lunes"
            break;
        case 2:
            cout << "Martes" << endl;  // Si el n�mero es 2, imprime "Martes"
            break;
        case 3:
            cout << "Miercoles" << endl;  // Si el n�mero es 3, imprime "Miercoles"
            break;
        case 4:
            cout << "Jueves" << endl;  // Si el n�mero es 4, imprime "Jueves"
            break;
        case 5:
            cout << "Viernes" << endl;  // Si el n�mero es 5, imprime "Viernes"
            break;
        case 6:
            cout << "Sabado" << endl;  // Si el n�mero es 6, imprime "Sabado"
            break;
        case 7:
            cout << "Domingo" << endl;  // Si el n�mero es 7, imprime "Domingo"
            break;
        default:
            // Si el n�mero no est� entre 1 y 7, muestra un mensaje de error
            cout << "Numero invalido. Ingrese un numero entre 1 y 7." << endl;
            break;
    }

    return 0;  // Fin del programa
}
