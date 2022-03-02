#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream>
#include "Propietario.h"
#include "Mascota.h"
#include <vector>

using std::string;
using std::vector;

class Sistema{
    private:
        vector<Propietario> propietarios;
        vector<Mascota> mascotas;
        
    public:
        void inicializarDatos();
        void agregarPropietario();
        void modificarPropietario();
        void eliminarPropietario();
        void listarPropietario();
        void numPropietariosRegistrados();
        void infoPropietariosRegistrados();
        void infoMascotasRegistradas();
        void consultarPropietariosMascota();
        void consultarMascotaPropietario();
        void asociarMascotaPropietario();
        void asociarNuevoPropietarioMascota();
        void cambiarStatusMascota();
        void eliminarPropietarioMascota();
};

#endif