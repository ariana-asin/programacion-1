// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 21/10/2025 
// Número de ejercicio: 1 
#include <iostream>
using namespace std;
//recursividad para hallar la suma de digitos
int suma_digitos (int n){
    if (n==0) return 0;
    else return n%10 + suma_digitos(n/10);
}
int  main(){
    int N;
    cout<<"ingresa un numero entero positivo:";
    cin>>N;
    if (N<0){
        cout<<"Numero invalido, ingrese un numero positivo:";
        return 1;
    }
    int resultado= suma_digitos (N);
    cout<<"la suma de los digitos es :"<<resultado;
    return 0;
}