#include <iostream>
#include "Sistema.h"
using namespace std;
using std::string;

void Sistema::inicializarDatos(){
    
}

void Sistema::agregarPropietario(){
    double identificacion = 0, telefono;
    string nombre;
    string email;
    cout << "Ingrese el nombre: ";
    cin >> nombre;
    cout << "\n";
    cout << "Ingrese la identificacion: ";
    cin >> identificacion;
    cout << "\n";
    cout << "Ingrese el telefono: ";
    cin >> telefono;
    cout << "\n";
    cout << "Ingrese el email: ";
    cin >> email;
    cout << "\n";
    Propietario propietarioT(identificacion, telefono, nombre, email);
}

void Sistema::agregarMascota(){
    double identificacionMascota;
    string raza, tipoSangre, nombreMascota;
    float peso;
    int edad;
    bool statusExistencia;
    cout << "Ingrese el nombre: ";
    cin >> nombreMascota;
    cout << "\n"; 
    cout << "Ingrese la identificacion: ";
    cin >> identificacionMascota;
    cout << "\n";
    cout << "Ingrese la raza: ";
    cin >> raza;
    cout << "\n";
    cout << "Ingrese el tipo de sangre: ";
    cin >> tipoSangre;
    cout << "\n";
    cout << "Ingrese el peso: ";
    cin >> peso;
    cout << "\n";
    cout << "Ingrese la edad: ";
    cin >> edad;
    cout << "\n";
    statusExistencia = true;
    Mascota mascotaT(identificacionMascota, raza, tipoSangre, nombreMascota, 
                    peso, edad, statusExistencia);
}

void Sistema::asociarMascotaPropietario(){

}

void Sistema::asociarNuevoPropietarioMascota(){

}

void Sistema::cambiarStatusMascota(){

}

void Sistema::consultarMascotaPropietario(){
    int key;
    cout << "Ingrese el ID de la mascota: ";
    cin >> key;
    cout << "\n";
    if( mapaPropietarios.find(key) == mapaPropietarios.end() ){
        cout << "La mascota no ha sido registrada en el sistema";
    }
    else{
        cout << "El/Los propietario/s de esta mascota son: \n";
        
    }
    cout << "\n";
}

void Sistema::consultarPropietariosMascota(){
    
}

void Sistema::eliminarPropietario(){

}

void Sistema::eliminarPropietarioMascota(){

}

void Sistema::infoMascotasRegistradas(){

}

void Sistema::infoPropietariosRegistrados(){

}

void Sistema::listarPropietario(){

}

void Sistema::modificarPropietario(){

}

void Sistema::numPropietariosRegistrados(){

}


