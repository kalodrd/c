 //Crea un programa que solicite tres n�meros y determine si est�n en orden
  //ascendente,  descendente o desordenados

 #include <iostream>  // Librer�a para manejo de entrada y salida
using namespace std;

int main() {
    // Declarar tres variables para los tres n�meros
    double num1, num2, num3;

    // Solicitar al usuario que ingrese tres n�meros
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    // Comparar los tres n�meros para determinar si est�n en orden ascendente, descendente o desordenados
    if (num1 < num2 && num2 < num3) {
        cout << "Los numeros estan en orden ascendente." << endl;
    } else if (num1 > num2 && num2 > num3) {
        cout << "Los numeros estan en orden descendente." << endl;
    } else {
        cout << "Los numeros estan desordenados." << endl;
    }

    return 0;
}
