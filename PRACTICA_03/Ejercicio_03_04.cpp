// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica 
// Fecha creación: 08/09/2025 
// Número de ejercicio: 4
#include <iostream>
using namespace std;
//uso de float para incluyir decimales
float IMC(float peso, float altura) 
{
    return peso / (altura * altura);
}

int main() {
    float peso;
    float altura;
    cout << "Ingrese el peso en kilogramos: ";
    cin >> peso;
    cout << "Ingrese la altura en metros: ";
    cin >> altura;
    float imc = IMC(peso, altura);
    cout << "El IMC es: " << imc << endl;
    return 0;
}
