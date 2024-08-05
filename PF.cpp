#include <iostream>
#include "structs.h"
#include "GerenteGeneral.h"
#include "GerenteDeTienda.h"
#include "Contador.h"
#include "DepartamentoDeTesoreria.h"
using namespace std;

int main () {
    system("cls");
    string user, pass;
    empleado[0].ID = "CEO-001";
    empleado[0].contra = "12345";
    cout << "ingresar" << "\n";
    cout << "ID: "; cin >> user;
    cout << "Password: "; cin >> pass;
    
    bool confirmar = false;

    for (int i = 0; i < 50; i++) {
        if (user == empleado[i].ID && pass == empleado[i].contra) {
            cout << "Bienvenido\n";
            confirmar = true;
            break;
        }
    }
    if (confirmar == false) {
        cout << "ID o Password incorrecta\n";
    }
    
    if (user.substr(0, 3) == "CEO") {
        menuGerenteGeneral();
    }
}