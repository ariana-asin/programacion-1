// Materia: Programación I, Paralelo 1 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 10/10/25
// Número de ejercicio: 12
// Problema planteado:
#include <iostream>
#include <string>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    string texto_ingresado;
    string texto_limpio;

    cout << "Ingrese un texto: ";
    getline(cin, texto_ingresado);

    for (char caracter : texto_ingresado) {
        if ((caracter >= 'A' && caracter <= 'Z') || (caracter >= 'a' && caracter <= 'z')) {
            if (caracter >= 'A' && caracter <= 'Z') {
                caracter = caracter + ('a' - 'A');
            }
            texto_limpio += caracter;
        }
    }

    string texto_reverso;
    for (int i = texto_limpio.size() - 1; i >= 0; i--) {
        texto_reverso += texto_limpio[i];
    }

    if (texto_limpio == texto_reverso) {
        cout << "Es un palíndromo." << endl;
    } else {
        cout << "No es un palíndromo." << endl;
    }

    return 0;
}
