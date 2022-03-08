#include "Mascota.h"

/* Constructor por defecto que inicializa las variables */
Mascota::Mascota(){
    identificacionMascota = 0;
    tipoMascota = 0;
    raza = "temp";
    tipoSangre = "temp";
    nombreMascota = "temp";
    peso = 0;
    edad = 0;
    statusExistencia = true;
}

/* Constructor con parametros al cual se le envia las especificaciones para
cada variable */
Mascota::Mascota(double identificacionMascota, int tipoMascota, string raza, string tipoSangre, 
                string nombreMascota, float peso, int edad, bool statusExistencia){
    this -> identificacionMascota = identificacionMascota;
    this -> tipoMascota = tipoMascota;
    this -> raza = raza;
    this -> tipoSangre = tipoSangre;
    this -> nombreMascota = nombreMascota;
    this -> peso = peso;
    this -> edad = edad;
    this -> statusExistencia = statusExistencia;
}

/* Muestra todos los datos de una mascota en base a un vector */
void Mascota::infoMascota(){
    cout << "El nombre es: " << nombreMascota << "\n";
    cout << "La identificacion es: " << identificacionMascota << "\n";
    cout << "Tipo de mascota (1 = perro / 2 = gato / 3 = otro): "<< tipoMascota << "\n";
    cout << "Raza: " << raza << "\n";
    cout << "Tipo de sangre: " << tipoSangre << "\n";
    cout << "Peso: " << peso << "\n";
    cout << "Edad: " << edad << "\n";
    cout << "Status (1 = vivo / 0 = muerto): " << statusExistencia << "\n\n";
}

// Funciones necesarias para acceder a los datos del propietario

double Mascota::getIdentificacionMascota(){
    return this-> identificacionMascota;
}

bool Mascota::getStatusExistencia(){
    return this-> statusExistencia;
}

void Mascota::setStatusExistencia(bool statusExistencia){
    this -> statusExistencia = statusExistencia;
}