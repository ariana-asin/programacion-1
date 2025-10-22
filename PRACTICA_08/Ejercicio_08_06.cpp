// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 22/10/2025 
// Número de ejercicio: 6
#include <iostream>
#include <vector>
using namespace std;
// Función recursiva para comparar dos vectores
int compararVectores(vector<int> v1, vector<int> v2, int indice) {
    if (indice == v1.size()) {
        if (v1.size() == v2.size()) {
            return 1;
        } else {
            return 0; 
        }
    }
    if (v1[indice] != v2[indice]) {
        return 0; 
    }
    return compararVectores(v1, v2, indice + 1); 
}
int main() {
    int n;
    cout << "ingrese la cantidad de elementos en los vectores ";
    cin >> n;
    vector<int> vec1(n);
    vector<int>vec2(n);
    cout << "Introduce los elementos del primer vector:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vec1[i];
    }
    cout << "Introduce los elementos del segundo vector:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vec2[i];
    }
    if (compararVectores(vec1, vec2, 0) == 1) {
        cout << "Los vectores son iguales." << endl;
    } else {
        cout << "Los vectores no son iguales." << endl;
    }
    return 0;
}
