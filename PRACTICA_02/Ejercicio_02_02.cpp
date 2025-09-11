// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta 
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 06/09/2025 
// Número de ejercicio: 2

#include <iostream>
using namespace std;
#include<ctime>
#include<cstdlib>
int main()
{
    system("cls");
    system("chcp 65001");
    int cantidad_lanzamientos;
    cout<<"ingrese el numero de veces que quiere lanzar la moneda"<<endl;
    cin>>cantidad_lanzamientos;
    if (cantidad_lanzamientos <=0){
        cout<<"debe ingresar un numero mayor a cero"<<endl;
        return 1;
    }
    srand(time(NULL));//generar numeros "aleatorios"
    int contador_caras=0;
    int contador_cruz=0;
    for (int i=0; i<cantidad_lanzamientos; i++){
        if(rand()%2==0) contador_caras=contador_caras +1;//semilla
        else contador_cruz=contador_cruz+1;
    }
    double porcentaje_caras=(double)contador_caras/cantidad_lanzamientos*100;
    double porcentaje_cruz=(double)contador_cruz/cantidad_lanzamientos*100;

    cout<<"Caras:"<<porcentaje_caras<<"%"<<endl;
    cout<<"Cruces:"<<porcentaje_cruz<<"%"<<endl;
    return 0;
}

