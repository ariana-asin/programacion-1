// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 13/09/2025 
// Número de ejercicio: 1
#include <iostream>
using namespace std;
//cambio de valores
void IntercambiarValores(int &a, int &b) {
    a = a+b;
    b = a-b;
    a=a-b;
}
int main() {
    int num1, num2;
    cout << "Ingrese un primer numero: ";
    cin >> num1;
    cout << "Ingrese un segundo numero: ";
    cin >> num2;
    cout << "Antes el numero 1 era = " << num1 << " y el numero 2 = " << num2 << endl;
    IntercambiarValores(num1, num2);
    cout << "Después el numero 2 tomo el valor de = " << num1 << "y el numero 2 = " << num2 << endl;
    return 0;
}
