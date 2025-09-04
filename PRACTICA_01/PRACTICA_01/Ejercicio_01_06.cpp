// Materia: Programación I, Paralelo 4 
// Autor: Willy Edwin Tenorio Palza 
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica  
// Fecha creación: 21/08/2025 
// Número de ejercicio: 6

#include <iostream>
using namespace std;
int main()
{
    system("cls");
    system("chcp 65001");
    int numero=0;
    cout<<"ingresa un numero entero:";
    cin>>numero;
    if (numero>0){
        cout << "el numero es positivo " << endl;
    }
    else if (numero == 0)
    {
        cout << "el numero es cero  " << endl;
    }
    else {
        cout<< "el numero es negativo"<< endl;
    }
    return 0;
}