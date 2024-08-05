#include "GerenteGeneral.h"
#include <iostream>
using namespace std;

void verReportesDeVentas() {
    int opcion, mes;
    do {
        system("cls");
        cout << "Menu Reportes de Ventas\n";
        cout << "[1] Ver reporte de ventas por mes\n";
        cout << "[2] Ver reporte de ventas por año\n";
        cout << "[0] Salir\n";
        cout << "Opcion: "; cin >> opcion;
        switch (opcion) {
        case 1:
            cout << "Ingrese el mes: "; cin >> mes;
            cout << "Reporte de ventas del mes " << mes << "\n";
            break;
        case 2:
            cout << "Reporte de ventas del año\n";
            break;
        case 0:
            cout << "Saliendo...\n";
            break;
        default:
            cout << "Opcion no valida\n";
            break;
        }
    } while (opcion != 0);
}