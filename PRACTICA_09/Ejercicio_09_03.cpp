// Materia: Programación I, Paralelo 4 
// Autor:Ariana Michelle Asin Ergueta
// Fecha creación: 01/11/2025 
// Número de ejercicio: 3
#include<iostream>
#include <vector>
using namespace std;
struct alumno{
    int cedula;
    char nombre[20];
    char apellido [20];
    int edad;
    char profesion[20];
    char nacimiento[20];
    char direccion[20];
    int telefono;
};
alumno pedirDatos(){
    alumno progra1;
    cout<<"ingrese la cedula de identidad (solo numeros):";
    cin>>progra1.cedula;
    cin.ignore();
    cout<<"ingrese el nombre de estudiantes:";
    cin.getline(progra1.nombre,20);
    cout<<"ingrese el apellido:";
    cin.getline(progra1.apellido,20);
    cout<<"ingrese la edad:";
    cin>>progra1.edad;
    cin.ignore();
    cout<<"ingrese la profesion:";
    cin.getline(progra1.profesion,20);
    cout<<"ingrese el lugar de nacimiento:";
    cin.getline(progra1.nacimiento,20);
    cout<<"ingrese su direccion:";
    cin.getline(progra1.direccion,20);
    cout<<"ingrese su telefono:";
    cin>>progra1.telefono;
    return progra1;
}
void ingresarDatos(vector<alumno> &listaAlumno, int n){
    for(int i=0; i<n; i++){
        listaAlumno.push_back(pedirDatos());
    }
}
void mostrar_datos(alumno progra1){
    cout<<"\n";
    cout<<"los datos ingresados del estudiante:"<<endl;
    cout<<"cedula:"<<progra1.cedula<<endl;
    cout<<"nombre:"<<progra1.nombre<<endl;
    cout<<"apellido:"<<progra1.apellido<<endl;
    cout<<"edad:"<<progra1.edad<<endl;
    cout<<"profesion:"<<progra1.profesion<<endl;
    cout<<"lugar de nacimiento:"<<progra1.nacimiento<<endl;
    cout<<"direccion:"<<progra1.direccion<<endl;
    cout<<"telefono:"<<progra1.telefono<<endl;
    cout<<"\n";
}
void mostrarListaAlumnos (vector<alumno>listaAlumno){
    for (int i = 0; i < listaAlumno.size(); i++)
    {
        mostrar_datos(listaAlumno[i]);
    } 
}
int main(){
    vector<alumno>listaAlumno;
    int n;
    cout<<"ingresa la cantidad de alumnos:"<<endl;
    cin>>n;
    ingresarDatos(listaAlumno,n);
    mostrarListaAlumnos(listaAlumno);
    return 0;
}