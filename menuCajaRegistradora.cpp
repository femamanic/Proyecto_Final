#include "CajaRegistradora.h"
#include <iostream>
using namespace std;

void munucajero(){
    int n;
    system ("cls");
    do{
    cout<<"---BIENVENIDO AL MENU DEL CAJERO---"<<endl;
    cout<<"[1] buscar producto."<<endl;
    cout<<"[2] mostrar producto."<<endl;
    cout<<"[3] imprimir boleta."<<endl;
    cout<<"[0] salir."<<endl;
    cout<<"elija una opcion: ";cin>>n;
    switch(n){
        case 1: 
        break;
        case 2:
        break;
        case 3:
        break;
        default:
        break;
    }
    }while(n!=0);
}