#include "Propietario.h"
#include <iostream>
using namespace std;
using std::string;

Propietario::Propietario(){
    nombre = "temp";
    email = "temp";
    telefono = 1;
    identificacion += 1; 
}

Propietario::Propietario(double identificacion, double telefono, string nombre, string email){
    cout << "Entre\n";
    this -> identificacion = identificacion;
    this -> telefono = telefono;
    this -> nombre = nombre;
    this -> email = email;
    cout << nombre;
}

double Propietario::getTelefono(double telefono){
    return this-> telefono;
}

double Propietario::getIdentificacion(double identificacion){
    return this-> identificacion;
}

