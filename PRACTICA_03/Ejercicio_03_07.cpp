// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica 
// Fecha creación: 09/09/2025 
// Número de ejercicio: 7
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void procesar_numero_de_alumnos(int numero_de_alumnos) 
{
    int suma_edades = 0;
    int suma_alturas = 0;
    int mayores_de_18 = 0;
    int mas_175 = 0;
    cout << "Edad\tAltura(cm)" << endl;
    for (int i = 0; i < numero_de_alumnos; i++) 
    {
        int edad = rand() % 35 + 1;           // 1 a 35 años
        int altura = rand() % 81 + 120;       // 120 a 200 cm de altura
        cout << edad << "\t" << altura << endl;
        suma_edades= suma_edades + edad;
        suma_alturas= suma_alturas + altura;
        if (edad > 18) mayores_de_18=mayores_de_18+1;
        if (altura > 175) mas_175=mas_175+1;
    }
    cout << "Edad media: " << (float)suma_edades / numero_de_alumnos << endl;
    cout << "Altura media: " << (float)suma_alturas / numero_de_alumnos << " cm" << endl;
    cout << "Cantidad de alumnos mayores de 18 años: " << mayores_de_18 << endl;
    cout << "Cantidad de alumnos que miden más de 175 cm: " << mas_175 << endl;
}
int main() 
{
    srand(time(NULL));
    int numero_de_alumnos;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> numero_de_alumnos;
    procesar_numero_de_alumnos(numero_de_alumnos);
    return 0;
}
