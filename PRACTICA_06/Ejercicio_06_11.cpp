// Materia: Programación I, Paralelo 1 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 7/10/25
// Número de ejercicio: 11
// Problema planteado:
#include <iostream>
#include <string>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    string cadena_entrada;
    char delimitador;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena_entrada);
    cout << "Ingrese el delimitador: ";
    cin >> delimitador;
    size_t posicion = 0;
    while ((posicion = cadena_entrada.find(delimitador)) != string::npos) {
        cout << cadena_entrada.substr(0, posicion) << endl;
        cadena_entrada.erase(0, posicion + 1);
    }
    cout << cadena_entrada << endl;
    return 0;
}
