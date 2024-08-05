g++ -o Producto_Final PF.cpp structs.cpp menuGerenteGeneral.cpp contratar.cpp despedir.cpp 
verRegistroDeEmpleado.cpp verReportesDeCompras.cpp verReportesDeVentas.cpp
if ($LASTEXITCODE -ne 0) {
    Write-Output "Error en la compilación."
    exit $LASTEXITCODE
}

.\producto_final

Read-Host -Prompt "..."