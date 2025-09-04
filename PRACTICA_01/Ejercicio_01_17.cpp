// Materia: Programación I, Paralelo 4 
// Autor: Willy Edwin Tenorio Palza 
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica  
// Fecha creación: 01/09/2025 
// Número de ejercicio: 16

#include <iostream>
using namespace std;
int main()
{
    system("cls");
    system("chcp 65001");
    int numero_1=0;
    int numero_2=0;
    int suma=0;
    int suma2 =0;
    cout<< "ingrese elprimer numero que quiera saber si es amigo o no:"<<endl;
    cin>>numero_1;
    cout<<"ingrese el segundo numero"<<endl;
    cin>> numero_2;
    for (int i = 1; i < numero_1; i++) 
    {
        if (numero_1 % i == 0) 
        {
            suma = suma + i;
        }
    }
    for (int i = 1; i < numero_2; i++) 
    {
        if (numero_2 % i == 0) 
        {
            suma2 = suma2 + i;
        }
    }
    if (suma == numero_2 && suma2 == numero_1) 
    {
        cout << "son numeros amigos" << endl;
    } 
    else 
    {
        cout << "Los numeros no son amigos" << endl;
    }
    return 0;
}


