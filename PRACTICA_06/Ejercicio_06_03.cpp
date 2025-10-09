// Materia: Programación I, Paralelo 1 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 5/10/25
// Número de ejercicio: 3
// Problema planteado:
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    system("cls");
    system("chcp 65001");
    vector<string> nombres_vec = {
        "Diego", "Lucia", "Mario", "Silvia", "Andres",
        "Valentina", "Ricardo", "Camila", "Esteban", "Natalia"
    };
    vector<string> apellidos_vec = {
        "Mendoza", "Castillo", "Vargas", "Rojas", "Fuentes",
        "Navarro", "Silva", "Alvarez", "Cruz", "Salazar"
    };
    vector<int> edades_vec = {21, 34, 19, 27, 33, 29, 45, 22, 38, 30};
    int num_selecciones;
    cout << "¿Cuántas selecciones aleatorias desea mostrar? ";
    cin >> num_selecciones;
    srand(static_cast<unsigned>(time(nullptr)));
    for (int iteracion = 0; iteracion < num_selecciones; iteracion++) {
        int idx_azar = rand() % 10;
        cout << "seleccion_" << (iteracion + 1) << ":\n";
        cout << "nombre: " << nombres_vec[idx_azar] << "\n";
        cout << "apellido: " << apellidos_vec[idx_azar] << "\n";
        cout << "edad: " << edades_vec[idx_azar] << "\n";
    }
    return 0;
}