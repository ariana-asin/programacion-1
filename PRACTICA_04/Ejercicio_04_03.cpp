// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 13/09/2025 
// Número de ejercicio: 3
#include <iostream>
using namespace std;
//modificar los valores
void ModificarValores(int num_valor, int num_referencia){
    num_valor=num_valor*2;
    num_referencia=num_referencia+10;
    cout<<"los valores dentro de la funcion son:"<<"valor="<<num_valor<<"y"<<"referencia"<<num_referencia<<endl;
}
int main(){
    int valor;        
    int referencia;  
    cout<<"ingrese un numero por valor"<<endl;
    cin>>valor;
    cout<<"ingrese un numerpo por referencia"<<endl;
    cin>>referencia;
    cout << "Antes de llamar a la funcion: valor = " << valor << " y referencia = " << referencia << endl;
    ModificarValores(valor, referencia);
    cout << "Despues de llamar a la funcion: valor = " << valor 
         << " y referencia = " << referencia << endl;
    return 0;
}

