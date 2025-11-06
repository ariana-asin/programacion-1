// Materia: Programación I, Paralelo 4 
// Autor:Ariana Michelle Asin Ergueta
// Fecha creación: 02/11/2025 
// Número de ejercicio: 5
#include <iostream>
#include <vector>
using namespace std;
#include <cstring>
struct pelicula{//crear estructura
    char titulo[20];
    char director[20];
    int duracion;
    int anio_estreno;
    char genero[20];
};
pelicula pedirDatos(){
    pelicula movie;
    cin.ignore();
    cout<<"Ingrese el titulo de la pelicula:"<<endl;
    cin.getline(movie.titulo,20);
    cout<<"ingrese el director de la pelicula:"<<endl;
    cin.getline(movie.director,20);
    cout<<"ingrese la duracion de la pelicula en minutos"<<endl;
    cin>>movie.duracion;
    cout<<"ingrese el anio de estreno de la pelicula"<<endl;
    cin>>movie.anio_estreno;
    cin.ignore();
    cout<<"ingrese el genero de la pelicula"<<endl;
    cin.getline(movie.genero,20);
    cout<<"\n";
    return movie;
}
void llenarDatos(vector<pelicula>&lista,int n){
    for(int i=0; i<n; i++){
        lista.push_back(pedirDatos());
    }
}
void mostrarPorGenero( vector<pelicula>&lista,char generoBuscado[]){
    cout<<"peliculas encontradas con el genero:"<<generoBuscado<<"\n son las siguientes:"<<endl;
    for(int i=0; i<lista.size();i++){
        if(strcmp(lista[i].genero, generoBuscado) == 0){
            cout<<"Titulo: "<<lista[i].titulo<<endl;
            cout<<"Director: "<<lista[i].director<<endl;
            cout<<"Duracion: "<<lista[i].duracion<<endl;
            cout<<"Anio de estreno: "<<lista[i].anio_estreno<<endl;
            cout<<"Genero: "<<lista[i].genero<<endl;
            cout<<"\n";
        }
    }
}
void mostrarPorDirector(vector<pelicula>&lista, char directorBuscado[]){
    cout<<"peliculas encontradas con el director:"<<directorBuscado<<"\n son las siguientes"<<endl;
    for(int i=0; i<lista.size(); i++){
        if(strcmp(lista[i].director, directorBuscado)==0){
            cout<<"Titulo: "<<lista[i].titulo<<endl;
            cout<<"Director: "<<lista[i].director<<endl;
            cout<<"Duracion: "<<lista[i].duracion<<endl;
            cout<<"Anio de estreno: "<<lista[i].anio_estreno<<endl;
            cout<<"Genero: "<<lista[i].genero<<endl;
            cout<<"\n";
        }
    }
}
int main(){
    vector<pelicula>lista;
    int n;
    char generoBuscado[20];
    char directorBuscado [20];
    cout<<"ingrese cuantas peliculas ingresara:"<<endl;
    cin>>n;
    cin.ignore();
    cout<<"ingrese el genero que desea buscar:"<<endl;
    cin.getline(generoBuscado,20);
    cout<<"ingrese al director que desea buscar:"<<endl;
    cin.getline(directorBuscado,20);
    llenarDatos(lista, n);
    mostrarPorGenero(lista,generoBuscado);
    mostrarPorDirector(lista,directorBuscado);
    return 0;
}

