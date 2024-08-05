#ifndef PRODUCTO_H
#define PRODUCTO_H

#include<iostream>
#include<string>

class producto{
    public:
        producto(int id, std::string nombre, double precio) : id(id), nombre(nombre), precio(precio){}
        
        int getId() const{ return nombre;}

        double getPrecio() const {return precio;}
        void setPrecio(double nuevoPrecio) {precio = nuevoPrecio;}
        void mostrarProducto() const {
            std::cout<<"--------------"
        }
        
}