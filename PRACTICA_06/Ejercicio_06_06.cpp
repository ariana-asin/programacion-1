// Materia: Programación I, Paralelo 1 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 5/10/25
// Número de ejercicio: 5
// Problema planteado:
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");

    int total_estudiantes;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> total_estudiantes;

    vector<int> notas_vec(total_estudiantes);
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < total_estudiantes; i++) {
        notas_vec[i] = rand() % 101; // Genera calificación aleatoria entre 0 y 100
    }

    int conteo_reprobado = 0;
    int conteo_regular = 0;
    int conteo_bueno = 0;
    int conteo_excelente = 0;

    for (int nota : notas_vec) {
        if (nota <= 59) {
            conteo_reprobado++;
        } else if (nota <= 79) {
            conteo_regular++;
        } else if (nota <= 89) {
            conteo_bueno++;
        } else {
            conteo_excelente++;
        }
    }
    cout << "Porcentaje de estudiantes en cada rango:" << endl;
    cout << "Reprobado (0-59): " << (conteo_reprobado * 100.0 / total_estudiantes) << "%" << endl;
    cout << "Regular (60-79): " << (conteo_regular * 100.0 / total_estudiantes) << "%" << endl;
    cout << "Bueno (80-89): " << (conteo_bueno * 100.0 / total_estudiantes) << "%" << endl;
    cout << "Excelente (90-100): " << (conteo_excelente * 100.0 / total_estudiantes) << "%" << endl;
    return 0;
}
