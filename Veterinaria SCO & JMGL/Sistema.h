#ifndef SISTEMA_H
#define SISTEMA_H

#include "Propietario.h"
#include "Mascota.h"
#include "PropietarioxMascota.h"
#include <iostream>
#include <vector>
#include <unordered_map>
#include <ctime> //Libreria utilizada en la función "cambiarStatusMascota()"

using namespace std;
using std::string;
using std::unordered_map;

class Sistema{
    private:
        unordered_map<double, Propietario> mapaPropietarios; // Mapa desordenado que guarda todos los propietarios registrados (con su información)
        unordered_map<double, Mascota> mapaMascotas; // Mapa desordenado que guarda todas las mascotas registrados (con su información)
        vector<PropietarioxMascota> PXMvector; // Vector en donde se realiza la relación de muchos a muchos de propietarios y mascotas

        /* Apuntadores utilizados para recorrer los mapas 
        correspondientes (mapaPropietarios / mapaMascotas) */
        unordered_map<double, Propietario>:: iterator itrPropietarios;
        unordered_map<double, Mascota>:: iterator itrMascotas;
        
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