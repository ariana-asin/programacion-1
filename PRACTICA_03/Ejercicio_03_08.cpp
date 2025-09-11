// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica 
// Fecha creación: 09/09/2025 
// Número de ejercicio: 8
#include <iostream>
using namespace std;
void descomponer(int dinero) 
{
    int billetes[] = {200, 100, 50, 20, 10};//numero de billetes validos 
    int monedas[] = {5, 2, 1};//monedas aptas 
    cout << "la descomposicion para " << dinero << " Bs:" << endl;
    for (int i = 0; i < 5; i++) 
    {
        int cantidad = dinero / billetes[i];
        if (cantidad > 0) 
        {
            cout << cantidad << " billete(s) de " << billetes[i] << " Bs" << endl;
            dinero=dinero%billetes[i];
        }
    }
    for (int i = 0; i < 3; i++) 
    {
        int cantidad = dinero / monedas[i];
        if (cantidad > 0) 
        {
            cout << cantidad << " moneda(s) de " << monedas[i] << " Bs" << endl;
            dinero=dinero%monedas[i];
        }
    }
}
int main() 
{
    int dinero;
    cout << "Ingrese el monto en Bs: ";
    cin >> dinero;
    descomponer(dinero);
    return 0;
}
