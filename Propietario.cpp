#include "Propietario.h"

Propietario::Propietario(double identificacion, double telefono, string nombre, string email){
    this -> identificacion = identificacion;
    this -> telefono = telefono;
    this -> nombre = nombre;
    this -> email = email;
}

double Propietario::getTelefono(double telefono){
    return this-> telefono;
}

double Propietario::getIdentificacion(double identificacion){
    return this-> identificacion;
}

