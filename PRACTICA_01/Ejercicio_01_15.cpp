// Materia: Programación I, Paralelo 4 
// Autor: Willy Edwin Tenorio Palza 
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica  
// Fecha creación: 21/08/2025 
// Número de ejercicio: 1 

#include <iostream>
using namespace std;
int main()
{
    system("cls");
    system("chcp 65001");
    int numeros_a_ingresar;
    float notas;
    float suma = 0;
    cout << "Ingrese la cantidad de notas que ingrasara: "<<endl;
    cin >> numeros_a_ingresar;
    for (int i = 1; i <= numeros_a_ingresar; i++) 
    {
        float nota;
        cout << "Nota " << i << ": ";
        cin >> nota;
        suma += nota;
    }
    int promedio = suma / numeros_a_ingresar;
    cout << "El promedio es: " << promedio << endl;
    return 0;
}
    
    
