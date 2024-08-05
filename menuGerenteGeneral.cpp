#include "GerenteGeneral.h"
#include <iostream>
using namespace std;

void menuGerenteGeneral(){
    int n,b=0;
    do{
        cout<<"------Bienvenido------\n";
        cout<<"[1]: contratar un nuevo empleado\n";
        cout<<"[2]: despedir personal.\n";
        cout<<"[3]: ver los datos de los empleados.\n";
        cout<<"[4]: ver los productos almacenados en la empresa.\n";
        cout<<"[5]: ver el registro de compras de la empresa.\n";
        cout<<"[6]: ver el registro de ventas de la empresa.\n";
        cout<<"[0]: salir del de la funcion.\n";
        cout<<"ingrese la opcion a seleccionar: ";cin>>n;
        switch (n)
        {
        case 1:
         Contratar();
            break;
        case 2:
         Despedir();
            break;
        case 3:
         verRegistroDeEmpleados();
            break;
        case 4:
         verRegistroDeInventario();
            break;
        case 5:
         verReportesDeCompras();
            break;
        case 6:
         verReportesDeVentas();
            break;
        default:
            cout<<"----ERROR----\n";
            cout<<"ingrese una opcion valida.\n";
            b++;
            break;
        }
        if(b>3){
            n=0;
            cout<<"usted a excedido el maximo de intentos."<<endl;
        }
    }while(n!=0);
} 