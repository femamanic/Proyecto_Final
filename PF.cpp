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

int main () {
    string user, pass;
    empleado[0].ID = "GG-001";
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
        }
    }
    return 0;
}