// Materia: Programación I, Paralelo 4 
// Autor: Willy Edwin Tenorio Palza 
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica  
// Fecha creación: 21/08/2025 
// Número de ejercicio: 6

#include <iostream>
using namespace std;
int main()
{
    system("cls");
    system("chcp 65001");
    // comando char para almacenar letras 
    char letra;
    cout <<"ingrese una letra:";
    cin>> letra;
    if ((letra=='a')||(letra=='e')||(letra=='i')||(letra=='o')||(letra=='u')){
        cout <<"la letra es una vocal"<<endl;
    }
    else {
        cout<<"la letra es una consonante"<<endl;
    }
    return 0;
}
