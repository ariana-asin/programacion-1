// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica 
// Fecha creación: 09/09/2025 
// Número de ejercicio: 10
#include <iostream>
using namespace std;
// calcular el monto del taxi
double calcularTarifa(double km) 
{
    double monto_estandar = 10.0;
    double precio_Km = 2.0;
    double total = monto_estandar + (km * precio_Km);
    // condición: si recorres más de 10 km hay un descuento del 10%
    if (km > 10) 
    {
        total = total * 0.9;
    }
    return total;
}
int main()
{
    double km;
    cout << "Ingrese la distancia recorrida en km: ";
    cin >> km;
    double costo = calcularTarifa(km);
    cout << "El precio del viaje es: " << costo << " Bs." << endl;
    return 0;
}
