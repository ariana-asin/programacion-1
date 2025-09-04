// Materia: Programación I, Paralelo 4 
// Autor: Willy Edwin Tenorio Palza 
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica  
// Fecha creación: 03/09/2025 
// Número de ejercicio: 24

#include <iostream>
using namespace std;
int main()
{
    system("cls");
    system("chcp 65001");
    int opciones=0;
    do
    {
        cout << "Seleccione una opcion de este menu: " << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Opcion 3" << endl;
        cout << "0. Salir" << endl;
        cin >> opciones;
        switch (opciones)
        {
            case 1:
                cout<<"Selecciono la opcion 1"<<endl;
                break;
            case 2:
                cout<<"Selecciono la opcion 2"<<endl;
                break;
            case 3:
                cout<<"Selecciono la opcion 3"<<endl;
                break;
            case 0:
                cout<<"Usted eligio salio del menu de opciones"<<endl;
                break;
            default:
                cout<<"no existe la opcion seleccionada"<<endl;
        }
    } while (opciones != 0);
    return 0;
}
