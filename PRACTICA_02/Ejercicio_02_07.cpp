// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta 
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 06/09/2025 
// Número de ejercicio: 7
#include <iostream>
using namespace std;
#include<ctime>
#include<cstdlib>
int main()
{
    system("cls");
    system("chcp 65001");
    srand(time(NULL));
    int numero=0;
    cout<<"ingrese el numero de niños que desea calular de maneria aleatoria"<<endl;
    cin>>numero;
    int numero_aleatorio_1=(rand()%numero)+1;//semilla que vaya hasta el numero
    cout<<"los niños de 1 año son:"<< numero_aleatorio_1<<endl;
    int numero_aleatorio_2=(rand()%(numero-numero_aleatorio_1))+1;//restar para que no se tenga en cuenta esos valores
    cout<<"los niños de 2 años son:"<< numero_aleatorio_2<<endl;
    int numero_aleatorio_3=(numero-numero_aleatorio_1-numero_aleatorio_2);//el sobrante va a la variable 3
    cout<<"los niños de 3 años son:"<< numero_aleatorio_3<<endl;
    int consumo= (numero_aleatorio_1*6)+(numero_aleatorio_2*3)+(numero_aleatorio_3*2);
    cout<<"los pañales que consumieron los " << numero << " niños en un dia fueron " << consumo << endl;
    return 0;
}
