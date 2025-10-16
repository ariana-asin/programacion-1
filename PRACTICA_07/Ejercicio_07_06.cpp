// Materia: Programación I, Paralelo 3 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 09/10/2025 
// Número de ejercicio: 6
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int numFilas, numColumnas;
    cout << "Ingrese número de filas (N): ";
    if (!(cin >> numFilas) || numFilas <= 0) {
        cout << "Entrada inválida para filas.\n";
        return 1;
    }
    cout << "Ingrese número de columnas (M): ";
    if (!(cin >> numColumnas) || numColumnas <= 0) {
        cout << "Entrada inválida para columnas.\n";
        return 1;
    }
    vector<vector<int>> matriz(numFilas, vector<int>(numColumnas));
    // Semilla 
    srand((time(NULL)));
    // Llenar la matriz con valores aleatorios entre 1 y 9
    for (int fila = 0; fila < numFilas; ++fila) {
        for (int col = 0; col < numColumnas; ++col) {
            matriz[fila][col] = rand() % 9 + 1;
        }
    }
    // Mostrar la matriz original
    cout << "\nMatriz original (" << numFilas << " x " << numColumnas << "):\n";
    for (int fila = 0; fila < numFilas; ++fila) {
        for (int col = 0; col < numColumnas; ++col) {
            cout << matriz[fila][col] << '\t';
        }
        cout << '\n';
    }
    cout << "\nMatriz transpuesta (" << numColumnas << " x " << numFilas << "):\n";
    for (int col = 0; col < numColumnas; ++col) {
        for (int fila = 0; fila < numFilas; ++fila) {
            cout << matriz[fila][col] << '\t';
        }
        cout << '\n';
    }
    return 0;
}
