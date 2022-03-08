#include "Sistema.h"

/* 
    Se encarga de comprobar que no existe el propietario, para despúes
    solicitarle todos los datos correspondientes y enviarlos al constructor.
*/
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

/*
    Primero comprueba que no existe la mascota, para despúes solicitarle 
    todos los datos correspondientes y enviarlos al constructor.
*/
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
    if( mapaMascotas.find(key) != mapaMascotas.end() ){
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
        mapaMascotas[identificacionMascota] = mascotaT;
    }
}

/* 
    Comprueba si el propietario existe en el mapa para asi poder
    modificar la información requerida haciendo uso de "sets"
 */
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

/*
    Comprueba si el propietario existe en el mapa para despúes
    elminarlo de este utilizando la funcion "erase".
*/
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

/* 
    Mediante el uso de iteradores recorre el mapa de los propietarios
    e imprime el ID y nombre haciendo uso de "gets" en conjunto a la 
    posición del iterador
*/
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

/* 
    Verifica la existencia de la mascota y propietario en cuestión, para luego
    enviarlos al constructor de PropietarioxMascota para asi incluirlos dentro
    del vector (PXMvector) y mantener la relación muchos a muchos
*/
void Sistema::asociarMascotaPropietario(){
    double keyMascota, keyPropietario;
    cout << "Ingrese el ID de la mascota: ";
    cin >> keyMascota;
    cout << "\n";
    cout << "Ingrese el ID de la propietario: ";
    cin >> keyPropietario;
    cout << "\n";
    if( mapaMascotas.find(keyMascota) == mapaMascotas.end() ){
        cout << "La mascota no ha sido registrada en el sistema.\n\n";
        if( mapaPropietarios.find(keyPropietario) == mapaPropietarios.end() ){
            cout << "El propietario no ha sido registrada en el sistema.\n\n";
        }
    }
    else{
        PropietarioxMascota PXMtemporal(mapaPropietarios[keyPropietario], 
                                        mapaMascotas[keyMascota]);
        PXMvector.push_back(PXMtemporal);
        cout << "Se acaba de asociar el propietario a la mascota\n";
    }
}

/*
    Recorre el mapa de propietarios con un contador que aumenta proporcionalmente
    al numero de propietarios actuales del mapa e imprime esta información
*/
void Sistema::numPropietariosRegistrados(){
    int count = 0;
    for (auto i : mapaPropietarios){
        count++;
    }
    cout <<"Hay " << count << " propietarios registrados en el directorio de la veterinaria.\n";
}

/* 
    Mediante el uso de iteradores recorre el mapa de las mascotas e imprime la información
    que se encuentra en cada una de las posiciones que va teniendo el iterador
*/
void Sistema::infoMascotasRegistradas(){
    int count = 0;
    for (itrMascotas = mapaMascotas.begin(); itrMascotas != mapaMascotas.end(); itrMascotas++){
        count++;
        cout << "Mascota #" << count << "\n";
        itrMascotas->second.infoMascota();
    }
    if (count == 0){
        cout << "No hay mascotas registradas actualmente.\n\n";
    }
}

/* 
    Mediante el uso de iteradores recorre el mapa de los propietarios e imprime la información
    que se encuentra en cada una de las posiciones que va teniendo el iterador
*/
void Sistema::infoPropietariosRegistrados(){
    int count = 0;
    for (itrPropietarios = mapaPropietarios.begin(); itrPropietarios != mapaPropietarios.end(); itrPropietarios++){
        count++;
        cout << "Propietario #" << count << "\n";
        itrPropietarios->second.infoPropietario();
    }
    if (count == 0){
        cout << "No hay propietarios registrados actualmente.\n\n";
    }
}

