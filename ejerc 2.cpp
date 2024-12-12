//Crea un programa que solicite el radio de un círculo y calcule su área y
//circunferencia  usando las fórmulas:
//• Área = π × radio²
//• Circunferencia = 2 × π × radio.
//Usa 3.1416 como valor de π.

#include <iostream>  // Librería para manejo de entrada y salida
using namespace std;

int main() {
    // Declarar la variable para el radio y las constantes para los cálculos
    double radio;
    const double PI = 3.1416;  // Valor de pi

    // Solicitar al usuario que ingrese el radio del círculo
    cout << "Ingresa el radio del circulo: ";
    cin >> radio;  // Leer el radio ingresado por el usuario

    // Calcular el área y la circunferencia usando las fórmulas dadas
    double area = PI * radio * radio;  // Fórmula para el área: A = π * radio²
    double circunferencia = 2 * PI * radio;  // Fórmula para la circunferencia: C = 2 * π * radio

    // Mostrar los resultados
    cout << "El area del circulo es: " << area << endl;
    cout << "La circunferencia del circulo es: " << circunferencia << endl;

    return 0;
}
