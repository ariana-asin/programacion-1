// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica 
// Fecha creación: 08/09/2025 
// Número de ejercicio: 3
#include <iostream>
using namespace std;
// Función para determinar si un número es capicúa
bool numero_capicua(int numero) 
{
    int numero_original = numero;
    int numero_invertido = 0;
    while (numero > 0) 
    {
        numero_invertido = numero_invertido * 10 + (numero % 10);
        numero=numero/10;
    }
    return numero_original == numero_invertido;
}
int main() 
{
    int num;
    cout << "Ingrese un número: ";
    cin >> num;
    if (numero_capicua(num)) 
    {
        cout << num << " es un número capicúa." << endl;
    } 
    else 
    {
        cout << num << " no es un número capicúa." << endl;
    }
    return 0;
}

