// Materia: Programación I, Paralelo 4 
// Autor:Ariana Michelle Asin Ergueta
// Fecha creación: 01/11/2025 
// Número de ejercicio: 2
#include<iostream>
using namespace std;
#include <vector>
struct atleta{
    char nombre[20];
    char pais [20];
    int edad;
    int mejor_tiempo;
};
atleta pedir_datos_atleta(){
    atleta athlete;
    cin.ignore();
    cout<<"ingresa el nombre del atleta:";
    cin.getline(athlete.nombre,20);
    cout<<"ingresa el pais:";
    cin.getline(athlete.pais,20);
    cout<<"ingrese la edad del atleta:";
    cin>>athlete.edad;
    cout<<"ingrese el mejor tiempo que tuvo en segundos sin decimales:";
    cin>>athlete.mejor_tiempo;
    return athlete;
}
void pedir_datos(vector<atleta>&lista,int n){
    for (int i = 0; i < n; i++)
    {
        lista.push_back(pedir_datos_atleta());
    }
}
void MostrarListaAtleta(vector<atleta>&lista){
    int mejor=0;
    for(int i=0;i<lista.size();i++){
        if(lista[i].mejor_tiempo<lista[mejor].mejor_tiempo){
            mejor=i;
        }
    }
    cout<<"el atleta con mejor tiempo es:"<<endl;
    cout<<"Nombre:"<<lista[mejor].nombre<<endl;
    cout<<"pais:"<<lista[mejor].pais<<endl;
    cout<<"tiempo:"<<lista[mejor].mejor_tiempo<<" segundos "<<endl;
}
int main(){
    vector<atleta>lista;
    int n;
    cout<<"ingrese el numero de atletas que registrara:";
    cin>>n;
    cin.ignore();
    pedir_datos(lista,n);
    MostrarListaAtleta(lista);
    return 0;
}