// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 13/09/2025 
// Número de ejercicio: 9
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int calcular_sueldo(int antiguedad_anos, int ventas_totales, double& sueldo_base, double& comision_ventas, double& sueldo_final) {
    if (antiguedad_anos < 1) {
        sueldo_base = 300; // Sueldo base para menos de 1 año de antigüedad
    } else if (antiguedad_anos <= 3) {
        sueldo_base = 500; // Sueldo base para 1 a 3 años de antigüedad
    } else {
        sueldo_base = 700; // Sueldo base para más de 3 años de antigüedad
    }
    comision_ventas = ventas_totales * 0.10;
    sueldo_final = sueldo_base + comision_ventas;
    return 0;
}
int main() {
    system("cls");
    system("chcp 65001");
    srand(time(NULL));
    int cantidad_vendedoras;
    cout << "Ingrese el número de vendedoras: ";
    cin >> cantidad_vendedoras;
    for (int i = 1; i <= cantidad_vendedoras; ++i) {
        int antiguedad_anos = rand() % 5+1; 
        int ventas_totales = rand() % 100+1; 
        cout << "\nVendedora " << i << endl;
        cout << "Antigüedad: " << antiguedad_anos << " años" << endl;
        cout << "Total vendido en el mes: " << ventas_totales << " unidades" << endl;
        double sueldo_base, comision_ventas, sueldo_final;
        calcular_sueldo(antiguedad_anos, ventas_totales, sueldo_base, comision_ventas, sueldo_final);
        cout << "el sueldo base es de=" << sueldo_base << " Bs" << endl;
        cout << "comisión= " << comision_ventas << " Bs" << endl;
        cout << "el sueldo final= " << sueldo_final << " Bs" << endl;
    }
    return 0;
}

