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
    mapaPropietarios[identificacion] = propietarioT;
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
    mapaMascota[identificacionMascota] = mascotaT;
}

void Sistema::asociarMascotaPropietario(){

}

void Sistema::asociarNuevoPropietarioMascota(){

}

void Sistema::cambiarStatusMascota(){
    int key;
    cout << "Ingrese el ID de la mascota: ";
    cin >> key;
    cout << "\n";
    if( mapaPropietarios.find(key) == mapaPropietarios.end() ){
        cout << "La mascota no ha sido registrada en el sistema.";
    }
    else{
        //cambiar status
        cout << "Status cambiado.\n";
        
    }
}

void Sistema::consultarMascotaPropietario(){
    int key;
    cout << "Ingrese el ID de la mascota: ";
    cin >> key;
    cout << "\n";
    if( mapaPropietarios.find(key) == mapaPropietarios.end() ){
        cout << "La mascota no ha sido registrada en el sistema.";
    }
    else{
        
    }
    cout << "\n";
}

void Sistema::consultarPropietariosMascota(){
    int key;
    cout << "Ingrese el ID del propietario: ";
    cin >> key;
    cout << "\n";
    if( mapaPropietarios.find(key) == mapaPropietarios.end() ){
        cout << "El propietario no ha sido registrada en el sistema.";
    }
    else{
        cout << "La(s) mascota(s) de este propietario son: \n";
        
    }
    cout << "\n";
}

void Sistema::eliminarPropietario(){
    int key;
    cout << "Ingrese el ID del propietario: ";
    cin >> key;
    cout << "\n";
    if( mapaPropietarios.find(key) == mapaPropietarios.end() ){
        cout << "El propietario no ha sido registrada en el sistema.";
    }
    else{
        //eliminar prop
        cout << "Propietario #" << key << " eliminado correctamente. \n";
        
    }
    cout << "\n";
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
    int key;
    cout << "Ingrese el ID del propietario: ";
    cin >> key;
    cout << "\n";
    if( mapaPropietarios.find(key) == mapaPropietarios.end() ){
        cout << "El propietario no ha sido registrada en el sistema.";
    }
    else{
        //que atributo modificar?
        cout << "Modificado \n";
        
    }
    cout << "\n";
}

void Sistema::numPropietariosRegistrados(){
    int count = 0;
    for (auto i = begin(mapaPropietarios); i != end(mapaPropietarios); i++)
    {
    }
    cout <<"Hay " << count << " propietarios registrados en el directorio de la veterinaria.\n";
}


