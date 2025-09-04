// Materia: Programación I, Paralelo 4 
// Autor: Willy Edwin Tenorio Palza 
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica  
// Fecha creación: 01/09/2025 
// Número de ejercicio: 19

#include <iostream>
using namespace std;
int main()
{
    system("cls");
    system("chcp 65001");
    int numero_entero;
    int contador=0;
    cout<<"imgrese un numero entero"<<endl;
    cin>>numero_entero;
    if (numero_entero == 0) {
        cout << "Este numero tiene: 1 digito" << endl;
    }
    while (numero_entero>0){
        numero_entero= numero_entero/10;
        contador= contador +1;
    }
    cout<<"este numero tiene:"<<contador<<"digitos"<<endl;
    return 0;
}
