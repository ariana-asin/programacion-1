// Materia: Programación I, Paralelo 4 
// Autor:Ariana Michelle Asin Ergueta
// Fecha creación: 02/11/2025 
// Número de ejercicio: 4
#include <iostream>
#include <vector>
using namespace std;
struct empleado{//crear estructura
    char nombre[20];
    char genero[20];
    float salario;
};
empleado pedirDatos(){
    empleado datos;
    cin.ignore();
    cout<<"ingrese el nombre del empleado: "<<endl;
    cin.getline(datos.nombre,20);
    cout<<"ingrese el genero del emplead@ (hombre/mujer): ";
    cin.getline(datos.genero,20);
    cout<<"ingrese el salario que gana el empleado: "<<endl;
    cin>>datos.salario;
    return datos;
}
void ingresarDatos(vector<empleado>&lista,int n){
    for(int i=0;i<n;i++){
        lista.push_back(pedirDatos());//llenar vector
    }
}
void mayor_y_menor_salario(vector<empleado>lista){
    int mayor=0;
    int menor=0;
    for(int i=1;i<lista.size();i++){
        if(lista[i].salario>lista[mayor].salario){//comparar
            mayor=i;
        }
        if(lista[i].salario<lista[menor].salario){
            menor=i;
        }
    }
    cout<<"el empleado  con mayor salario es:"<<endl;
    cout<<"nombre:"<<lista[mayor].nombre<<endl;
    cout<<"genero:"<<lista[mayor].genero<<endl;
    cout<<"salario:"<<lista[mayor].salario<<endl;
    cout<<"\n";
    cout<<"el empleado con menor salario es:"<<endl;
    cout<<"nombre:"<<lista[menor].nombre<<endl;
    cout<<"genero:"<<lista[menor].genero<<endl;
    cout<<"salario:"<<lista[menor].salario<<endl;
}
int main(){
    vector<empleado>lista;
    int n;
    cout<<"ingrese cuantos datos de empleados llenara:";
    cin>>n;
    ingresarDatos(lista,n);
    mayor_y_menor_salario(lista);
    return 0;
}