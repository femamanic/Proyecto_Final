#include "GerenteDeTienda.h"
#include "GerenteGeneral.h"
#include <iostream>
using namespace std;

void menuGerenteDeTienda(){
    int opcion;
    system("cls");
    do {
        cout << "======Menu======";
        cout << "1. Agregar Producto";
        cout << "2. Eliminar Producto";
        cout << "3. Mostar Inventario";
        cout << "4. Salir";
        cout << "================";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            AgregarProducto();//Agregar Producto
            break;
        case 2:
            EliminarProducto();//Eliminar Producto
            break;
        case 3:
            VerRegistrodeInventario();//Mostrar Inventario
            break;
        case 4:
            //Salir
            break;
        default:
            cout << "Opcion no valida"; //Opcion no valida
            break;
        }
        } while (opcion != 4);
}