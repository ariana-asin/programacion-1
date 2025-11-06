// Materia: Programación I, Paralelo 4 
// Autor:Ariana Michelle Asin Ergueta
// Fecha creación: 05/11/2025 
// Número de ejercicio: 10
#include <iostream>
#include <cstring>
using namespace std;
struct Fraccion {
    int numerador;
    int denominador;
};
struct FraccionSimplificada {
    int numerador;
    int denominador;
};
// Función para calcular el MCD usando el algoritmo de Euclides 
int MCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return MCD(b, a % b);
    }
}
FraccionSimplificada ReducirFraccion(Fraccion fraccionOriginal) {
    FraccionSimplificada fraccionResultante;
    int mcd = MCD(fraccionOriginal.numerador, fraccionOriginal.denominador);
    fraccionResultante.numerador = fraccionOriginal.numerador / mcd;
    fraccionResultante.denominador = fraccionOriginal.denominador / mcd;
    if (fraccionResultante.denominador < 0) {
        fraccionResultante.denominador = -fraccionResultante.denominador;
        fraccionResultante.numerador = -fraccionResultante.numerador;
    }
    return fraccionResultante;
}
int main() {
    Fraccion fraccionIngresada;
    cout << "Ingrese el numerador:" << endl;
    cin >> fraccionIngresada.numerador;
    cout << "Ingrese el denominador:" << endl;
    cin >> fraccionIngresada.denominador;
    FraccionSimplificada fraccionSimplificada = ReducirFraccion(fraccionIngresada);
    cout << "Fraccion simplificada: "
        << fraccionSimplificada.numerador <<"/"<< fraccionSimplificada.denominador << endl;
    return 0;
}
