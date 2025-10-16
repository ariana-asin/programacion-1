// Materia: Programación I, Paralelo 3 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 08/10/2025 
// Número de ejercicio: 3
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
// Genera una matriz filas x columnas con 0 (seguro) o 1 (muerto viviente) aleatoriamente
vector<vector<int>> generarTerreno(int numFilas, int numColumnas) {
    vector<vector<int>> terreno(numFilas, vector<int>(numColumnas));
    srand(static_cast<unsigned>(time(nullptr)));
    for (int fila = 0; fila < numFilas; ++fila) {
        for (int col = 0; col < numColumnas; ++col) {
            terreno[fila][col] = rand() % 2;  // 0 o 1
        }
    }
    return terreno;
}
// la matriz terreno
void imprimirTerreno(const vector<vector<int>>& terreno) {
    for (const auto& fila : terreno) {
        for (int valor : fila) {
            cout << valor << ' ';
        }
        cout << '\n';
    }
}
// Cuenta cuántas filas no tienen muertos vivientes (es decir, solo 0 en toda la fila)
int contarFilasSeguras(const vector<vector<int>>& terreno) {
    int numFilas = terreno.size();
    int numColumnas = terreno.empty() ? 0 : terreno[0].size();
    int contador = 0;
    for (int fila = 0; fila < numFilas; ++fila) {
        bool tieneZombi = false;
        for (int col = 0; col < numColumnas; ++col) {
            if (terreno[fila][col] == 1) {
                tieneZombi = true;
                break;
            }
        }
        if (!tieneZombi) {
            ++contador;
        }
    }
    return contador;
}
// Cuenta cuántas columnas no tienen muertos vivientes
int contarColumnasSeguras(const vector<vector<int>>& terreno) {
    int numFilas = terreno.size();
    int numColumnas = terreno.empty() ? 0 : terreno[0].size();
    int contador = 0;
    for (int col = 0; col < numColumnas; ++col) {
        bool tieneZombi = false;
        for (int fila = 0; fila < numFilas; ++fila) {
            if (terreno[fila][col] == 1) {
                tieneZombi = true;
                break;
            }
        }
        if (!tieneZombi) {
            ++contador;
        }
    }
    return contador;
}
// Registra en vectores paralelos las posiciones de todos los muertos vivientes
void obtenerCoordenadasZombis(
    const vector<vector<int>>& terreno,
    vector<int>& filasZombi,
    vector<int>& columnasZombi)
{
    int numFilas = terreno.size();
    int numColumnas = terreno.empty() ? 0 : terreno[0].size();
    for (int fila = 0; fila < numFilas; ++fila) {
        for (int col = 0; col < numColumnas; ++col) {
            if (terreno[fila][col] == 1) {
                // Guardar coordenadas en base 1
                filasZombi.push_back(fila + 1);
                columnasZombi.push_back(col + 1);
            }
        }
    }
}
// Cuenta el número total de muertos vivientes
int contarZombisTotales(const vector<vector<int>>& terreno) {
    int total = 0;
    for (const auto& fila : terreno) {
        for (int valor : fila) {
            if (valor == 1) {
                ++total;
            }
        }
    }
    return total;
}
int main() {
    int numFilas, numColumnas;
    cout << "Ingrese cantidad de filas (n): ";
    if (!(cin >> numFilas) || numFilas <= 0) {
        cout << "n inválido.\n";
        return 1;
    }
    cout << "Ingrese cantidad de columnas (m): ";
    if (!(cin >> numColumnas) || numColumnas <= 0) {
        cout << "m inválido.\n";
        return 1;
    }
    // a) Generar y mostrar el mapa
    auto terreno = generarTerreno(numFilas, numColumnas);
    cout << "\nMapa (0 = seguro, 1 = muerto viviente):\n";
    imprimirTerreno(terreno);
    // b) Filas y columnas sin zombis
    int filasSeguras = contarFilasSeguras(terreno);
    int columnasSeguras = contarColumnasSeguras(terreno);
    cout << "\nFilas sin muertos vivientes: " << filasSeguras << '\n';
    cout << "Columnas sin muertos vivientes: " << columnasSeguras << '\n';
    // c) Coordenadas de todos los zombis (vectores paralelos)
    vector<int> filasZombi, columnasZombi;
    obtenerCoordenadasZombis(terreno, filasZombi, columnasZombi);
    cout << "\nCoordenadas de muertos vivientes (fila, columna) — índices base 1:\n";
    if (filasZombi.empty()) {
        cout << "Ninguno\n";
    } else {
        for (size_t k = 0; k < filasZombi.size(); ++k) {
            cout << "(" << filasZombi[k] << ", " << columnasZombi[k] << ") ";
        }
        cout << '\n';
    }
    // d) Cantidad total de zombis
    cout << "\nCantidad total de muertos vivientes: " << contarZombisTotales(terreno) << '\n';
    return 0;
}


