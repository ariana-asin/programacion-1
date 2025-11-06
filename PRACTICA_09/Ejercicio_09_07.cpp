// Materia: Programación I, Paralelo 4 
// Autor:Ariana Michelle Asin Ergueta
// Fecha creación: 03/11/2025 
// Número de ejercicio: 7
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
struct Producto {//crear estructura
    char nombre[20];
    char codigo[20];
    double precio;
    int cantidad_en_inventario;
    char observaciones[50];
};
Producto pedirDatos() {
    Producto prod;
    cin.ignore();
    cout << "Ingrese el nombre del producto:" << endl;
    cin.getline(prod.nombre,20);
    cout << "Ingrese el codigo del producto:" << endl;
    cin.getline(prod.codigo,20);
    cout << "Ingrese el precio del producto:" << endl;
    cin >> prod.precio;
    cout << "Ingrese la cantidad en inventario:" << endl;
    cin >> prod.cantidad_en_inventario;
    cin.ignore();
    // Si la cantidad es menor a 5 se pone que el producto esta en baja calidad
    if (prod.cantidad_en_inventario < 5) {
        strcpy(prod.observaciones, "PRODUCTO CON BAJA CANTIDAD DE INVENTARIO");
    } else {
        strcpy(prod.observaciones, ""); // sin observaciones
    }
    return prod;
}
void llenarDatos(vector<Producto> &lista, int n) {
    for(int i = 0; i < n; i++) {
        lista.push_back(pedirDatos());
    }
}
Producto productoMasCaro(const vector<Producto> &lista) {
    Producto masCaro = lista[0];
    for(int i = 1; i < lista.size(); i++) {
        if(lista[i].precio > masCaro.precio) {
            masCaro = lista[i];
        }
    }
    return masCaro;
}
int cantidadTotalInventario(const vector<Producto> &lista) {
    int total = 0;
    for(int i = 0; i < lista.size(); i++) {
        total += lista[i].cantidad_en_inventario;
    }
    return total;
}
int main(){
    vector<Producto> lista;
    int n;
    cout << "ingrese la cantidad de productos" << endl;
    cin >> n;
    llenarDatos(lista, n);
    Producto caro = productoMasCaro(lista);
    cout << "\nProducto más caro registrado:" << endl;
    cout << "Nombre: " << caro.nombre << endl;
    cout << "Codigo: " << caro.codigo << endl;
    cout << "Precio: " << caro.precio << endl;
    cout << "Cantidad en inventario: " << caro.cantidad_en_inventario << endl;
    cout << "Observaciones: " << caro.observaciones << endl;
    int total = cantidadTotalInventario(lista);
    cout << "\nCantidad total de productos en inventario: " << total << endl;
    return 0;
}