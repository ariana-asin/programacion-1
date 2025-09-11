// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica 
// Fecha creación: 08/09/2025 
// Número de ejercicio: 2
#include <iostream>
using namespace std;
//float para la conversion
float celsius_a_fahrenheit(float celsius) 
{
    return (celsius * 9.0 / 5.0) + 32;
}
int main() {
    float grados_Celsius;
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> grados_Celsius;
    float grados_Fahrenheit = celsius_a_fahrenheit(grados_Celsius);
    cout << grados_Celsius<< " grados Celsius equivalen a " << grados_Fahrenheit << " grados Fahrenheit." << endl;
    return 0;
}
