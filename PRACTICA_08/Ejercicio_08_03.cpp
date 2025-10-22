// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 21/10/2025 
// Número de ejercicio: 3
#include <iostream>
using namespace std;
//recursividad para serie fibonacci
int fibonacci(int n){
    if (n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(){
    int numero;
    cout<<"ingresa un numero del cual quiera que se devuelva el enésimo número en la secuencia de Fibonacci. ";
    cin>>numero;
    int serie_fibonacci= fibonacci(numero);
    cout<<"el termino buscado de la serie fibonacci es:"<<serie_fibonacci;
    return 0;
}