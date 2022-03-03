#ifndef MASCOTA_H
#define MASCOTA_H 

#include <iostream>
#include "Propietario.h"
#include <unordered_map>
#include <vector>

using std::string; 
using std::vector;

class Mascota{
    private:
        double identificacionMascota;
        string raza, tipoSangre, nombreMascota;
        float peso;
        int edad;
        bool statusExistencia;

    public:
        Mascota();
        Mascota(double identificacionMascota, string raza, string tipoSangre, 
        string nombreMascota, float peso, int edad, bool statusExistencia);
        double getIdentificacion(double identificacionMascota);
        bool getStatusExistencia(bool statusExistencia);
};

#endif