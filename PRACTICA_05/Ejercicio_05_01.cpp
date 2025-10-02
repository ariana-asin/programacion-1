// Materia: Programación I, Paralelo 4
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 01/10/2025
// Número de ejercicio: 1
// Problema planteado:1. Escriba un programa con 6 funciones utilizando vectores para lo siguiente:
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// a. Función para 100 voltajes de precisión doble
void generarVoltajes() {
    double voltajes[100];
    cout << "a) 100 Voltajes entre  (20.00V - 220.00V):" << endl;
    for(int i = 0; i < 100; i++) {
        // Generar número entre 2000 y 22000
        voltajes[i] = 20.00 + (rand() % 20001) / 100.0;
        cout << voltajes[i] << "V ";
        if((i+1) % 10 == 0) cout << endl;
    }
    cout << endl;
}
// b. Función para 50 temperaturas de precisión doble
void generarTemperaturas() {
    double temperaturas[50];
    cout << "b) 50 temperaturas entre (0.00 - 100.00):" << endl;
    for(int i = 0; i < 50; i++) {
        // Generar número entre 0 y 10000
        temperaturas[i] = (rand() % 10001) / 100.0;
        cout << temperaturas[i] << "°C ";
        if((i+1) % 10 == 0) cout << endl;
    }
    cout << endl;
}
// c. Función para 30 caracteres alfanuméricos
void generarCaracteres() {
    char caracteres[30];
    cout << "c) 30 Caracteres alfanumericos:" << endl;
    for(int i = 0; i < 30; i++) {
        // Elegir mayúsculas o minúsculas
        int tipo = rand() % 3;
        if(tipo == 0) {
            caracteres[i] = '0' + rand() % 10;       
        }
        else if(tipo == 1) {
            caracteres[i] = 'A' + rand() % 26;      
        }
        else {
            caracteres[i] = 'a' + rand() % 26;      
        }
        cout << caracteres[i] << " ";
        if((i+1) % 10 == 0) cout << endl;
    }
    cout << endl;
}
// d. Función para 100 años en número entero
void generarAños() {
    int años[100];
    cout << "d) 100 años (1990 - 2025):" << endl;
    for(int i = 0; i < 100; i++) {
        // Generar un número entre 1990 y 2025
        años[i] = 1990 + rand() % 36;
        cout << años[i] << " ";
        if((i+1) % 10 == 0) cout << endl;
    }
    cout << endl;
}
// e. Función para 32 velocidades de precisión doble
void generarVelocidades() {
    double velocidades[32];
    cout << "e) 32 Velocidades entre  (10.00 - 300.00):" << endl;
    for(int i = 0; i < 32; i++) {
        // Generar número entre 1000 y 30000, luego dividir entre 100
        velocidades[i] = 10.00 + (rand() % 29001) / 100.0;
        cout << velocidades[i] << " ";
        if((i+1) % 8 == 0) cout << endl;
    }
    cout << endl;
}
// f. Función para 1000 distancias de precisión doble
void generarDistancias() {
    double distancias[1000];
    cout << "f) 1000 distancias (1.00 - 1000.00):" << endl;
    cout << "las primeras 20:" << endl;
    for(int i = 0; i < 1000; i++) {
        // Generar número entre 100 y 1000000
        distancias[i] = 1.00 + (rand() % 999001) / 1000.0;
        if(i < 20) {
            cout << distancias[i] << " ";
        }
    }
    cout << endl;
}
int main() {
    // semilla de números aleatorios
    srand(time(0));
    cout << "EJERCICIO 1 - las 6 funciones son:" << endl;
    // Llamar a las 6 funciones
    generarVoltajes();
    generarTemperaturas();
    generarCaracteres();
    generarAños();
    generarVelocidades();
    generarDistancias();
    return 0;
}
