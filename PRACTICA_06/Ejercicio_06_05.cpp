// Materia: Programación I, Paralelo 1 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 5/10/25
// Número de ejercicio: 5
// Problema planteado:
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    system("cls");
    system("chcp 65001");
    int cantidad1;
    int cantidad2;
    cout << "Ingrese la cantidad de clientes de la primera empresa: ";
    cin >> cantidad1;
    vector<string> lista_clientes1(cantidad1);
    cout << "Ingrese los nombres de los clientes de la primera empresa:" << endl;
    for (int idx1 = 0; idx1 < cantidad1; idx1++) {
        cin >> lista_clientes1[idx1];
    }
    cout << "Ingrese la cantidad de clientes de la segunda empresa: ";
    cin >> cantidad2;
    vector<string> lista_clientes2(cantidad2);
    cout << "Ingrese los nombres de los clientes de la segunda empresa:" << endl;
    for (int i = 0; i < cantidad2; i++) {
        cin >> lista_clientes2[i];
    }
    cout << "Clientes en común:" << endl;
    int cont_comunes = 0;
    for (int i1 = 0; i1 < cantidad1; i1++) {
        for (int i2 = 0; i2 < cantidad2; i2++) {
            if (lista_clientes1[i1] == lista_clientes2[i2]) {
                cout << lista_clientes1[i1] << endl;
                cont_comunes++;
            }
        }
    }
    if (cont_comunes == 0) {
        cout << "No hay clientes en común." << endl;
    }
    return 0;
}