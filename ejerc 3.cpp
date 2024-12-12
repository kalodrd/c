//Escribe un programa que solicite tres números y calcule su promedio. Además,
//muestra la diferencia entre el número mayor y el menor.

#include <iostream>  // Librería para manejo de entrada y salida
#include <algorithm> // Librería para la función max() y min()

using namespace std;

int main() {
    // Declarar tres variables para los números
    double num1, num2, num3;

    // Solicitar al usuario que ingrese tres números
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    // Calcular el promedio de los tres números
    double promedio = (num1 + num2 + num3) / 3;

    // Encontrar el número mayor y el menor usando las funciones max() y min()
    double mayor = max({num1, num2, num3});  // La función max encuentra el número mayor
    double menor = min({num1, num2, num3});  // La función min encuentra el número menor

    // Calcular la diferencia entre el número mayor y el menor
    double diferencia = mayor - menor;

    // Mostrar los resultados
    cout << "El promedio de los tres numeros es: " << promedio << endl;
    cout << "La diferencia entre el numero mayor y el menor es: " << diferencia << endl;

    return 0;
}
