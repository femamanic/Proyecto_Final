#include "CajaRegistradora.h"
#include "GerenteGeneral.h"
#include <iostream>
using namespace std;

void menucajero(){
    int n,b=0;
    system ("cls");
    do{
        cout<<"---BIENVENIDO AL MENU DEL CAJERO---"<<endl;
        cout<<"[1] buscar producto."<<endl;
        cout<<"[2] mostrar producto."<<endl;
        cout<<"[0] salir."<<endl;
        cout<<"elija una opcion: ";cin>>n;
        switch(n){
            case 1:
                BuscarProducto();
            break;
            case 2:
                VerRegistrodeInventario();
            break;
            break;
            default:
                cout<<"opcion incorrecta."<<endl;
            break;
        }
    }while(n!=0);
}