#include <iostream>
using namespace std;

struct registro{
    string ID;
    string nombre;
    string contra;
    float sueldo;
    int faltas;
    int asistencia;
} empleado [50];

registro empleadoGlobal; //variable global para que funcione con culalquier funcion

struct inventario{
    string nombre;
    string categoria;
    string marca;
    string tipo; //solido, liquido, electronico, etc. //no se imprime
    int cantidad; //se ve definido por el tipo
    string codigo;
    float precio;
    int unidades;
} producto [50];

inventario productoGlobal; //variable global para que funcione con culalquier funcion

int main () {
    string user, pass;
    empleado[0].ID = "CEO-001";
    empleado[0].contra = "1234";
    cout << "Registrarse" << "\n";
    cout << "ID: "; cin >> user;
    cout << "Password: "; cin >> pass;
    cout << "Registrado con exito" << "\n";
    for (int i = 0; i < 50; i++) {
        if (user == empleado[i].ID && pass == empleado[i].contra) {
            cout << "Bienvenido, " << empleado[i].nombre << "!" << "\n";
            break;
        }
        else {
            cout << "Usuario o contraseña incorrecta." << "\n";
            break;
        }
    }
    return 0;
}