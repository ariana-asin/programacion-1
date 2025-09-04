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
    do
    {
        cout<<"ingresa un numero del uno al cinco:"<<endl;
        cin>>numero;
        if ((numero<1||numero>5))
        {
            cout<<"ingreso un numero invalido, ingrese otro nuevamente"<<endl;
        }
    }
    while (numero<1||numero>5);
    cout<<"el numero ingresado es valido:"<<numero<<endl;
    return 0;
}
