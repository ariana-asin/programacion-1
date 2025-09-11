// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica 
// Fecha creación: 08/09/2025 
// Número de ejercicio: 1
#include <iostream>
using namespace std;
void numero_impar_o_par(int numero) 
{
    if (numero % 2 == 0) 
    {
        cout << numero << " es un numero par" << endl;
    } else 
    {
        cout << numero << " es un numero impar." << endl;
    }
}
int main() 
{
    int num;
    cout << "Ingrese un número: ";
    cin >> num;
    numero_impar_o_par(num);
    return 0;
}
