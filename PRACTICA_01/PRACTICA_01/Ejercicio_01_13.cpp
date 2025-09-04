// Materia: Programación I, Paralelo 4 
// Autor: Willy Edwin Tenorio Palza 
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica  
// Fecha creación: 21/08/2025 
// Número de ejercicio: 1 

#include <iostream>
using namespace std;
int main()
{
    system("cls");
    system("chcp 65001");
    int numero;
    int suma_numeros=0;
    cout<<"ingrese un numero entero:"<<endl;
    cin>>numero;
    for(int i=1; i<=numero; i++ )
    {
        suma_numeros+=i;
    }
    cout<<"la suma de los numeros da un total de:"<<suma_numeros<<endl;
    return 0;
}
