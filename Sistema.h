#ifndef SISTEMA_H
#define SISTEMA_H

#include "Propietario.h"
#include "Mascota.h"
#include "PropietarioxMascota.h"
#include <vector>
#include <unordered_map>
#include <ctime>

using std::string;
using std::unordered_map;

class Sistema{
    private:
        unordered_map<double, Propietario> mapaPropietarios;
        unordered_map<double, Mascota> mapaMascota;
        vector<PropietarioxMascota> PMXtemporal;

    public:
        void agregarPropietario();
        void agregarMascota();
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