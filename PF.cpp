#include <iostream>
#include "structs.h"
#include "GerenteGeneral.h"
#include "GerenteDeTienda.h"
#include "database.h"
#include "CajaRegistradora.h"
using namespace std;

int main () {
    basedatosEmpleados();
    basedatosProductos();
    string user, pass;
    do {
        system("cls");
        cout << "ingresar" << "\n";
        cout << "ID: "; cin >> user;
        cout << "Password: "; cin >> pass;
        
        bool confirmar = false;

        for (int i = 0; i < nEmpleados; i++) {
            if (user == empleado[i].ID && pass == empleado[i].contra) {
                cout << "Bienvenido\n";
                confirmar = true;
                break;
            }
        }
        if (confirmar == false) {
            cout << "ID o Password incorrecta\n";
        } else if (user.substr(0, 3) == "CEO") {
            menuGerenteGeneral();
        } else if (user.substr(0, 3) == "SMT") {
            menuGerenteDeTienda();
        } else if (user.substr(0, 3) == "CAS") {
            menuCajaRegistradora();
        }
    } while (user == "exit");
    return 0;
}