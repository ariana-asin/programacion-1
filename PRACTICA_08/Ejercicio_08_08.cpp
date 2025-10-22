// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 22/10/2025 
// Número de ejercicio: 8
#include <iostream>
using namespace std;
//recursividad para conjetura de Ullman
int Ullman(int n){
    cout << n << endl;
    if (n == 1) {
        return 0;  
    } 
    if(n%2==0){
        return 1+Ullman (n/2);
    }
    else{
        return 1+Ullman (n*3+1);
    }
}
int main(){
    int numero;
    cout<<"ingresa un numero mayor a 1:";
    cin>>numero;
    if (numero<=1){
        cout<<"el numero ingresado debe ser mayor a 1";
        return 1;
    }
    int resultado=Ullman(numero);
    cout<<"el resultado es:"<<resultado;
    return 0;
}