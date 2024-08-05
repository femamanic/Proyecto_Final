g++ -o Producto_Final PF.cpp structs.cpp database.cpp AgregarProducto.cpp AprobarCheques.cpp BuscarProducto.cpp contratar.cpp despedir.cpp EliminarProducto.cpp menuCajaRegistradora.cpp menuGerenteDeTienda.cpp menuGerenteGeneral.cpp verRegistroDeEmpleado.cpp VerRegistrodeInventario.cpp

if ($LASTEXITCODE -ne 0) {
    Write-Output "Error en la compilación."
    exit $LASTEXITCODE
}

.\producto_final

Read-Host -Prompt "..."