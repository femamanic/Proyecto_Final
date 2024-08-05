#include "GerenteGeneral.h"
#include <iostream>
#include "structs.h"
using namespace std;
void verRegistroDeEmpleados(){
    for(int i=0;i<nEmpleados;i++){
        cout<<"El ID del empleado es: "<<empleado[i].ID<<endl;
        cout<<"El nombre del empleado es: "<<empleado[i].nombre<<endl;
        cout<<"El DNI del empleado es: "<<empleado[i].DNI<<endl;
        cout<<"El sueldo del empleado es: "<<empleado[i].sueldo<<endl;
        cout<<"El cargo del empleado es: "<<empleado[i].cargo<<endl;
        cout<<"----------------------------------------------------"<<endl;
    }
}