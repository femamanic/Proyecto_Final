#include "GerenteGeneral.h"
#include <iostream>
#include "structs.h"
using namespace std;

void Contratar(){
    int n,e=0;
    cout<<"usted a ingresado a la funcion contratar"<<endl;
    cout<<"ingrese la cantidad de empleados a contratar: ";cin>>n;
    for(int i=0;i<n;i++){
        nEmpleados=nEmpleados+1;
        cin.ignore( );
        cout<<"ingrese el ID del nuevo trabajador: ";getline(cin, registro[nEmpleados].ID);
        cout<<"ingrese el nombre: "; getline(cin, registro[nEmpleados].nombre );
        cout<<"ingrese la contraseña: ";getline(cin, registro[nEmpleados].contra);
        cout<<"ingrese el sueldo que se designara a este nuevo trabajador: ";cin>>registro[nEmpleados].sueldo;
        cout<<"----se ha registrado correctamente----"<<endl;
    }
}