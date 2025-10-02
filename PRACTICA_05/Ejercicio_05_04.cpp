// Materia: Programación I, Paralelo 4
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 02/10/2025
// Número de ejercicio: 4
// Problema planteado:
// Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro vector
#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Ingrese la dimension de los vectores: ";
    cin >> numero;
    int vector1[numero], vector2[numero], resultado[numero];
    // Leer el primer vector
    cout << "Vector 1:" << endl;
    for(int i = 0; i < numero; i++) {
        cout  << (i+1) << ": ";
        cin >> vector1[i];
    }
    // Leer el segundo vector
    cout << "Vector 2:" << endl;
    for(int i = 0; i < numero; i++) {
        cout << (i+1) << ": ";
        cin >> vector2[i];
    }
    // Multiplicar los 2 vectores
    for(int i = 0; i < numero; i++) {
        resultado[i] = vector1[i] * vector2[i];
    }
    cout << "el resultado de la multiplicacion de los dos vectores es:" << endl;
    for(int i = 0; i < numero; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;
    return 0;
}