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
    int edad=0;
    cout<<"ingrese su edad"<< endl;
    cin>>edad;
    if (edad<=12)
    {
        cout<<"Es un niño"<<endl;
    }
    else if(edad<=18)
    {
        cout<<"Es un adolescente" <<endl;
    }
    else if(edad<=60)
    {
        cout <<"Es mayor de edad"<< endl;
    }
    else 
    {
        cout <<"Es un adulto mayor"<< endl;
    }
    return 0;
}