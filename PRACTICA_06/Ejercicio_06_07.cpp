// Materia: Programación I, Paralelo 1 
// Autor: Ariana Michelle Asin Ergueta
// Fecha creación: 7/10/25
// Número de ejercicio: 7
// Problema planteado:
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    srand(time(0));

    int num_pixeles = 0;
    cout << "Cantidad de píxeles en la imagen: ";
    cin >> num_pixeles;

    vector<int> datos_imagen(num_pixeles);
    for (int i = 0; i < num_pixeles; i++) {
        datos_imagen[i] = rand() % 256;
    }

    vector<int> contador_rangos(26, 0);  // 26 rangos de tamaño ~10

    for (int i = 0; i < num_pixeles; i++) {
        int indice_rango = datos_imagen[i] / 10;
        contador_rangos[indice_rango]++;
    }

    cout << "Conteo de píxeles en cada rango:" << endl;
    for (int r = 0; r < contador_rangos.size() - 1; r++) {
        cout << "Rango " << (r * 10) << "-" << (r * 10 + 9) << ": "
             << contador_rangos[r] << " píxeles" << endl;
    }
    cout << "Rango 250-255: " << contador_rangos[25] << " píxeles" << endl;

    return 0;
}
