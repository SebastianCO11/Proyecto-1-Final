#include "Propietario.h"

Propietario::Propietario(){
    nombre = "temp";
    email = "temp";
    telefono = 1;
    identificacion = 0; 
}

Propietario::Propietario(double identificacion, double telefono, string nombre, string email){
    this -> identificacion = identificacion;
    this -> telefono = telefono;
    this -> nombre = nombre;
    this -> email = email;
}

double Propietario::getIdentificacion(){
    return this-> identificacion;
}

string Propietario::getNombre(){
    return this -> nombre;
}

void Propietario::infoPropietario(){
    cout << "El nombre es: " << nombre << "\n";
    cout << "La identificacion es: " << identificacion << "\n";
    cout << "Email: "<< email << "\n";
    cout << "Telefono: " << telefono << "\n\n";
}

void Propietario::setEmail(string email){
    this -> email = email;
}

void Propietario::setNombre(string nombre){
    this -> nombre = nombre;
}

void Propietario::setTelefono(double telefono){
    this -> telefono = telefono;
}