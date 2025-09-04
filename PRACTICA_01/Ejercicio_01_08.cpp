// Materia: Programación I, Paralelo 4 
// Autor: Willy Edwin Tenorio Palza 
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica  
// Fecha creación: 21/08/2025 
// Número de ejercicio: 1 

#include <iostream>
using namespace std;
int main()
{
    system("cls");
    system("chcp 65001");
    int numero=0;
    cout<<"ingresa un numero entero:"<< endl;
    cin>> numero;
    if (numero%2==0) 
    {
        cout<<"el numero ingresado es par";
    }
    else 
    {
        cout<<"el numero ingresado es impar";
    }
    return 0;
}
