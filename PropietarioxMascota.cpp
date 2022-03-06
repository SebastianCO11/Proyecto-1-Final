#include "PropietarioxMascota.h"

Mascota PropietarioxMascota::getMascota(){
    return this-> mascota;
}

Propietario PropietarioxMascota::getPropietario(){
    return this -> propietario;
}

PropietarioxMascota::PropietarioxMascota(Propietario propietario, Mascota mascota){
    this -> propietario = propietario;
    this -> mascota = mascota;
}