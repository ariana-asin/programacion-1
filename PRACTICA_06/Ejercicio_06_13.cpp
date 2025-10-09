// Materia: Programación I, Paralelo 1 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 10/10/25
// Número de ejercicio: 13
// Problema planteado:
#include <iostream>
#include <string>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    string texto_ingresado;
    string texto_resultado;
    cout << "Ingrese un texto: ";
    getline(cin, texto_ingresado);
    int estado = 1;
    for (char caracter : texto_ingresado) {
        if (caracter == ' ') {
            texto_resultado += caracter;
            estado = 1;
        } else {
            if (estado == 1) {
                if (caracter >= 'a' && caracter <= 'z') {
                    caracter = caracter - ('a' - 'A');
                }
                estado = 0;
            }
            texto_resultado += caracter;
        }
    }
    cout << "Texto capitalizado: " << texto_resultado << endl;
    return 0;
}
