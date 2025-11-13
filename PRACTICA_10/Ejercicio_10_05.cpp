// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 10/11/2025 
// Número de ejercicio: 5
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void pedirDatos(string &nombreBuscado, double &nuevoPrecio);
void actualizarArchivo(const string &nombreArchivo, const string &nombreBuscado, double nuevoPrecio);

int main() {
    const string nombreArchivo = "productos.txt";
    string nombreBuscado;
    double nuevoPrecio;

    pedirDatos(nombreBuscado, nuevoPrecio);
    actualizarArchivo(nombreArchivo, nombreBuscado, nuevoPrecio);

    return 0;
}

void pedirDatos(string &nombreBuscado, double &nuevoPrecio) {
    cout << "Ingrese el nombre del producto a actualizar: ";
    cin >> nombreBuscado;
    cout << "Ingrese el nuevo precio: ";
    cin >> nuevoPrecio;
}

void actualizarArchivo(const string &nombreArchivo,
                       const string &nombreBuscado,
                       double nuevoPrecio) {
    ifstream archivoIn(nombreArchivo);
    if (!archivoIn) {
        cout << "No se pudo abrir el archivo \"" << nombreArchivo << "\" para lectura." << endl;
        return;
    }

    const string nombreTemp = "temp.txt";
    ofstream archivoOut(nombreTemp);
    if (!archivoOut) {
        cout << "No se pudo crear el archivo temporal." << endl;
        archivoIn.close();
        return;
    }

    string nombre;
    double precio;
    bool encontrado = false;

    // Leer cada registro y escribir al archivo temporal, cambiando el precio si se encuentra
    while (archivoIn >> nombre >> precio) {
        if (nombre == nombreBuscado) {
            archivoOut << nombre << " " << nuevoPrecio << "\n";
            encontrado = true;
        } else {
            archivoOut << nombre << " " << precio << "\n";
        }
    }

    archivoIn.close();
    archivoOut.close();

    if (!encontrado) {
        cout << "El producto \"" << nombreBuscado << "\" no existe en el archivo." << endl;
    } else {
        if (remove(nombreArchivo.c_str()) != 0) {
            cout << "Error al borrar el archivo original." << endl;
            return;
        }
        if (rename(nombreTemp.c_str(), nombreArchivo.c_str()) != 0) {
            cout << "Error al renombrar el archivo temporal al original." << endl;
            return;
        }
        cout << "Precio actualizado correctamente para \"" << nombreBuscado << "\"." << endl;
    }
}
