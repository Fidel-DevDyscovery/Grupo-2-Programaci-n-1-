#include <iostream>

using namespace std;

// Procedimiento para calcular la suma de impares, pares y múltiplos de 3
void calcularSumaImparesParesMultiplos(int n) {
    int x = 0;
    int z = 0;
    int impares = 0;
    int pares = 0;
    int multiplo = 0;

    while (x < n) {
        cout << "Introduzca un número: ";
        cin >> z;

        // Sumar pares e impares
        if (z % 2 == 0) {
            pares += z;
        } else {
            impares += z;
            x++;
        }

        // Sumar múltiplos de 3
        if (z % 3 == 0) {
            multiplo += z;
        }
    }

    // Imprimir resultados
    cout << "La suma de los pares es: " << pares << endl;
    cout << "La suma de los impares es: " << impares << endl;
    cout << "La suma de los múltiplos de 3 es: " << multiplo << endl;
}

int main() {
    int n;
    cout << "Ingrese un valor para n: ";
    cin >> n;

    // Llamada al procedimiento
    calcularSumaImparesParesMultiplos(n);

    return 0;
}
