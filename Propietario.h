#ifndef PROPIETARIO_H
#define PROPIETARIO_H 

#include <iostream>

using std::string; 

class Propietario{
    private:
        double identificacion, telefono;
        string nombre;
        string email;

    public:
        Propietario(double identificacion, double telefono, string nombre, string email);
        Propietario();
        double getIdentificacion(double statusExistencia);
        double getTelefono(double telefono);
};

#endif