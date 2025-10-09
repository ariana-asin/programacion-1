// Materia: Programación I, Paralelo 1 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 10/10/25
// Número de ejercicio: 14
// Problema planteado:
#include <iostream>
#include <string>
using namespace std;
int main() {
    system("cls");
    system("chcp 65001");
    string texto_ingresado;
    int contador_a = 0;
    int contador_e = 0;
    int contador_i = 0;
    int contador_o = 0;
    int contador_u = 0;
    cout << "Ingrese una frase: ";
    getline(cin, texto_ingresado);
    for (char caracter : texto_ingresado) {
        char letra = tolower(caracter);

        switch (letra) {
            case 'a':
                contador_a++;
                break;
            case 'e':
                contador_e++;
                break;
            case 'i':
                contador_i++;
                break;
            case 'o':
                contador_o++;
                break;
            case 'u':
                contador_u++;
                break;
            default:
                break;
        }
    }
    cout << "Cantidad de vocales:" << endl;
    cout << "A: " << contador_a << endl;
    cout << "E: " << contador_e << endl;
    cout << "I: " << contador_i << endl;
    cout << "O: " << contador_o << endl;
    cout << "U: " << contador_u << endl;
    return 0;
}
