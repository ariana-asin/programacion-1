// Materia: Programación I, Paralelo 3 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 09/10/2025 
// Número de ejercicio: 5
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
// Genera una matriz de tamaño filas × columnas con valores aleatorios entre 1 y 9
vector<vector<int>> generarMatrizAleatoria(int filas, int columnas) {
    vector<vector<int>> mat(filas, vector<int>(columnas));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            mat[i][j] = rand() % 9 + 1;
        }
    }
    return mat;
}
// Imprime una matriz
template <typename T>
void imprimirMatriz(const vector<vector<T>>& mat, const string& titulo = "") {
    if (!titulo.empty()) {
        cout << titulo << "\n";
    }
    for (const auto& fila : mat) {
        for (const auto& elemento : fila) {
            cout << elemento << '\t';
        }
        cout << '\n';
    }
}
vector<vector<long long>> multiplicarMatriz(
    const vector<vector<int>>& A,
    const vector<vector<int>>& B)
{
    int filasA = A.size();
    int colsA = A.empty() ? 0 : A[0].size();
    int filasB = B.size();
    int colsB = B.empty() ? 0 : B[0].size();
    if (colsA != filasB) {
        throw runtime_error("Dimensiones incompatibles para multiplicar matrices");
    }

    vector<vector<long long>> C(filasA, vector<long long>(colsB, 0LL));
    for (int i = 0; i < filasA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            long long suma = 0;
            for (int k = 0; k < colsA; ++k) {
                suma += (long long) A[i][k] * B[k][j];
            }
            C[i][j] = suma;
        }
    }
    return C;
}
int main() {
    int numFilasA, numColsA;  // Para A: filas y columnas (y filas de B)
    cout << "Ingrese N (filas de A / filas de resultado): ";
    if (!(cin >> numFilasA) || numFilasA <= 0) {
        cout << "Entrada inválida para N.\n";
        return 1;
    }
    cout << "Ingrese M (columnas de A / filas de B): ";
    if (!(cin >> numColsA) || numColsA <= 0) {
        cout << "Entrada inválida para M.\n";
        return 1;
    }
    // Inicializar semilla aleatoria
    srand((time(NULL)));
    // Generar matrices A y B
    auto A = generarMatrizAleatoria(numFilasA, numColsA);
    auto B = generarMatrizAleatoria(numColsA, numFilasA);
    // Calcular C = A × B
    vector<vector<long long>> C;
    try {
        C = multiplicarMatriz(A, B);
    } catch (const exception& ex) {
        cout << "Error al multiplicar matrices: " << ex.what() << '\n';
        return 1;
    }
    // Mostrar matrices
    imprimirMatriz(A, "\nMatriz A (" + to_string(numFilasA) + " x " + to_string(numColsA) + "):");
    imprimirMatriz(B, "\nMatriz B (" + to_string(numColsA) + " x " + to_string(numFilasA) + "):");
    imprimirMatriz(C, "\nMatriz C = A * B (" + to_string(numFilasA) + " x " + to_string(numFilasA) + "):");
    return 0;
}
