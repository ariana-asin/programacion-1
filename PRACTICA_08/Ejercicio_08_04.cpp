// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 21/10/2025 
// Número de ejercicio: 4
#include <iostream>
using namespace std;
// Función recursiva para calcular el MCD de a y b
int mcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mcd(b, a % b);
    }
}
int main() {
    int x;
    int y;
    cout << "Introduce dos números enteros positivos (a y b): ";
    cin >> x;
    cin >> y;
    if (x < 0 || y < 0) {
        cout << "Por favor, introduce números positivos." << endl;
        return 1;
    }
    int resultado = mcd(x, y);
    cout << "El máximo común divisor de " << x << " y " << y << " es: " << resultado << endl;
    return 0;
}
