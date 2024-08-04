#include "Contador.h"
#include "GerenteGeneral.h"
#include <iostream>
using namespace std;

void menuContador(){
    int opcion;
    do {
        system("cls");
        cout << "Menu Contador" << "\n";
        cout << "[1] Aprobar cheques" << "\n";
        cout << "[2] Ver reportes de compras\n";
        cout << "[3] Ver reportes de ventas\n";
        cout << "[0] Salir" << "\n";
        cout << "Opcion: "; cin >> opcion;
        switch (opcion) {
        case 1:
            AprobarCheques();
            break;
        case 2:
            verReportesDeCompras();
            break;
        case 3:
            verReportesDeVentas();
            break;
        case 0:
            cout << "Saliendo..." << "\n";
            break;
        default:
            cout << "Opcion no valida" << "\n";
            break;
        }
    } while (opcion != 0);
}