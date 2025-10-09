// Materia: Programación I, Paralelo 1 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 5/10/25
// Número de ejercicio: 4
// Problema planteado:
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    system("cls");
    system("chcp 65001");
    int cantidad_elementos, desplazamiento;
    cout << "Ingrese el número de elementos en el vector: ";
    cin >> cantidad_elementos;
    vector<int> lista_numeros(cantidad_elementos);
    cout << "Ingrese " << cantidad_elementos << " números:" << endl;
    for (int indice = 0; indice < cantidad_elementos; indice++) {
        cin >> lista_numeros[indice];
    }
    cout << "Ingrese el número de posiciones a rotar a la derecha: ";
    cin >> desplazamiento;
    desplazamiento = desplazamiento % cantidad_elementos;
    vector<int> lista_rotada(cantidad_elementos);
    for (int indice = 0; indice < cantidad_elementos; indice++) {
        lista_rotada[(indice + desplazamiento) % cantidad_elementos] = lista_numeros[indice];
    }
    cout << "Vector después de rotar " << desplazamiento << " posiciones a la derecha:" << endl;
    for (int valor : lista_rotada) {
        cout << valor << " ";
    }
    cout << endl;
    return 0;
}
