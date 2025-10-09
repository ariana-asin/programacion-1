// Materia: Programación I, Paralelo 1 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 7/10/25
// Número de ejercicio: 9
// Problema planteado:
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    string frase_ingresada;

    cout << "Ingrese una oración: ";
    getline(cin, frase_ingresada);

    vector<string> lista_palabras;
    string palabra_actual;

    for (char caracter : frase_ingresada) {
        if (caracter == ' ') {
            if (palabra_actual.size() > 0) {
                lista_palabras.push_back(palabra_actual);
                palabra_actual = "";
            }
        } else {
            palabra_actual += caracter;
        }
    }

    if (palabra_actual.size() > 0) {
        lista_palabras.push_back(palabra_actual);
    }

    for (int indice = lista_palabras.size() - 1; indice >= 0; indice--) {
        cout << lista_palabras[indice];
        if (indice != 0) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
