#include <iostream>
#include <fstream>
using namespace std;
struct registro_cliente
{
    char nombre [20];
    int edad;
    char email[20];
    char historial[20];
    char carnet [20];
    //int observaciones;
};
struct Habitacion
{
    int numero;
    float precio_por_noche;
    bool estado;
    int capacidad;
    int servicios;
};
struct reserva
{
    int fecha_de_entrada;
    int salida;
    int estado_reserva;
    float garantia;
    int extras;
};
struct facturacion
{
    float total;
    int metodo_de_pago;
    bool estado_pago;
};
struct administracion
{
    char lista_clientes[50];
    char lista_habitaciones[50];
    char lista_reservas [50];
    char lista_facturas [50];
};





