#include "Propietario.h"
#include <iostream>
using namespace std;
using std::string;

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

double Propietario::getTelefono(double telefono){
    return this-> telefono;
}

double Propietario::getIdentificacion(double identificacion){
    return this-> identificacion;
}

void Propietario::infoPropietario(){
    cout << "El nombre es: " << nombre << "\n";
    cout << "La identificacion es: " << identificacion << "\n";
    cout << "Email: "<< email << "\n";
cout << "Telefono: " << telefono << "\n\n";
}

