// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica 
// Fecha creación: 10/09/2025 
// Número de ejercicio: 11
#include <iostream>
using namespace std;
// Función double para simular retiro de dinero en un cajero 
double retirar(double saldo, double cantidad) 
{
    if (cantidad <= 0) 
    {
        cout << "El monto a retirar no puede ser 0 " << endl;
        return saldo;
    }
    if (cantidad > saldo) 
    {
        cout << "su saldo es insuficiente." << endl;
        return saldo;
    }
    if ((cantidad - int(cantidad) != 0) || (int(cantidad) % 10 != 0))
    {
        cout << "El monto a retirar debe ser valido" << endl;
        return saldo;
    }
    saldo=saldo - cantidad;
    cout << "Retiro exitoso; su nuevo saldo es: " << saldo << " Bs." << endl;
    return saldo;
}
int main() 
{
    double saldo = 1000.0;
    double cantidad;
    cout << "Saldo actual: " << saldo << " Bs." << endl;
    cout << "Ingrese el monto que desea retirar: ";
    cin >> cantidad;
    saldo = retirar(saldo, cantidad);
    return 0;
}
