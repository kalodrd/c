//Escribe un programa que solicite tres n�meros y calcule su promedio. Adem�s,
//muestra la diferencia entre el n�mero mayor y el menor.

#include <iostream>  // Librer�a para manejo de entrada y salida
#include <algorithm> // Librer�a para la funci�n max() y min()

using namespace std;

int main() {
    // Declarar tres variables para los n�meros
    double num1, num2, num3;

    // Solicitar al usuario que ingrese tres n�meros
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    // Calcular el promedio de los tres n�meros
    double promedio = (num1 + num2 + num3) / 3;

    // Encontrar el n�mero mayor y el menor usando las funciones max() y min()
    double mayor = max({num1, num2, num3});  // La funci�n max encuentra el n�mero mayor
    double menor = min({num1, num2, num3});  // La funci�n min encuentra el n�mero menor

    // Calcular la diferencia entre el n�mero mayor y el menor
    double diferencia = mayor - menor;

    // Mostrar los resultados
    cout << "El promedio de los tres numeros es: " << promedio << endl;
    cout << "La diferencia entre el numero mayor y el menor es: " << diferencia << endl;

    return 0;
}
