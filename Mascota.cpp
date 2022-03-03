#include "Mascota.h"

Mascota::Mascota(double identificacionMascota, string raza, string tipoSangre, 
                string nombreMascota, float peso, int edad, bool statusExistencia){
    this -> identificacionMascota = identificacionMascota;
    this -> raza = raza;
    this -> tipoSangre = tipoSangre;
    this -> nombreMascota = nombreMascota;
    this -> peso = peso;
    this -> edad = edad;
    this -> statusExistencia = statusExistencia;
}

double Mascota::getIdentificacion(double identificacionMascota){
    return this-> identificacionMascota;
}

bool Mascota::getStatusExistencia(bool statusExistencia){
    return this-> statusExistencia;
}