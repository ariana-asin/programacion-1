// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 13/09/2025 
// Número de ejercicio: 7
#include <iostream>
using namespace std;
// Función para calcular el MCD 
int calcularMCD(int m, int n) {
    while (n != 0) {
        int residuo = m % n;
        m = n;
        n = residuo;
    }
    return m;
}
// Función para calcular el MCM
int calcularMCM(int m, int n, int mcd) {
    return (m * n) / mcd;
}
int main() {
    int numero1, numero2;
    cout << "Ingrese el primer numero entero positivo";
    cin >> numero1;
    cout << "Ingrese el segundo numero entero positivo";
    cin >> numero2;
    // Validar que los números sean positivos
    if (numero1 <= 0 || numero2 <= 0) {
        cout << "Por favor, ingrese números POSITIVOS" << endl;
        return 1;
    }
    int numeroMayor, numeroMenor;
    if (numero1 > numero2) {
        numeroMayor = numero1;
        numeroMenor = numero2;
    } else {
        numeroMayor = numero2;
        numeroMenor = numero1;
    }
    int mcd = calcularMCD(numeroMayor, numeroMenor);
    int mcm = calcularMCM(numeroMayor, numeroMenor, mcd);
//resultados
    cout << "El MCD de " << numero1 << " y " << numero2 << " es: " << mcd << endl;
    cout << "El MCM de " << numero1 << " y " << numero2 << " es: " << mcm << endl;
    return 0;
}

