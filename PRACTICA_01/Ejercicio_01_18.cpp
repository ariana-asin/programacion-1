// Materia: Programación I, Paralelo 4 
// Autor: Willy Edwin Tenorio Palza 
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica  
// Fecha creación: 01/09/2025 
// Número de ejercicio: 18

#include <iostream>
using namespace std;
int main()
{
    system("cls");
    system("chcp 65001");
    for (int i=1; i<= 100; i++)
    {
        int numero= i;
        int suma=0;
        int divisor=1;
        while (divisor<=numero){
            if (numero % divisor ==0){
                suma= suma+1;
            }
            else{
                divisor= divisor +1;
            }
        }
        if (suma==2){
            cout<< numero<< endl;
        }
    
    }
    return 0;
}
