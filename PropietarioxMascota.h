#ifndef PROPIETARIOXMASCOTA_H
#define PROPIETARIOXMASCOTA_H 

#include <iostream>
#include "Propietario.h"
#include "Mascota.h"
#include <vector>

using std::string; 
using std::vector;

class PropietarioxMascota{
    private:
        Propietario propietario;
        Mascota mascota;  

    public:
        Propietario getPropietario();
        Mascota getMascota();
        PropietarioxMascota(Propietario propietario, Mascota mascota);
};
#endif