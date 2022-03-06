#include <iostream>
#include "Sistema.h"
using namespace std;
using std::string;
unordered_map<double, Propietario>:: iterator itrPropietarios;
unordered_map<double, Mascota>:: iterator itrMascotas;

void Sistema::agregarPropietario(){
    double identificacion = 0, telefono;
    string nombre;
    string email;
    int key;
    cout << "Ingrese el ID del propietario: ";
    cin >> key;
    cout << "\n";
    if( mapaPropietarios.find(key) != mapaPropietarios.end() ){
        cout << "El propietario ya ha sido registrado en el sistema.\n";
    }
    else{
        identificacion = key;
        cout << "Ingrese el nombre: ";
        cin >> nombre;
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
}

void Sistema::agregarMascota(){
    double identificacionMascota;
    string raza, tipoSangre, nombreMascota;
    float peso;
    int edad, tipoMascota;
    bool statusExistencia;
    int key;
    cout << "Ingrese el ID de la mascota: ";
    cin >> key;
    cout << "\n";
    if( mapaMascota.find(key) != mapaMascota.end() ){
        cout << "La mascota ya ha sido registrada en el sistema.\n";
    }
    else{
        identificacionMascota = key;
        cout << "Ingrese el nombre: ";
        cin >> nombreMascota;
        cout << "\n"; 
        cout << "Ingrese el tipo de mascota (1 = perro / 2 = gato / 3 = otro): ";
        cin >> tipoMascota;
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
        Mascota mascotaT(identificacionMascota, tipoMascota, raza, tipoSangre, nombreMascota, 
                        peso, edad, statusExistencia);
        mapaMascota[identificacionMascota] = mascotaT;
    }
}
//Falta
void Sistema::asociarMascotaPropietario(){
    int keyMascota, keyPropietario;
    cout << "Ingrese el ID de la mascota: ";
    cin >> keyMascota;
    cout << "\n";
    cout << "Ingrese el ID de la propietario: ";
    cin >> keyPropietario;
    cout << "\n";
    if( mapaMascota.find(keyMascota) == mapaMascota.end() ){
        cout << "La mascota no ha sido registrada en el sistema.";
    }
    else{

    }
}
//Falta
void Sistema::asociarNuevoPropietarioMascota(){

}

void Sistema::cambiarStatusMascota(){
    int key, temporal;
    cout << "Ingrese el ID de la mascota: ";
    cin >> key;
    cout << "\n";
    if( mapaMascota.find(key) == mapaMascota.end() ){
        cout << "La mascota no ha sido registrada en el sistema.";
    }
    else{
        time_t tSac = time(NULL);  // instante actual
        struct tm* pt1 = localtime(&tSac);
        tm tm2 = *gmtime(&tSac);
        //cambiar status
        if( mapaMascota[key].getStatusExistencia() == true){
            mapaMascota[key].setStatusExistencia(false);
        }
        cout << "Status cambiado.\n";   
        cout << "Fecha de muerte: " << "dd-mm-aaaa: " << tm2.tm_mday << "-" << tm2.tm_mon+1 << "-"
        << tm2.tm_year+1900 << endl;
        cout << "\n";
    }
}
//Falta
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
//Falta
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
        cout << "El propietario no ha sido registrada en el sistema.\n\n";
    }
    else{
        mapaPropietarios.erase(key);
        cout << "Propietario #" << key << " eliminado correctamente. \n\n";
    }
}
//Falta
void Sistema::eliminarPropietarioMascota(){

}

void Sistema::infoMascotasRegistradas(){
    int count = 0;
    for (itrMascotas = mapaMascota.begin(); itrMascotas != mapaMascota.end(); itrMascotas++){
        count++;
        cout << "Mascota #" << count << "\n";
        itrMascotas->second.infoMascota();
    }
    if (count == 0){
        cout << "No hay mascotas registradas actualmente.\n\n";
    }
}

void Sistema::infoPropietariosRegistrados(){
    int count = 0;
    for (itrPropietarios = mapaPropietarios.begin(); itrPropietarios != mapaPropietarios.end(); itrPropietarios++)
    {
        count++;
        cout << "Propietario #" << count << "\n";
        itrPropietarios->second.infoPropietario();
    }
    if (count == 0){
        cout << "No hay propietarios registrados actualmente.\n\n";
    }
}

void Sistema::listarPropietario(){
    int count = 0;
    for (itrPropietarios = mapaPropietarios.begin(); 
        itrPropietarios != mapaPropietarios.end(); itrPropietarios++){
        count++;
        cout << "Propietario #" << count << "\n";
        cout << "ID: " << itrPropietarios->second.getIdentificacion() << " Nombre: " 
        << itrPropietarios->second.getNombre();
        cout << "\n\n";
    }
    if (count == 0){
        cout << "No hay propietarios registrados actualmente.\n\n";
    }
}

void Sistema::modificarPropietario(){
    int key, resp; 
    double telNuevo;
    string nombreNuevo, emailNuevo;
    cout << "Ingrese el ID del propietario: ";
    cin >> key;
    cout << "\n";
    if( mapaPropietarios.find(key) == mapaPropietarios.end() ){
        cout << "El propietario no ha sido registrada en el sistema.";
    }
    else{
        cout << "Que deseas modificar? \n";
        cout << "1 = Nombre -- 2 = Email -- 3 = Telefono\n";
        cout << "Respuesta: ";
        cin >> resp;
        if (resp == 1){
            cout << "Nuevo nombre: ";
            cin >> nombreNuevo;
            mapaPropietarios[key].setNombre(nombreNuevo);
            cout << "Nombre modificado correctamente\n\n";
        }
        else if (resp == 2){
            cout << "Nuevo email: ";
            cin >> emailNuevo;
            mapaPropietarios[key].setEmail(emailNuevo);
            cout << "Email modificado correctamente\n\n";
        }
        else{
            cout << "Nuevo telefono: ";
            cin >> telNuevo;
            mapaPropietarios[key].setTelefono(telNuevo);
            cout << "Telefono modificado correctamente.\n\n";
        }     
    }
}

void Sistema::numPropietariosRegistrados(){
    int count = 0, i;
    for (auto i = begin(mapaPropietarios); i != end(mapaPropietarios); i++){
        count++;
    }
    cout <<"Hay " << count << " propietarios registrados en el directorio de la veterinaria.\n";
}


