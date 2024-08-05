#include "GerentedeTienda.h"
#include<iostream>
using namespace std;

void AgregarPromocion() {
    int codigo;
    double nuevoPrecio;
    cout << "Ingrese el código del producto al que desea agregar una promoción: ";
    cin >> codigo;
    cout << "Ingrese el nuevo precio promocional: ";
    cin >> nuevoPrecio;

    for (int i = 0; i < nProductos; i++) {
        if (producto[i].codigo == codigo) {
            producto[i].precio = nuevoPrecio;
            cout << "Promoción agregada con éxito."<<endl;
            return;
        }
    }

    cout << "Producto no encontrado."<<endl;
}
