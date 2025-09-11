// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica 
// Fecha creación: 08/09/2025 
// Número de ejercicio: 6
#include <iostream>
using namespace std;
// Función para determinar si un año es bisiesto
bool es_bisiesto(int año) {
    return (año % 4 == 0 && año % 100 != 0) || (año % 400 == 0);
}
// Función para obtener la cantidad de días de un mes en un año dado
int obtener_dias_del_mes(int año, int mes) {
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        return 31;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    } else if (mes == 2) {
        if (es_bisiesto(año)) {
            return 29;
        } else {
            return 28;
        }
    } else {
        return -1; // es un mes invalido
    }
}
int main() {
    int año, mes;
    cout << "Ingrese el año: ";
    cin >> año;
    cout << "Ingrese el mes (1-12): ";
    cin >> mes;
    int dias = obtener_dias_del_mes(año, mes);
    if (dias == -1) {
        cout << "mes inválido." << endl;
    } else {
        cout << "el mes " << mes << " del año " << año << " tiene " << dias << " días." << endl;
    }
    return 0;
}
