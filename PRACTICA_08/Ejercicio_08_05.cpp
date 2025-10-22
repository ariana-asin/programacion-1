// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 22/10/2025 
// Número de ejercicio: 5
#include <iostream>
using namespace std;
// Función recursiva para sumar los elementos del arreglo
int suma(int arreglo[], int cantidad) {
    if (cantidad == 0) {
        return 0; 
    }
    return arreglo[cantidad - 1] + suma(arreglo, cantidad - 1); 
}
int main() {
    int cantidad;
    cout << "ingrese cuántos números quieres sumar ";
    cin >> cantidad;
    int arreglo[cantidad]; 
    cout << "Introduce los números:\n";
    for (int i = 0; i < cantidad; i++) {
        cin >> arreglo[i]; 
    }
    int resultado = suma(arreglo, cantidad);
    cout << "La suma de los números es: " << resultado << endl; 
    return 0;
}