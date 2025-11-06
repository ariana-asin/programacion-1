// Materia: Programación I, Paralelo 4 
// Autor:Ariana Michelle Asin Ergueta
// Fecha creación: 05/11/2025 
// Número de ejercicio: 9
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
struct Alumno {//crear estructura
    char nombre[20];
    double T1;
    double T2;
    double T3;
    double T4;
    double EF; // examen final
    double NF; // nota final
};
Alumno pedirDatos() {
    Alumno alum;
    cin.ignore();
    cout << "Ingrese el nombre del alumno:" << endl;
    cin.getline(alum.nombre, 20);
    cout << "Ingrese nota T1:" << endl;
    cin >> alum.T1;
    cout << "Ingrese nota T2:" << endl;
    cin >> alum.T2;
    cout << "Ingrese nota T3:" << endl;
    cin >> alum.T3;
    cout << "Ingrese nota T4:" << endl;
    cin >> alum.T4;
    cout << "Ingrese nota EF (examen final):" << endl;
    cin >> alum.EF;
    // calcular NP 
    double NP = (alum.T1 + alum.T2 + alum.T3 + alum.T4) / 4;
    // calcular NF =
    alum.NF = 0.7 * NP + 0.3 * alum.EF;
    return alum;
}
void llenarDatos(vector<Alumno> &lista, int n) {
    for (int i = 0; i < n; i++) {
        lista.push_back(pedirDatos());
    }
}
void mostrarResultados(const vector<Alumno> &lista) {
    double suma = 0;
    double minimo = lista[0].NF;
    double maximo = lista[0].NF;
    for (int i = 0; i < lista.size(); i++) {
        cout << "\nAlumno: " << lista[i].nombre << endl;
        cout << "Nota final: " << lista[i].NF << endl;
        suma += lista[i].NF;
        if (lista[i].NF < minimo){
            minimo = lista[i].NF;
        } 
        if (lista[i].NF > maximo) {
            maximo = lista[i].NF;
        }
    }
    double promedio = suma / lista.size();
    cout << "Resumen del curso:" << endl;
    cout << "Promedio de notas finales: " << promedio << endl;
    cout << "Nota mínima: " << minimo << endl;
    cout << "Nota máxima: " << maximo << endl;
}
int main() {
    vector<Alumno> lista;
    int n;
    cout << "ingrese la cantidad de alumnos: " << endl;
    cin >> n;
    llenarDatos(lista, n);
    mostrarResultados(lista);
    return 0;
}
