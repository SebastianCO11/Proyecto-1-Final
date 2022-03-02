#include "Mascota.h"

Mascota::Mascota(double identificacionMascota, string raza, string tipoSangre, 
                string nombreMascota, float peso, int edad, bool statusExistencia){

}

double Mascota::getIdentificacion(double identificacionMascota){
    return this-> identificacionMascota;
}

bool Mascota::getStatusExistencia(bool statusExistencia){
    return this-> statusExistencia;
}