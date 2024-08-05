#include "menuGerenteDeTienda.h"
#include<iostream>
using namespace std;

void menuGerenteDeTienda(){
    int opcion;

    do {
        cout << "======Menu======";
        cout << "1. Agregar Producto";
        cout << "2. Quitar Producto";
        cout << "3. Mostrar Todos los Productos";
        cout << "4. Anadir Descuentos u Ofertas";
        cout << "5. Salir";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            //Agregar Producto
            break;
        case 2:
            //Quitar Producto
            break;
        case 3:
            //Mostrar Todos los Productos
            break;
        case 4:
            //Añadir Descuentos u ofertas
            break;
        case 5:
            //Salir
            break;
        default:
            //Opcion no valida
            }
        } while (opcion != 5);

    return 0;
    }