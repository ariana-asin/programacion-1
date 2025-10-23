// Materia: Programación I, Paralelo 4
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 02/10/2025
// Número de ejercicio: 5
// Problema planteado:Leer 2 vectores de dimensión N y combine ambos en otro vector.
#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Ingrese la dimension de los vectores: ";
    cin >> numero;
    int vector1[numero], vector2[numero], combinado[2*numero];
    // Leer primer vector
    cout << "Vector 1:" << endl;
    for(int i = 0; i < numero; i++) {
        cout << (i+1)<<":";
        cin >> vector1[i];
    }
    // Leer segundo vector
    cout << "Vector 2:" << endl;
    for(int i = 0; i < numero; i++) 
    {
        cout  << (i+1)<<":";
        cin >> vector2[i];
    }
    // Combinacion de vectores
    for(int i = 0; i < numero; i++) {
        combinado[i] = vector1[i];
        combinado[i + numero] = vector2[i];
    }
    cout << "Vector combinado:" << endl;
    for(int i = 0; i < 2*numero; i++) {
        cout << combinado[i] ;
    }
    cout << endl;
    return 0;
}
