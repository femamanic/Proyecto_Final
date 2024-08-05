#include "GerenteGeneral.h"
#include <iostream>
using namespace std;

void verReportesDeCompras() {
    int opcion, mes;
    do {
        system("cls");
        cout << "Menu Reportes de Compras\n";
        cout << "[1] Ver reporte de compras por mes\n";
        cout << "[2] Ver reporte de compras por año\n";
        cout << "[0] Salir\n";
        cout << "Opcion: "; cin >> opcion;
        switch (opcion) {
        case 1:
            cout << "Ingrese el mes: "; cin >> mes;
            cout << "Reporte de compras del mes " << mes << "\n";
            break;
        case 2:
            cout << "Reporte de compras del año\n";
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