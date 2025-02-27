#ifndef STRUCTS_H
#define STRUCTS_H

#include <string>

using namespace std;

struct registro{
    string ID;
    string nombre;
    string DNI;
    string contra;
    float sueldo;
    string Area;
    bool sueldoAprobado = false;
};

extern int nEmpleados; //variable global para el total de empleados que hay en la empresa

extern registro empleado [50]; //variable global para que funcione con culalquier funcion

struct inventario{
    string nombre;
    string categoria;
    string marca;
    string codigo;
    float precio;
    float costo;
    int unidades;
};

extern int nProductos; //variable global para el total de productos que hay en la empresa

extern inventario producto [50]; //variable global para que funcione con culalquier funcion

#endif // STRUCTS_H
