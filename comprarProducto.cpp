#include "GerentedeTienda.h"
#include<iostream>
#include <string>
using namespace std;

void ComprarProducto() {
    int codigo, cantidadCompra;
    cout << "Ingrese el código del producto que desea comprar: ";cin >> codigo;
    cout << "Ingrese la cantidad que desea comprar: ";cin >> cantidadCompra;

    for (int i = 0; i < nProductos; i++) {
        if (producto[i].codigo == codigo) {
            if (producto[i].cantidad >= cantidadCompra) {
                producto[i].cantidad -= cantidadCompra;
                cout << "Compra realizada con éxito."<<endl;
                return;
            } else {
                cout << "No hay suficiente stock del producto."<<endl;
                return;
            }
        }
    }

    cout << "Producto no encontrado."<<endl;
}
