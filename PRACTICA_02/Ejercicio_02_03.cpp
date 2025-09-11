// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta 
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 06/09/2025 
// Número de ejercicio: 3

#include <iostream>
using namespace std;
#include<ctime>
#include<cstdlib>
int main()
{
    system("cls");
    system("chcp 65001");
    srand(time(NULL));
    int numero= (rand()%10)+1; //semilla para que el numero sea del 1 al 10
    int factorial=1;
    for(int i=1;i<=numero;i++){
        factorial=factorial*i;
    }
    cout<<"el numero aleatorio que salio es:"<< numero<<endl;
    cout<<"el factorial de "<< numero<<"!"<< "es:" << factorial <<endl;
    return 0;
}
