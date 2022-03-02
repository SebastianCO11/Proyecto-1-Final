#ifndef MASCOTA_H
#define MASCOTA_H 

#include <iostream>
#include "Propietario.h"
#include <vector>

using std::string; 
using std::vector;

class Mascota{
    private:
        double identificacion;
        string raza, tipoSangre, nombre;
        float peso;
        int edad;
        bool statusExistencia;
        Propietario propietario;
        vector<Propietario> propietarios;

    public:
        double getIdentificacion(double identificacion);
        bool getStatusExistencia(bool statusExistencia);
};

#endif