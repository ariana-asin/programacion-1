// Materia: Programación I, Paralelo 1 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 7/10/25
// Número de ejercicio: 10
// Problema planteado:
#include <iostream>
#include <string>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    string cadena_entrada;

    cout << "Ingrese una cadena: ";
    getline(cin, cadena_entrada);

    string cadena_salida;

    for (char caracter : cadena_entrada) {
        if (caracter < '0' || caracter > '9') { // Si no es un dígito
            cadena_salida += caracter;
        }
    }

    cout << "Salida: " << cadena_salida << endl;

    return 0;
}
