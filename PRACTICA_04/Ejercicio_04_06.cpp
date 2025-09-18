// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 13/09/2025 
// Número de ejercicio: 6
#include <iostream>
using namespace std;
int numero_primo(int numero) {
    if (numero <= 1) // Los números que sean menores o iguales a 1 no son primos
        return 0;
    for (int i = 2; i <= numero / 2; i++) { 
        if (numero % i == 0) //no es primo
            return 0;
    }
    return 1; // Es primo
}
int SumaDigitos(int numero) {
    int suma = 0;
    while (numero > 0) {
        int digito = numero % 10;
        if (digito != 0)
        suma=suma+ digito;
        numero= numero/10;
    }
    return suma;
}
int main() {
    int numero;
    cout << "Ingrese un numero entero que sea mayor a cero=";
    cin >> numero;
    if (numero <= 0) {
        cout << "Por favor, ingrese un número mayor a cero" << endl;
        return 1;
    }
    int suma = SumaDigitos(numero);
    cout << "La suma de los digitos distintos de cero es=" << suma << endl;
    if (numero_primo(suma)) {
        cout << "La suma de los digitos es un numero primo" << endl;
    } else {
        cout << "La suma de los digitos no es un numero primo" << endl;
    }
    return 0;
}

