// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica 
// Fecha creación: 08/09/2025 
// Número de ejercicio: 5
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
 {
    srand(time(0));
    const int num_calificaciones = 4;
    int calificaciones[num_calificaciones];
    int ponderaciones[num_calificaciones] = {10, 20, 30, 40};
    int suma_ponderaciones = 0;
    int suma_productos = 0;
    // semilla para generar calificaciones aleatorias 
    for (int i = 0; i < num_calificaciones; i++) {
        calificaciones[i] = rand() % 100 + 1;
        suma_productos += calificaciones[i] * ponderaciones[i];
        suma_ponderaciones += ponderaciones[i];
        cout << "Calificación " << i + 1 << ": " << calificaciones[i] << endl;
    }
    //  mostrar el promedio ponderado
    double promedio_ponderado = (double)suma_productos / suma_ponderaciones;
    cout << "Promedio ponderado: " << promedio_ponderado << endl;

    return 0;
}

