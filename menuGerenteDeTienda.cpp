#include "menuGerenteDeTienda.h"
#include<iostream>
using namespace std;

void menuGerenteDeTienda(){
    int opcion;

    do {
        cout << "======Menu======";
        cout << "1. Comprar Producto";
        cout << "2. Agregar Producto";
        cout << "3. Eliminar Producto";
        cout << "4. Anadir Descuentos u Ofertas";
        cout << "5. Salir";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            void ComprarProducto();//Comprar Producto
            break;
        case 2:
            void AgregarProducto()//Agregar Producto
            break;
        case 3:
            void EliminarProducto();//Eliminar Producto
            break;
        case 4:
            void AgregarPromociones();//Añadir Descuentos u ofertas
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