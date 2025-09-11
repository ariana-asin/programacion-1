// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta 
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 06/09/2025 
// Número de ejercicio: 1

#include <iostream>
using namespace std;
#include<ctime>
#include<cstdlib>
int main()
{
    system("cls");
    system("chcp 65001");
    int NumeroDeVeces;
    int resultado;
    cout<<"cuantas veces quiere lanzar el dado?"<<endl;
    cin>>NumeroDeVeces;
    if (NumeroDeVeces<=0){
        cout<<"el numero ingresado debe ser mayor que cero"<<endl;
        return 1;
    }
    srand((time(NULL)));//para generar numeros "aleatorios"
    int contador_pares=0;
    for(int i=0; i<NumeroDeVeces; i++){
        int resultado= rand()%6+1;//semilla
        if (resultado%2==0){
            contador_pares=contador_pares+1;
        }
    }
    cout<<resultado<<endl;
    cout<<"se lanzo el dado"<<NumeroDeVeces<<"veces"<< endl; 
    cout<<"las caras pares fuero:"<<contador_pares<<endl;
    return 0;
}
