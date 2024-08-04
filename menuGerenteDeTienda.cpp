int main() {
    Inventario inventario;
    int opcion;

    do {
        std::cout << "======Menu======";
        std::cout << "1. Agregar Producto";
        std::cout << "2. Quitar Producto";
        std::cout << "3. Mostrar Todos los Productos";
        std::cout << "4. Anadir Descuentos u Ofertas";
        std::cout << "5. Salir";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

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
