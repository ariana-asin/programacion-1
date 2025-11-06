// Materia: Programación I, Paralelo 4 
// Autor:Ariana Michelle Asin Ergueta
// Fecha creación: 03/11/2025 
// Número de ejercicio: 6
#include <iostream>
#include <vector>
using namespace std;
struct Empleado {
    char nombre[20];//crear estructura
    int id;
    double sueldo;
    int antiguedad; // en años
};
Empleado pedirDatos(){
    Empleado employee;
    cin.ignore();
    cout<<"Ingrese el nombre del empleado:"<<endl;
    cin.getline(employee.nombre,20);
    cout<<"Ingrese el ID del empleado:"<<endl;
    cin>>employee.id;
    cout<<"Ingrese el sueldo del empleado:"<<endl;
    cin>>employee.sueldo;
    cout<<"Ingrese la antiguedad (años) del empleado:"<<endl;
    cin>>employee.antiguedad;
    return employee;
}
void llenarDatos(vector<Empleado> &lista, int n){
    for(int i = 0; i < n; i++){
        lista.push_back(pedirDatos());
    }
}
int contarSueldoMayor(vector<Empleado> &lista, double valorSueldo){
    int contador = 0;
    for(int i = 0; i < lista.size(); i++){
        if(lista[i].sueldo > valorSueldo){
            contador++;
        }
    }
    return contador;
}
double promedioAntiguedad(vector<Empleado> &lista){
    int suma = 0;
    for(int i = 0; i < lista.size(); i++){
        suma += lista[i].antiguedad;
    }
    return double(suma) / lista.size();
}
int main(){
    vector<Empleado> lista;
    int n;
    double valorSueldo;
    cout<<"ingrese el numero de empleados:"<<endl;
    cin>>n;
    cout<<"Ingrese un valor de sueldo para comparar "<<endl;
    cin>>valorSueldo;
    llenarDatos(lista, n);
    int cuantos = contarSueldoMayor(lista, valorSueldo);
    cout<<"Cantidad de empleados con sueldo mayor a "<<valorSueldo<<": "<<cuantos<<endl;
    double promAnt = promedioAntiguedad(lista);
    cout<<"Promedio de antigüedad de los empleados: "<<promAnt<<" años"<<endl;
    return 0;
}