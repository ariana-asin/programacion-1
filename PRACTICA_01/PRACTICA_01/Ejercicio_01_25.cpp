// Materia: Programación I, Paralelo 4 
// Autor:Ariana Michelle Asin Ergueta
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica  
// Fecha creación: 03/09/2025 
// Número de ejercicio: 25

#include <iostream>
using namespace std;
int main()
{
    system("cls");
    system("chcp 65001");
    char respuesta;
    int numero_tabla=0;
    do
    {
        cout<<"Ingrese un numero del que quiera saber la tabla: ";
        cin>>numero_tabla;
        //for para hacer la tabla del 1 al 10
        for (int i = 1; i <= 10; i++){
            cout<<numero_tabla<< " x " <<i<< " = " <<numero_tabla*i<<endl;
        }
        cout<<"Desea ingresar otro numero? (s(si)/n(no)): ";
        cin>>respuesta;
    } while (respuesta == 's' || respuesta == 'S');
    return 0;
}
