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
    int nota=0;
    cout<<"Cual es la nota estudiante?"<<endl;
    cin >> nota;
    if(nota<=51){
        cout <<"reprobado"<< endl;
    }
    else if (nota<=60){
        cout <<"calificacion= C"<< endl;
    }
    else if (nota<= 70){
        cout <<"calificacion= C+"<< endl;
    }
    else if (nota<= 80){
        cout<<"calificacion = B"<< endl;
    }
    else if (nota<= 90){
        cout<<"calificacion=B+"<<endl;
    }
    else if (nota<=95){
        cout<<"calificacion= A"<< endl;
    }
    else if(nota <=100){
        cout<<"calificacion= A+"<< endl;
    }
    return 0;
}
