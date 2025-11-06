// Materia: Programación I, Paralelo 4 
// Autor:Ariana Michelle Asin Ergueta
// Fecha creación: 01/11/2025 
// Número de ejercicio: 1 
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
struct libro{//crear estructura
    char titulo [20];
    char autor [20];
    int anio_publicacion;
    bool disponible;
};
libro pedir_datos(){
    libro book;
    cout<<"ingresa el titulo del libro:";
    cin.getline(book.titulo,20);
    cout<<"ingresa el autor:";
    cin.getline(book.autor,20);
    cout<<"ingrese el anio de publicacion:";
    cin>>book.anio_publicacion;
    return book;
}
void desplegar_datos(libro book){
    int numero=rand()%1+1;//generar aleatorio entre 1 y 0 para asignar si el libro esta o no disponible
    cout<<"los datos ingresados fueron:"<<endl;
    cout<<"\ttitulo:"<<book.titulo<<endl;
    cout<<"\tautor:"<<book.autor<<endl;
    cout<<"\tanio:"<<book.anio_publicacion<<endl;
    book.disponible==numero;
    if (numero==0){
        false;
        cout<<"\tlibro: no  disponible"<<endl;
    }
    else{
        cout<<"\tlibro: disponible"<<endl;
    }
}
int main(){
    libro book =pedir_datos();
    desplegar_datos (book);
    srand(time(NULL));
    return 0;
}
