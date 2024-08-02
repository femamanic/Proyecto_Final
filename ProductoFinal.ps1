g++ -o Producto_Final PF.cpp structs.cpp

if ($LASTEXITCODE -ne 0) {
    Write-Output "Error en la compilación."
    exit $LASTEXITCODE
}

.\producto_final

Read-Host -Prompt "..."