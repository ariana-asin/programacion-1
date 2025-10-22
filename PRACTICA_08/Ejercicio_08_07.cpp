// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 22/10/2025 
// Número de ejercicio: 7
#include <iostream>
using namespace std;
//recursividad para la suma de n elementos elevados al cuadrado
int potencia(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return (n*n)+potencia(n-1);
    }
}
int main(){
    int numero;
    cout<<"ingresa el numero de elementos:";
    cin>>numero;
    int resultado=potencia(numero);
    cout<<"el resultado es:"<<resultado;
}