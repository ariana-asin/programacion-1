// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 10/11/2025 
// Número de ejercicio: 8
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void MenuOpciones( string &archivo);
void ContarLineasPalabrasCaracteres( string &archivo);

int main() {
     string nombreArchivo = "documento.txt";
    MenuOpciones(nombreArchivo);
    return 0;
}

void MenuOpciones( string &archivo) {
    int opcion = 0;
    do {
        system("cls");
        cout << "MENU DE OPCIONES" << endl;
        cout << "================" << endl;
        cout << "\t1. Contar líneas, palabras y caracteres" << endl;
        cout << "\t0. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                ContarLineasPalabrasCaracteres(archivo);
                break;
            case 0:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente de nuevo." << endl;
                system("pause");
                break;
        }
    } while (opcion != 0);
}

void ContarLineasPalabrasCaracteres(string &archivo) {
    ifstream fin(archivo);
    if (!fin) {
        cout << "No se pudo abrir el archivo \"" << archivo << "\" para lectura." << endl;
        system("pause");
        return;
    }

    int lineas = 0;
    int palabras = 0;
    int caracteres = 0;
    string linea;

    while (getline(fin, linea)) {
        lineas++;
        caracteres += (int)linea.length() + 1;  
        bool enPalabra = false;
        for (char c : linea) {
            if (isspace(static_cast<unsigned char>(c))) {
                if (enPalabra) {
                    palabras++;
                    enPalabra = false;
                }
            } else {
                enPalabra = true;
            }
        }
        if (enPalabra) {
            palabras++;
        }
    }

    fin.close();

    cout << "Total de líneas     : " << lineas << endl;
    cout << "Total de palabras   : " << palabras << endl;
    cout << "Total de caracteres : " << caracteres << endl;

    system("pause");
}
