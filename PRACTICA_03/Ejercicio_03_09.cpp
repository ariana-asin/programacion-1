// Materia: Programación I, Paralelo 4 
// Autor: Ariana Michelle Asin Ergueta
// Carnet: 12923563 L.P. 
// Carrera del estudiante: Ingeniería biomedica 
// Fecha creación: 09/09/2025 
// Número de ejercicio: 9
#include <iostream>
using namespace std;
// Función para calcular tiempo en el trabajo
void calcular_tiempo_trabajado(int minutos_trabajados) 
{
    const int jornada_laboral = 8 * 60; 
    int resta = minutos_trabajados - jornada_laboral;
    if (resta > 0) 
    {
        cout << "Ha trabajado " << resta << " minutos extra" << endl;
    } 
    else if (resta < 0) 
    {
        cout << "Debe " << -resta << " minutos a la empresa" << endl;
    } 
    else 
    {
        cout << "Ha cumplido con lo requerido la jornada laboral" << endl;
    }
}
int main() 
{
    int minutos;
    cout << "Ingrese el tiempo que ha trabajado en minutos: ";
    cin >> minutos;
    calcular_tiempo_trabajado(minutos);
    return 0;
}
