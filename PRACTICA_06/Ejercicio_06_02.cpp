// Materia: Programación I, Paralelo 1 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 5/10/25
// Número de ejercicio: 2
// Problema planteado: 
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    const int cantidadMinerales = 6;
    string simbolos[6] = {"SN", "SB", "AU", "PT", "AG", "CU"};
    double toneladas[6] = {998.000, 876.500, 786.670, 636.143, 135.567, 109.412};
    string codigoBuscado;
    bool estaPresente = false;
    cout << "Ingrese el nombre del mineral a buscar (SN, SB, AU, PT, AG, CU): ";
    cin >> codigoBuscado;

    for (int indice = 0; indice < cantidadMinerales; indice++) {
        if (simbolos[indice] == codigoBuscado) {
            cout << "La produccion de " << codigoBuscado << " es: " << toneladas[indice] << " toneladas metricas." << endl;
            estaPresente = true;
        }
    }
    if (!estaPresente) {
        cout << "Mineral no encontrado." << endl;
    }
    // Ordenar del mayor al menor usando el método de burbuja
    for (int i = 0; i < cantidadMinerales - 1; i++) {
        for (int j = 0; j < cantidadMinerales - i - 1; j++) {
            if (toneladas[j] < toneladas[j + 1]) {
                double tempTon = toneladas[j];
                toneladas[j] = toneladas[j + 1];
                toneladas[j + 1] = tempTon;
                string tempSim = simbolos[j];
                simbolos[j] = simbolos[j + 1];
                simbolos[j + 1] = tempSim;
            }
        }
    }
    cout << "\nMineral\tProduccion (TM)" << endl;
    for (int i = 0; i < cantidadMinerales; i++) {
        cout << simbolos[i] << "\t" << toneladas[i] << endl;
    }

    return 0;
}
