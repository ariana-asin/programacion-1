// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 13/09/2025 
// Número de ejercicio: 8
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int numero; // Número de productos que fueron vendidos
    double precio, monto_total = 0, iva_total = 0;
    double IVA = 0.13;
    double descuento = 0.05;
    double LimiteDescuento = 2500.0;
    // Inicializar la semilla para los numeros aleatorios
    srand(time(NULL));
    cout << "ingrese el número de productos vendidos: ";
    cin >> numero;
    //precios aleatorios
    for (int i = 1; i <= numero; ++i) {
        precio = rand() % 31 + 20; 
        monto_total=monto_total+ precio;
        cout << "producto " << i << " precio = " << precio << " bs" << endl;
    }
    iva_total = monto_total * IVA;
    if (monto_total > LimiteDescuento) {
        monto_total = monto_total-monto_total * descuento;
        cout << "se aplico un descuento del 5% por exceder el monto de " << LimiteDescuento<< "bs" << endl;
    }
    cout << "el monto total de venta es: " << monto_total + iva_total << "bs" << endl;
    cout << "el monto total de IVA es: " << iva_total << " bs" << endl;
    cout << "el monto total a pagar al Servicio de Impuestos Nacionales es de: " << iva_total << "bs" << endl;
    return 0;
}
