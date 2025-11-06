// Materia: Programación I, Paralelo 4 
// Autor:Ariana Michelle Asin Ergueta
// Fecha creación: 04/11/2025 
// Número de ejercicio: 8
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
struct Atleta {
    char nombre[20];
    char departamento[20];
    char deporte[20];
    int medallas;
};
Atleta pedirDatos(){
    Atleta athlete;
    cin.ignore();
    cout<<"Ingrese el nombre del atleta:"<<endl;
    cin.getline(athlete.nombre,20);
    cout<<"Ingrese el departamento que representa:"<<endl;
    cin.getline(athlete.departamento,20);
    cout<<"Ingrese el deporte que practica (Tiro con arco, Atletismo, Boxeo,Ciclismo, Natación, Esgrima)"<<endl;
    cin.getline(athlete.deporte,20);
    cout<<"Ingrese la cantidad de medallas que ha ganado:"<<endl;
    cin>>athlete.medallas;
    return athlete;
}
void llenarDatos(vector<Atleta>& lista, int n){
    for(int i=0; i<n; i++){
        lista.push_back(pedirDatos());
    }
}
// Aquí usamos la estructura auxiliar “Dep” para agrupar datos por departamento.
// Cada Dep contendrá el nombre del departamento mas el total de medallas acumuladas.
struct Dep {
    char departamento[20];
    int totalMedallas;
};
void mostrarMedalleroPorDepartamento(vector<Atleta>& lista){
    vector<Dep> depLista;
    for(int i = 0; i < lista.size(); i++){
        bool encontrado = false;
        for(int j = 0; j < depLista.size(); j++){
            if(strcmp(depLista[j].departamento, lista[i].departamento) == 0){
                // si ya existe el departamento, se suma sus medallas
                depLista[j].totalMedallas += lista[i].medallas;
                encontrado = true;
            }
        }
        if(!encontrado){
            Dep nuevo;
            strcpy(nuevo.departamento, lista[i].departamento);
            nuevo.totalMedallas = lista[i].medallas;
            depLista.push_back(nuevo);
        }
    }
    cout<<"\nMedallero por departamento:\n";
    for(int i = 0; i < depLista.size(); i++){
        cout<<"Departamento: "<<depLista[i].departamento
            <<"\n Medallas totales: "<<depLista[i].totalMedallas<<endl;
    }
}
int main(){
    vector<Atleta> lista;
    int n;
    cout<<"ingrese el numero de atletas: "<<endl;
    cin>>n;
    llenarDatos(lista, n);
    mostrarMedalleroPorDepartamento(lista);
    return 0;
}