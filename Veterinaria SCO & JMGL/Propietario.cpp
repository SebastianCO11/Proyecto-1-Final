#include "Propietario.h"

/* Constructor por defecto que inicializa las variables */
Propietario::Propietario(){
    nombre = "temp";
    email = "temp";
    telefono = 1;
    identificacion = 0; 
}

/* Constructor con parametros al cual se le envia las especificaciones para
cada variable */
Propietario::Propietario(double identificacion, double telefono, string nombre, string email){
    this -> identificacion = identificacion;
    this -> telefono = telefono;
    this -> nombre = nombre;
    this -> email = email;
}

/* Muestra todos los datos de un propietario en base a un vector */
void Propietario::infoPropietario(){
    cout << "El nombre es: " << nombre << "\n";
    cout << "La identificacion es: " << identificacion << "\n";
    cout << "Email: "<< email << "\n";
    cout << "Telefono: " << telefono << "\n\n";
}

// Funciones necesarias para acceder a los datos del propietario

double Propietario::getIdentificacion(){
    return this-> identificacion;
}

string Propietario::getNombre(){
    return this -> nombre;
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