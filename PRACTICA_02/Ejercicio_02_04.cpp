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
    int numero_secreto=(rand()%50)+1;
    int numero_superior=50;
    int numero_inferior=0;
    int adivinar_numero;
    cout<<"estoy pensando un numero entre el 0 y el 50"<<endl;
    for (int i=1; i<=5; i++){
        cout<<"intento"<<i<<endl;
        cout<<"?";
        cin>>adivinar_numero;
        if(adivinar_numero==numero_secreto){
            cout<<"felicidades, adivinaste el numero secreto"<< numero_secreto<<endl;
        }
        if (adivinar_numero<numero_secreto){
            numero_inferior=adivinar_numero;
        }
        else{
            numero_superior=adivinar_numero;
        }
        cout<<"el numero esta entre"<< numero_inferior <<"y"<< numero_superior <<endl;
    }
    cout<<"no adivino el numero secreto, suerte la proxima."<<" El numero secrero era:" << numero_secreto<<endl;
}
