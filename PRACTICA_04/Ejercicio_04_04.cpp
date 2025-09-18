// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 13/09/2025 
// Número de ejercicio: 4
#include <iostream>
using namespace std;
//funcion para conversion
float ConvertirCelsiusAFahrenheit(float celsius){
    float convertir= (celsius*1.8)+32;
    return convertir;
}
float MayorTemperatura(float temperatura_1, float temperatura_2 ){
    if (temperatura_1>temperatura_2){
        return temperatura_1;
    }
    else{
        return temperatura_2;
    }
}
int main(){
    float celsius1, celsius2;
    cout<<"ingrese la temperatura 1 en celsuis"<<endl;
    cin>>celsius1;
    cout<<"ingrese la temperatura 2 en celsius"<<endl;
    cin>>celsius2;
    float fahrenheit1= ConvertirCelsiusAFahrenheit(celsius1);
    float fahrenheit2=ConvertirCelsiusAFahrenheit(celsius2);
    cout<<celsius1<<"grados centigrados son:"<<fahrenheit1<<"grados fahrenheit"<<endl;
    cout<<celsius2<<"grados centigrados son:"<<fahrenheit2<<"grados fahrenheit"<<endl;
    float mayor= MayorTemperatura(fahrenheit1,fahrenheit2);
    cout<<"la mayor temperatura en Fahrenheit es"<<mayor<<endl;
    return 0;
}

