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
    int radio_esfera=0;
    cout<<"ingrese el radio de la esfera:";
    cin >> radio_esfera;
    int volumen_esfera=(4/3) *3.1416 * radio_esfera * radio_esfera * radio_esfera;
    cout<<"el volumen de la esfera es:"<< volumen_esfera<< endl;
    return 0;
}