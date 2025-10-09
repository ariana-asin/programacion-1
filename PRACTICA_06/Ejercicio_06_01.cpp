// Materia: Programación I, Paralelo 1 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 5/10/25
// Número de ejercicio: 1 
// Problema planteado:  Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir 
//de este arreglo determine la desviación típica.
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
int main() {
    system("cls");
    system("chcp 65001");
    
    vector<int> listaEdades;
    int valorEdad;
    double total = 0;
    double promedio, desv = 0;

    do {
        cout << "Ingrese la edad (ingrese -1 para terminar): ";
        cin >> valorEdad;
        if (valorEdad != -1) {
            listaEdades.push_back(valorEdad);
            total= total+ valorEdad;
        }
    } while (valorEdad != -1);

    int cantidad = listaEdades.size();
    if (cantidad == 0) {
        cout << "No se ingresaron edades." << endl;
        return 0;
    }
    for (int i= 0; i< cantidad; i++) {
        double diff = listaEdades[i] - promedio;
        desv += diff * diff;
    }
    desv = sqrt(desv / cantidad);
    cout << "La desviacion tipica es: " << desv << endl;
    return 0;
}