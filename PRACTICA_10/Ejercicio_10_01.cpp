// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 08/11/2025 
// Número de ejercicio: 1
#include <iostream>
#include <fstream>
using namespace std;

void menu(string nombreArchivo);
void CrearArchivoTexto(string nombreArchivo);
void LeerArchivoTexto(string nombreArchivo);
void ModificarArchivoTexto(string nombreArchivo);

void menu(string nombreArchivo) {//menu de opciones
    int opcion = 0;
    do {
        system("cls");
        cout << "MENU DE OPCIONES" << endl;
        cout << "================" << endl;
        cout << "\t1. Crear Archivo Texto" << endl;
        cout << "\t2. Leer Archivo Texto" << endl;
        cout << "\t3. Modificar Archivo Texto" << endl;
        cout << "\t0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();  // limpiar resto de línea
        switch (opcion) {
            case 1:
                CrearArchivoTexto(nombreArchivo);
                break;
            case 2:
                LeerArchivoTexto(nombreArchivo);
                break;
            case 3:
                ModificarArchivoTexto(nombreArchivo);
                break;
            default:
                break;
        }
    } while (opcion != 0);
}

void CrearArchivoTexto(string nombreArchivo) {
    ofstream archivo;
    string nombre = "";
    archivo.open(nombreArchivo);
    if (archivo.fail()) {
        cout << "No se pudo crear el archivo" << endl;
    } else {
        cout << "Ingrese los nombres para el archivo: ";
        getline(cin, nombre);
        archivo << nombre << endl;
        archivo.close();
    }
    system("pause");
}

void LeerArchivoTexto(string nombreArchivo) {
    ifstream archivo;
    string nombre = "";
    archivo.open(nombreArchivo);
    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
    } else {
        cout << "Contenido del archivo:" << endl;
        while (getline(archivo, nombre)) {
            cout << nombre << endl;
        }
        archivo.close();
    }
    system("pause");
}

void ModificarArchivoTexto(string nombreArchivo) {
    ofstream archivo;
    string nombre = "";
    archivo.open(nombreArchivo, ios::app);
    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo." << endl;
    } else {
        cout << "Ingrese texto para agregar al archivo: ";
        getline(cin, nombre);
        archivo << nombre << endl;
        archivo.close();
    }
    system("pause");
}

int main() {
    string nombreArchivo = "nombres.txt";
    menu(nombreArchivo);
    return 0;
}
