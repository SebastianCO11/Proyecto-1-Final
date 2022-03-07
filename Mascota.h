#ifndef MASCOTA_H
#define MASCOTA_H 

#include <iostream>
#include "Propietario.h"
#include <unordered_map>
#include <vector>

using std::cout;
using std::string; 
using std::vector;

class Mascota{
    private:
        double identificacionMascota;
        string raza, tipoSangre, nombreMascota;
        float peso;
        int edad, tipoMascota;
        bool statusExistencia;

    public:
        Mascota();
        Mascota(double identificacionMascota, int tipoMascota, string raza, string tipoSangre, 
        string nombreMascota, float peso, int edad, bool statusExistencia);
        double getIdentificacionMascota();
        bool getStatusExistencia();
        void setStatusExistencia(bool statusExistencia);
        void infoMascota();
        
};

#endif