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
    int numero_1=0;
    int numero_2=0;
    cout<<"ingrese el primer numero"<<endl;
    cin>>numero_1;
    cout<<"ingrese el segundo numero"<<endl;
    cin>>numero_2;
    if (numero_1!= 0 && numero_1 % numero_2 == 0){
        cout << numero_1 << " es múltiplo de " << numero_2 << endl;
    } else if (numero_1 != 0 && numero_2 % numero_1 == 0) {
        cout << numero_2 << " es múltiplo de " << numero_1 << endl;
    } else {
        cout << "Ninguno es múltiplo del otro." << endl;
    }
    return 0;
}

