// Materia: Programación I, Paralelo 3 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 08/10/2025 
// Número de ejercicio: 2
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    int dimension;
    cout << "Ingrese el tamaño N de la matriz (N x N): ";
    if (!(cin >> dimension) || dimension <= 0) {
        cout << "Dimensión inválida. Debe ser entero > 0.\n";
        return 1;
    }
    int valorMin, valorMax;
    cout << "Ingrese el valor mínimo (A): ";
    if (!(cin >> valorMin)) {
        cout << "Entrada inválida para el mínimo.\n";
        return 1;
    }
    cout << "Ingrese el valor máximo (B): ";
    if (!(cin >> valorMax)) {
        cout << "Entrada inválida para el máximo.\n";
        return 1;
    }
    if (valorMin > valorMax) {
        cout << "El valor mínimo debe ser menor o igual al máximo.\n";
        return 1;
    }
    vector<vector<int>> matriz(dimension, vector<int>(dimension));
    // Inicializar generador de números aleatorios
    srand((time(NULL)));
    // Llenar matriz con valores aleatorios entre valorMin y valorMax (inclusive)
    for (int fila = 0; fila < dimension; ++fila) {
        for (int col = 0; col < dimension; ++col) {
            matriz[fila][col] = (rand() % (valorMax - valorMin + 1)) + valorMin;
        }
    }
    cout << "\nMatriz (" << dimension << " x " << dimension << "):\n";
    for (int fila = 0; fila < dimension; ++fila) {
        for (int col = 0; col < dimension; ++col) {
            cout << matriz[fila][col] << "\t";
        }
        cout << "\n";
    }
    // 1) Suma de los elementos de la última columna 
    long long sumaUltimaColumna = 0;
    for (int fila = 0; fila < dimension; ++fila) {
        sumaUltimaColumna += matriz[fila][dimension - 1];
    }
    // 2) Producto de los elementos de la última fila 
    long double productoUltimaFila = 1.0L;
    for (int col = 0; col < dimension; ++col) {
        productoUltimaFila *= (long double) matriz[dimension - 1][col];
    }
    // 3) Encontrar el mayor valor y su posición
    int valorMaximoEncontrado = matriz[0][0];
    int filaMax = 0, colMax = 0;
    for (int fila = 0; fila < dimension; ++fila) {
        for (int col = 0; col < dimension; ++col) {
            if (matriz[fila][col] > valorMaximoEncontrado) {
                valorMaximoEncontrado = matriz[fila][col];
                filaMax = fila;
                colMax = col;
            }
        }
    }
    // 4) Calcular la desviación estándar poblacional de todos los elementos
    double sumaValores = 0;
    for (int fila = 0; fila < dimension; ++fila) {
        for (int col = 0; col < dimension; ++col) {
            sumaValores += matriz[fila][col];
        }
    }
    double media = sumaValores / (dimension * dimension);
    double sumaCuadradosDiferencias = 0.0;
    for (int fila = 0; fila < dimension; ++fila) {
        for (int col = 0; col < dimension; ++col) {
            double diff = matriz[fila][col] - media;
            sumaCuadradosDiferencias += diff * diff;
        }
    }
    double varianza = sumaCuadradosDiferencias / (dimension * dimension);
    double desviacionEstandar = sqrt(varianza);
    cout << "\nResultados:\n";
    cout << "Suma de la última columna: " << sumaUltimaColumna << "\n";
    // Convertir producto a entero redondeado
    long long productoRedondeado = llround(productoUltimaFila);
    cout << "Producto de la última fila (redondeado): " << productoRedondeado << "\n";
    cout << "Máximo valor: " << valorMaximoEncontrado
         << " en posición (fila, columna) = (" << filaMax + 1 << ", " << colMax + 1 << ")\n";
    cout << "Desviación estándar poblacional de todos los elementos: " << desviacionEstandar << "\n";
    return 0;
}
