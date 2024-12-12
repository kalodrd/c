//Escribe un programa que imprima los números del 1 al 10.

 #include <iostream>  // Incluir la librería para entrada y salida de datos

using namespace std;  // Usar el espacio de nombres estándar para evitar tener que escribir std::

int main() {
    // Paso 1: Usar un bucle for para imprimir los números del 1 al 10
    for (int i = 1; i <= 10; i++) {  // Inicia en 1 y va hasta 10, incrementando de uno en uno
        cout << i << endl;  // Imprime el número actual seguido de un salto de línea
    }

    return 0;  // Fin del programa
}
