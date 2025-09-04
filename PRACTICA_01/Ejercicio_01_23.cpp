// Materia: Programación I, Paralelo 4 
// Autor: Willy Edwin Tenorio Palza 
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica  
// Fecha creación: 03/09/2025 
// Número de ejercicio: 23

#include <iostream>
using namespace std;
int main()
{
    system("cls");
    system("chcp 65001");
    int numero=0;
    cout<<"ingrese un numero entero"<<endl;
    cin>>numero;
    int resultado=0;
    cout<<"el numero con los digitos al reves es:";
    while (numero!=0){
        resultado=numero%10;
        cout<<resultado;
        numero=numero/10;
    }
    cout<<endl;
    return 0;
}
