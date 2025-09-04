// Materia: Programación I, Paralelo 4 
// Autor: Willy Edwin Tenorio Palza 
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica  
// Fecha creación: 01/09/2025 
// Número de ejercicio: 19

#include <iostream>
using namespace std;
int main()
{
    system("cls");
    system("chcp 65001");
    int numero_1=0;
    int numero_2=0;
    cout<<"ingrese el primer numero de la multiplicacion"<<endl;
    cin>>numero_1;
    cout<<"ingrese el segundo numero de la multiplicacion que desea saber"<<endl;
    cin>>numero_2;
    int contador_1=0;
    int contador_2=1;
    while (contador_2<=numero_2){
        contador_1 = contador_1 +numero_1;
        contador_2= contador_2 +1;
    }
    cout<<"la multiplicacion de "<<numero_1<<" x "<<numero_2<<" es: "<<contador_1<<endl;
    return 0;
}
