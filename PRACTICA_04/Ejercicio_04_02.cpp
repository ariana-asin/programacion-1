// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 13/09/2025 
// Número de ejercicio: 2
#include <iostream>
using namespace std;
//definir la funcion
float CalcularVolumen (float radio, float altura=10){
    altura=10;
    float volumen= 3.14*radio*radio*altura;//formula para calcular el volumen
    return volumen;
}
int main()
{
    float radio;
    cout<<"ingrese el radio para calcular el volumen"<<endl;
    cin>>radio;
    float volumen=CalcularVolumen (radio);
    cout<<"el volumen es de "<<volumen<<endl;
    return 0;
}
