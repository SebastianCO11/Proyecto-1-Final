#ifndef PROPIETARIO_H
#define PROPIETARIO_H 

#include <iostream>

using namespace std;
using std::string;

class Propietario{
    private:
        double identificacion, telefono;
        string nombre;
        string email;

    public:
        Propietario(double identificacion, double telefono, string nombre, string email);
        Propietario();
        double getIdentificacion();
        void infoPropietario();
        string getNombre();
        void setNombre(string nombre);
        void setEmail(string email);
        void setTelefono(double telefono);
};

#endif