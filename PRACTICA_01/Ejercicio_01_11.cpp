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
    int mes;
    cout<<"ingrese un numero del 1 al 12:"<< endl;
    cin>>mes;
    switch (mes)
    {
        case 1:
            cout<<"enero";
            break ;
        case 2:
            cout<<"febrero";
            break;
        case 3:
            cout<<"marzo";
            break;
        case 4:
            cout<<"abril";
            break;
        case 5:
            cout<<"mayo";
            break;
        case 6:
            cout <<"junio";
            break;
        case 7:
            cout<<"julio";
            break;
        case 8:
            cout<<"agosto";
            break;
        case 9:
            cout<<"septiembre";
            break;
        case 10:
            cout<<"octubre";
            break;
        case 11:
            cout<<"noviembre";
            break;
        case 12:
            cout<<"diciembre";
            break;
        default:
            cout<<"Ingreso un mes invalido"<< endl;
    }
    return 0;
}
