#include "GerenteGeneral.h"
#include <iostream>
#include "structs.h"
using namespace std;
void verRegistroDeEmpleados(){
    for(int i=0;i<nEmpleados;i++){
        cout<<"el ID del empleado es: "<<empleado[i].ID<<endl;
        cout<<"el nombre del empleado es: "<<empleado[i].nombre<<endl;
        cout<<"el sueldo del empleado es: "<<empleado[i].sueldo<<endl;
    }
}