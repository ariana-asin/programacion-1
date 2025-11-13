// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 10/11/2025 
// Número de ejercicio: 6
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Declaración de funciones
void MenuOpciones(const string &archivo);
void FiltrarTemperaturas(const string &archivo);

int main() {
    const string nombreArchivo = "temperaturas.txt";
    MenuOpciones(nombreArchivo);
    return 0;
}

void MenuOpciones(const string &archivo) {
    int opcion = 0;
    do {
        system("cls");
        cout << "MENU DE OPCIONES" << endl;
        cout << "================" << endl;
        cout << "\t1. Filtrar ciudades con altas temperaturas" << endl;
        cout << "\t0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                FiltrarTemperaturas(archivo);
                break;
            case 0:
                // Salir
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
                system("pause");
                break;
        }

    } while (opcion != 0);
}

void FiltrarTemperaturas(const string &archivo) {
    double umbral;
    cout << "Ingrese el valor de temperatura umbral (°C): ";
    cin >> umbral;

    ifstream archivoIn(archivo);
    if (!archivoIn) {
        cout << "No se pudo abrir el archivo \"" << archivo << "\" para lectura." << endl;
        system("pause");
        return;
    }

    ofstream archivoOut("altas_temperaturas.txt");
    if (!archivoOut) {
        cout << "No se pudo crear el archivo de salida." << endl;
        archivoIn.close();
        system("pause");
        return;
    }

    string ciudad;
    double temperatura;
    // Asumimos formato: Ciudad Temperatura (sin espacios en el nombre de ciudad)
    while (archivoIn >> ciudad >> temperatura) {
        if (temperatura > umbral) {
            archivoOut << ciudad << " " << temperatura << "\n";
        }
    }

    archivoIn.close();
    archivoOut.close();

    cout << "Filtrado completado. Ver archivo: altas_temperaturas.txt" << endl;
    system("pause");
}
