#include "GerenteGeneral.h"
#include <iostream>
#include "structs.h"
using namespace std;

void VerRegistrodeInventario(){
    system("cls");
    cout<<"----Registro de Inventario----\n";
    cout << "===================================================\n";
    for(int i = 0 ; i < (nProductos+1) ; i++) {
        cout<<"ID: "<<producto[i].ID<<endl;
        cout<<"Nombre: "<<producto[i].nombre<<endl;
        cout<<"Precio: "<<producto[i].precio<<endl;
        cout<<"Cantidad: "<<producto[i].unidades<<endl;
        cout<<"----------------------------------------------------"<<endl;
    }
    system ("pause>nul");
}