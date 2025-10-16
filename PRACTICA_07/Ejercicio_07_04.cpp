// Materia: Programación I, Paralelo 3 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 08/10/2025 
// Número de ejercicio: 4
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> generarMatriz(int n) {
    vector<vector<int>> matriz(n, vector<int>(n));
    for (int fila = 0; fila < n; ++fila) {
        for (int col = 0; col < n; ++col) {
            matriz[fila][col] = 2 * fila + 1 + col;
        }
    }
    return matriz;
}
 //Imprime una matriz en la consola.
void imprimirMatriz(const vector<vector<int>>& matriz) {
    int n = matriz.size();
    for (int fila = 0; fila < n; ++fila) {
        for (int col = 0; col < n; ++col) {
            cout << matriz[fila][col] << '\t';
        }
        cout << '\n';
    }
}
int main() {
    int orden;
    cout << "Ingrese el orden (n) de la matriz (ej: 5): ";
    if (!(cin >> orden) || orden <= 0) {
        cout << "Entrada inválida. n debe ser un entero mayor que 0.\n";
        return 1;
    }
    vector<vector<int>> matriz = generarMatriz(orden);
    cout << "Matriz generada (n = " << orden << "):\n";
    imprimirMatriz(matriz);
    return 0;
}
