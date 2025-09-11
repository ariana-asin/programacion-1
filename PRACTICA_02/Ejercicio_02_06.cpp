// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta 
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 06/09/2025 
// Número de ejercicio: 6
#include <iostream>
using namespace std;
#include<ctime>
#include<cstdlib>
int main()
{
    system("cls");
    system("chcp 65001");
    srand(time(NULL));
    int numero = 0;
    cout << "cuantos numero aleatorios quiere obtener?" << endl;
    cin >> numero;
    int divisor = 0;
    int numero_primo = 0;
    int no_primos = 0;
    for (int i = 1; i <= numero; i++) {
        int numero_aleatorio = (rand() % 10000) + 1;
        cout << numero_aleatorio << endl;
        divisor = 0;
        // Contar divisores del numero_aleatorio
        for (int j = 1; j <= numero_aleatorio; j++) {
            if (numero_aleatorio % j == 0) {
                divisor=divisor+1;
            }
        }
        // Determinar si es primo
        if (divisor == 2) {
            numero_primo=numero_primo+1;
        } else {
            no_primos=no_primos+1;
        }
    }
    cout <<"hay"<< numero_primo << " numeros primos" << endl;
    cout <<"hay"<< no_primos << " numeros que no son primos" << endl;
    return 0;
}