#include "GerentedeTienda.h"
#include<iostream>
#include <string>
using namespace std;

void EliminarProducto(){
int codigo;
    cout << "Ingrese el codigo del producto que desea eliminar: ";cin >> codigo;
    int index = -1;
    for(int i = 0; i < nProductos; i++) {
        if(producto[i].codigo == codigo) {
            index = i;
            break;
        }
    }
    if(index == -1){
        cout<<"Producto no encontrado."<<endl;
        return;
    }
    for(int i = index; i < nProductos - 1; i++){
        producto[i] = producto[i+1];
    }
    nProductos--;
    cout << "Producto eliminado con exito."<<endl;
}