#include "Contador.h"
#include "structs.h"
#include <iostream>

using namespace std;

void AprobarCheques() {
    int opcion; op;
    for (int i = 0; i < (nEmpleados + 1); i++){
        cout << "Codigo:\t" << empleado[i].ID;
        cout << "Nombre:\t" << empleado[i].nombre;
        cout << "DNI:\t" << empleado[i].DNI;
        cout << "Sueldo:\t" << empleado[i].sueldo;
        cout << "Area de trabajo:\t" << empleado[i].area;
        cout << "-----------------------------------\n";
        cout << "Aprobar cheque? [1] Si [0] No: "; cin >> opcion;
        switch (opcion) {
            case 1:
                empleado[i].sueldoAprobado = true;

                break;
            case 0:
                cout << "\r[1] Corregir";
                cout << "[2] Reportar";
                cout << "-----------------------------------\n";
                cout << "Opcion: "; cin >> op;
                switch (op) {
                    case 1:
                        cout << "Codigo:\t" << empleado[i].ID;
                        cout << "Nombre:\t" << empleado[i].nombre;
                        cout << "DNI:\t" << empleado[i].DNI;
                        cout << "Sueldo:\t" << empleado[i].sueldo;
                        cout << "Area de trabajo:\t" << empleado[i].area;
                        empleado[i].sueldoAprobado = true;
                        break;
                    case 2:
                        cout << "Reportado\n";
                        break;
                    default:
                        cout << "Opcion no valida\n";
                        break;
                }
                break;
        }
    }   
}
