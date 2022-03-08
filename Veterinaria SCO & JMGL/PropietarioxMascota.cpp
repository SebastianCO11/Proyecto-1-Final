#include "PropietarioxMascota.h"

/* Funciones necesarias para acceder a los datos de los mapas
que se encuentran en el vector "PXMvector" (PropietarioxMascota)*/

Mascota PropietarioxMascota::getMascota(){
    return this-> mascota;
}

Propietario PropietarioxMascota::getPropietario(){
    return this -> propietario;
}

/* Constructor con parametros al cual se le envia las especificaciones para
cada mapa y posteriormente se relacionan con un vector */
PropietarioxMascota::PropietarioxMascota(Propietario propietario, Mascota mascota){
    this -> propietario = propietario;
    this -> mascota = mascota;
}
