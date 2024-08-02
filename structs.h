#ifndef STRUCTS_H
#define STRUCTS_H

#include <string>

using namespace std;

struct registro{
    string ID;
    string nombre;
    string contra;
    float sueldo;
    int faltas;
    int asistencia;
};

extern registro empleado [50]; //variable global para que funcione con culalquier funcion

struct inventario{
    string nombre;
    string categoria;
    string marca;
    string tipo; //solido, liquido, electronico, etc. //no se imprime
    int cantidad; //se ve definido por el tipo
    string codigo;
    float precio;
    int unidades;
};

extern inventario producto [50]; //variable global para que funcione con culalquier funcion

#endif // STRUCTS_H
