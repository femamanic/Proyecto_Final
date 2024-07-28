#include <iostream>
using namespace std;

struct registro{
    int numero;
    string nombre;
    float sueldo;
    int faltas;
    int asistencia;
} empleado [50];

int main () {
    string user, pass;
    cout << "Registrarse" << "\n";
    cout << "User: "; cin >> user;
    cout << "Password: "; cin >> pass;
    cout << "Registrado con exito" << "\n";
    return 0;
}