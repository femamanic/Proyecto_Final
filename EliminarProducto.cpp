#include "GerentedeTienda.h"
#include "structs.h"
#include <iostream>
using namespace std;

void EliminarProducto(){
    string eliminar;
    system("cls");
    cout << "Ingrese el nombre del producto que desea eliminar: "; cin >> eliminar;
    for(int i = 0; i < nProductos ; i++){
        if(producto[i].nombre == eliminar){
            cout << "Producto eliminado." << endl;
            cout << "Codigo: " << producto[i].codigo << endl;
            cout << "Nombre: " << producto[i].nombre << endl;
            for(int j = i; j < nProductos; j++){
                producto[j] = producto[j+1];
            }
            nProductos = nProductos - 1;
            return;
        }
    }
}