/* 
    Valida la existencia de la mascota para asi comparar la llave (ID de la mascota)
    con posiciones en el vector (PXMvector) y una vez encontrada la posición se 
    imprime el propietario asociado.
*/
void Sistema::consultarPropietariosMascota(){
    int key, i;
    cout << "Ingrese el ID de la mascota: ";
    cin >> key;
    cout << "\n";
    if( mapaMascotas.find(key) == mapaMascotas.end() ){
        cout << "La mascota no ha sido registrada en el sistema.";
    }
    else{
        cout << "Los propietarios de la mascota son: \n";
        for (i = 0; i < mapaPropietarios.size(); i++ ){
            if( PXMvector[i].getMascota().getIdentificacionMascota() == key ){
                PXMvector[i].getPropietario().infoPropietario();
            }
        }
    }
    cout << "\n";
}

/* 
    Valida la existencia del propietario para despúes comparar la 
    llave (ID del propietario) con posiciones en el vector (PXMvector)
    y una vez encontrada dicha posición se imprime la mascota asociada.
*/
void Sistema::consultarMascotaPropietario(){
    int key, i;
    cout << "Ingrese el ID del propietario: ";
    cin >> key;
    cout << "\n";
    if( mapaPropietarios.find(key) == mapaPropietarios.end() ){
        cout << "El propietario no ha sido registrada en el sistema.";
    }
    else{
        cout << "Las mascotas del propietario son: \n";
        for (i = 0; i < mapaMascotas.size(); i++ ){
            if( PXMvector[i].getPropietario().getIdentificacion() == key ){
                PXMvector[i].getMascota().infoMascota();
            }
        }
    }
    cout << "\n";
}

/*
    Comprueba si la mascota existe, para luego mediante "gets" y "sets" encontrar 
    y cambiar el estado de dicha mascota y por ultimo registra su fecha de defunción
    con ayuda de la libreria "ctime"
*/
void Sistema::cambiarStatusMascota(){
    int key, temporal;
    cout << "Ingrese el ID de la mascota: ";
    cin >> key;
    cout << "\n";
    if( mapaMascotas.find(key) == mapaMascotas.end() ){
        cout << "La mascota no ha sido registrada en el sistema.";
    }
    else{
        time_t tiempoActual = time(NULL);  // instante actual
        struct tm* aptTiempoLocal = localtime(&tiempoActual);
        tm stTiempo = *gmtime(&tiempoActual);
        //cambiar status
        if( mapaMascotas[key].getStatusExistencia() == true){
            mapaMascotas[key].setStatusExistencia(false);
        }
        cout << "Status cambiado.\n";   
        cout << "Fecha de muerte (dd-mm-aaaa): " << stTiempo.tm_mday << "/" << stTiempo.tm_mon+1 << "/"
        << stTiempo.tm_year+1900 << endl;
        cout << "\n";
    }
}

/* 
   Verifica la existencia de la mascota y propietario en cuestión, despúes recorre
   el vector (PXMvector) comparando que nuestra posición en el vector sea igual a 
   la llave que deseamos elimminar (ID del propietario), al encontrarlo se eliminará
   con ayuda de la función "erase" la posición deseada
*/
void Sistema::eliminarPropietarioMascota(){
    double keyMascota, keyPropietario;
    cout << "Ingrese el ID de la mascota: ";
    cin >> keyMascota;
    cout << "\n";
    cout << "Ingrese el ID del propietario a eliminar: ";
    cin >> keyPropietario;
    cout << "\n";
    if( mapaMascotas.find(keyMascota) == mapaMascotas.end() ){
        cout << "La mascota no ha sido registrada en el sistema.\n\n";
        if( mapaPropietarios.find(keyPropietario) == mapaPropietarios.end() ){
            cout << "El propietario no ha sido registrada en el sistema.\n\n";
        }
    }
    else{
        int j, k = 0;
        for(j = 0; j < PXMvector.size(); j++){
            if( PXMvector[j].getPropietario().getIdentificacion() == keyPropietario){
                PXMvector.erase(PXMvector.begin()+k);
            }
            k++;
        }
        cout << "Se acaba de eliminar el propietario a la mascota\n";
    }
}




