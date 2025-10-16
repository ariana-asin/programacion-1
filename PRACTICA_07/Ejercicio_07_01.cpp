// Materia: Programación I, Paralelo 3 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 08/10/2025
// Número de ejercicio: 1 
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
int main() {
    int tamaño = 0;
    cout << "Ingrese un número entero: ";
    cin >> tamaño;
    if (tamaño <= 0) {
        cout << "El número debe ser mayor que 0";
        return 1;
    }
    const int filas = tamaño;
    const int columnas = tamaño;
    vector<vector<int>> matriz(filas, vector<int>(columnas));
    // Inicializar generador de números aleatorios
    srand(time(NULL));
    const int VALOR_MINIMO = 1;
    const int VALOR_MAXIMO = 100;
    // Llenar la matriz con números aleatorios
    for (int fila = 0; fila < filas; ++fila) {
        for (int col = 0; col < columnas; ++col) {
            matriz[fila][col] = (rand() % (VALOR_MAXIMO - VALOR_MINIMO + 1)) + VALOR_MINIMO;
        }
    }
    // Mostrar la matriz original
    cout << "\nMatriz original:\n";
    for (int fila = 0; fila < filas; ++fila) {
        for (int col = 0; col < columnas; ++col) {
            cout << matriz[fila][col] << "\t";
        }
        cout << "\n";
    }
    // Intercambiar la primera fila con la última
    if (filas > 1) {
        swap(matriz[0], matriz[filas - 1]);
    }
    cout << "Matriz luego de intercambiar la fila 1 con la fila " << filas << ":\n";
    for (int fila = 0; fila < filas; ++fila) {
        for (int col = 0; col < columnas; ++col) {
            cout << matriz[fila][col] << "\t";
        }
        cout << "\n";
    }
    return 0;
}


