#ifndef SISTEMA_H
#define SISTEMA_H

#include "Propietario.h"
#include "Mascota.h"
#include "PropietarioxMascota.h"
#include <vector>
#include <unordered_map>
#include <ctime>
#include <iostream>

using namespace std;
using std::string;
using std::unordered_map;

class Sistema{
    private:
        unordered_map<double, Propietario> mapaPropietarios;
        unordered_map<double, Mascota> mapaMascota;
        vector<PropietarioxMascota> PXMvector;
        
    public:
        void agregarPropietario();
        void agregarMascota();
        void modificarPropietario();
        void eliminarPropietario();
        void listarPropietario();
        void numPropietariosRegistrados();
        void infoPropietariosRegistrados();
        void infoMascotasRegistradas();
        void asociarMascotaPropietario();
        void asociarNuevoPropietarioMascota();
        void consultarPropietariosMascota();
        void consultarMascotaPropietario();
        void eliminarPropietarioMascota();
        void cambiarStatusMascota();
};

#endif