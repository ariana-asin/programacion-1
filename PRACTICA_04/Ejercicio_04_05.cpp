// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 13/09/2025 
// Número de ejercicio: 5
#include <iostream>
using namespace std;
int main() {
    system("cls");
    system("chcp 65001");
    float horas_trabajadas;
    float tarifa_hora;
    float bonificacion = 0;
    cout << "Ingrese las horas trabajadas: ";
    cin >> horas_trabajadas;
    cout << "Ingrese la tarifa por hora: ";
    cin >> tarifa_hora;
    float salario = horas_trabajadas * tarifa_hora;
    //if para saber si tiene bonificacion
    if (horas_trabajadas > 8) {
        bonificacion = (horas_trabajadas - 8) * (tarifa_hora * 1.5);
    }
    cout << "Salario del trabajador: " << salario << endl;
    cout << "Salario bonificación: " << bonificacion << endl;
    return 0;
}
