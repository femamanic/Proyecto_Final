#include "CajaRegistradora.h"
#include "structs.h"
#include <iostream>
using namespace std;

void BuscarProducto(){
    string buscar;
    system("cls");
    cout << "Ingrese el nombre del producto que desea buscar: "; cin >> buscar;
    for(int i = 0; i < nProductos ; i++){
        if(producto[i].nombre == buscar){
            cout << "Producto encontrado." << endl;
            cout << "Codigo: " << producto[i].codigo << endl;
            cout << "Nombre: " << producto[i].nombre << endl;
            cout << "Precio: " << producto[i].precio << endl;
            cout << "Cantidad: " << producto[i].unidades << endl;
            return;
        }
    }
}