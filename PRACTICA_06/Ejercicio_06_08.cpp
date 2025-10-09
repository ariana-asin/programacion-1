// Materia: Programación I, Paralelo 1 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 7/10/25
// Número de ejercicio: 8
// Problema planteado:
#include <iostream>
#include <string>
using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    string direccion_correo;
    int conteo_arroba = 0;
    int conteo_punto = 0;

    cout << "Ingrese una dirección de correo electrónico: ";
    cin >> direccion_correo;

    for (size_t pos = 0; pos < direccion_correo.length(); pos++) {
        if (direccion_correo[pos] == '@') {
            conteo_arroba++;
        }
        if (conteo_arroba == 1 && direccion_correo[pos] == '.') {
            conteo_punto++;
        }
    }

    if (conteo_arroba == 1 && conteo_punto >= 1) {
        cout << "Correo electrónico válido" << endl;
    } else {
        cout << "Correo electrónico inválido" << endl;
    }

    return 0;
}
