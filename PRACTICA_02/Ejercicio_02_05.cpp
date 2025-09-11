// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta 
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 06/09/2025 
// Número de ejercicio: 4

#include <iostream>
using namespace std;
#include<ctime>
#include<cstdlib>
int main()
{
    system("cls");
    system("chcp 65001");
    srand(time(NULL));
    int numero_aleatorio= (rand()%10000)+1;
    int numero= 0;
    cout<<"ingrese cuantos numero aleatorios quiere obtener"<<endl;
    cin>>numero;
    int suma=0;
    int mayor=1001;
    int menor=0;
    for (int i=0; i<numero;i++){
        int numero_aleatorio= (rand()%10000)+1;
        suma=suma+numero_aleatorio;
        if (numero_aleatorio>mayor){
            mayor=numero_aleatorio;
        }
        if (numero_aleatorio<menor){
            menor=numero_aleatorio;
        }
    }
    double promedio= (double)suma/numero;
    cout<<numero_aleatorio<<endl;
    cout<<"la sumatoria es:"<< suma << endl;
    cout<<"el promedio es:" << promedio<< endl;
    cout<<"el mayor valor que salio fue:"<<mayor<<endl;
    cout<<"el menor valor que salio fue:"<< menor<<endl;
    return 0;
}
