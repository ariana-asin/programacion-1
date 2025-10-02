// Materia: Programación I, Paralelo 4
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 02/10/2025
// Número de ejercicio: 7
// Problema planteado:  Programa que declare un vector de diez elementos enteros y pida números para
//rellenarlo hasta que se llene el vector o se introduzca un número negativo. Entonces se
//debe imprimir el vector (sólo los elementos introducidos).
#include <iostream>
using namespace std;
int main() {
    int vector[10];
    int i = 0;
    int numero;   
    cout << "Ingrese  10 numeros para terminar ingrese un numero negativo:" << endl;
    while(i < 10) 
    {
        cout << "Numero " << (i + 1) << ": ";
        cin >> numero;
        if(numero >= 0) {
            vector[i] = numero;
            i++;
        } else {
            i = 10; // Terminar el ciclo
        }
    }
    // Mostrar resultados
    cout << "los elementos del vector:" << endl;
    for(int j = 0; j < i; j++) {
        cout << vector[j] << " ";
    }
    cout << "total: " << i << endl;
    return 0;
}
