// Materia: Programación I, Paralelo 4 
// Autor: Willy Edwin Tenorio Palza 
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica  
// Fecha creación: 01/09/2025 
// Número de ejercicio: 16

#include <iostream>
using namespace std;
int main()
{
    system("cls");
    system("chcp 65001");
    int numero=0;
    int registro=0;
    int divisor=1;
    cout <<"ingrese el numero que quiera saber si es primo o no"<< endl;
    cin>>numero;
    while(divisor <= numero)
    {
        if (numero % divisor==0){
            registro = registro+1;
            divisor = divisor+1;
        }
        else
        {
            divisor= divisor+1;
        }
    }
    if (registro == 2)
    {
        cout<<numero<<" es un numero primo"<< endl;
    }
    else{
        cout<<numero<<"el numero ingresado no es primo"<<endl;
    }
    return 0;
}

