// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 21/10/2025 
// Número de ejercicio: 2
#include <iostream>
using namespace std;
//recursividad para la potencia
int potencia (int base, int exponente){
    if(exponente==0){
        return 1;
    }
    else {
        return base*potencia (base,exponente-1);
    }
}
int main(){
    int a;
    int n;
    cout<<"ingresa la base:";
    cin>>a;
    cout<<"ingresa el exponente:";
    cin>>n;
    int resultado= potencia (a,n);
    cout<<"el resultado de la base a : "<< a <<" con el exponente n: "<< n <<"\n" <<"es:"<<resultado;
    return 0;
}