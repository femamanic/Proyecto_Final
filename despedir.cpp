#include "GerenteGeneral.h"
#include <iostream>
#include "structs.h"
using namespace std;
void Despedir(){
    int n,o;
    int b=0;
    char a;
    cout<<"-----funcion de despedir empleados-----\n";
    cout<<"elija el numero de empleado que desea despedir: "<<endl;
    for(int i=0;i<nEmpleados;i++){
        cout<<i+1<<": "<<empleado[i].nombre<<endl;
    }
    do{
        cout<<"eliminar"<<endl;
        cout<<"[1]: si."<<endl;
        cout<<"[0]: No."<<endl;
        cout<<"ingrese la opcion a seleccionar: ";cin>>n;
        switch(n){
            case 1:
            cout<<"el empledo a despedir es: ";cin>>o;
            o=n-1;
            empleado[o].nombre=a;
            empleado[o].ID=a;
            empleado[o].contra=a;
            empleado[o].sueldo=a;
            break;
            case 0:
            cout<<"gracias por usar esta funcion."<<endl;
            break;
            default:
            cout<<"elija una opcion valida."<<endl;
            b++;
            break;
        }
        if(b>0){
            n=0;
            cout<<"usted a excedido el limite de intentos."<<endl;
        }
    }while(n!=0);
}