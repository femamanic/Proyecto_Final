#include "Contador.h"
#include "structs.h"
#include <iostream>

using namespace std;

void AprobarCheques() {
    int opcion;
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
                empleado[i].sueldoAprobado = false;
                break;
        }
    }    
}
