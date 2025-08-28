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
    int grados_centigrados=0;
    cout<<"ingrese los grados centigrados que desea cambiar a grados kelvin:";
    cin>> grados_centigrados;
    cout<< "la transformacion a grados kelvins es:"<< grados_centigrados + 273.15<< endl;
    return 0;
}
