#include "CajaRegistradora.h"
#include <iostream>
using namespace std;

void munucajero(){
    int n,b=0;
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
            buscarProducto();
        break;
        case 2:
            mostrarproducto();
        break;
        case 3:
            imprimirBoleta();
        break;
        default:
            cout<<"opcion incorrecta."<<endl;
            b++;
        break;
    }
    if(b>3){
        n=0;
        cout<<"usted a superado el limite de intentos erroneos."<<endl;
    }
    }while(n!=0);
}