#include "database.h"
#include "structs.h"
void basedatosEmpleados(){
    empleado[0] = {"CEO-001", "Pedro Ramon", "96061976", "pedro123", 7000.00, "Gerencia General", false};
    empleado[1] = {"CEO-002", "Esteban nato", "83716258", "esteban123", 6000.00, "Gerencia General", false};
    empleado[2] = {"STM-001", "Juan Perez", "83716232", "juan123", 3500.00, "Gestion de Tienda", false};
    empleado[3] = {"STM-002", "Manolo diaz", "83716212", "manolo123", 3000.00, "Gestion de Tienda", false};
    empleado[4] = {"ACC-001", "Julio mendez", "83357618", "julio123", 3300.00, "Contabilidad", false};
    empleado[5] = {"ACC-002", "Alessandro Mejia", "73613826", "alessandro123", 2000.00, "Contabilidad", false};
    empleado[6] = {"CAS-001", "Jose Zegarra", "93517358", "jose123", 1700.00, "Caja Registradora", false};
    empleado[7] = {"CAS-002", "Maria Castro", "91325678", "maria123", 1700.00, "Caja Registradora", false};
    empleado[8] = {"CAS-003", "Laura Ruiz", "78965432", "laura123", 1700.00, "Caja Registradora", false};
    empleado[9] = {"TRE-001", "Juan Carlos", "98765432", "juancarlos123", 1700.00, "Tesoreria", false};
    nEmpleados = 10;

}
void basedatosProductos(){
    producto[0] = {"Laptop", "Electrónico", "Dell", "LAP123", 1500.00, 1200.00, 5};
    producto[1] = {"Smartphone", "Electrónico", "Samsung", "SMP456", 800.00, 600.00, 20};
    producto[2] = {"Silla de Oficina", "Mobiliario", "IKEA", "SIL789", 100.00, 80.00, 10};
    producto[3] = {"Mesa de Comedor", "Mobiliario", "IKEA", "MES012", 200.00, 150.00, 5};
    producto[4] = {"Teclado", "Electrónico", "Logitech", "TECL345", 50.00, 40.00, 15};
    producto[5] = {"Monitor", "Electrónico", "Acer", "MON678", 250.00, 200.00, 8};
    producto[6] = {"Impresora", "Electrónico", "HP", "IMP901", 100.00, 90.00, 7};
    producto[7] = {"Cafetera", "Electrónico", "Breville", "CAF234", 80.00, 60.00, 12};
    producto[8] = {"Lámpara", "Electrónico", "Philips", "LAM567", 30.00, 25.00, 18};
    producto[9] = {"Horno Microondas", "Electrónico", "Panasonic", "MIC890", 150.00, 130.00, 9};
    nProductos = 10;
}