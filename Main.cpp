#include <iostream>
#include "Sistema.h"

using std::cin;
using std::cout;
using std::string;

void menu(Sistema sistema){
    int opc = 0;
    do
    {
        cout << "Bienvenido!  \n\n";
        cout << "1. Agregar propietario \n";
        cout << "2. Agregar mascota \n";
        cout << "3. Modificar info propietario \n";
        cout << "4. Eliminar propietario \n";
        cout << "5. Listar propietarios \n";
        cout << "6. Num de propietarios registrados \n";
        cout << "7. Info de propietarios registrados \n";
        cout << "8. Info de mascotas registrados \n";
        cout << "9. Consultar propietarios de la mascota \n";
        cout << "10. Consultar mascotas del propietario \n";
        cout << "11. Asociar mascota a un propietario \n";
        cout << "12. Asociar nuevo propietario a una mascota \n";
        cout << "13. Cambiar el estatus de la mascota \n";
        cout << "14. Eliminar asociacion propietario a mascota \n";
        cout << "0. Salir \n\n";
        cout << "Respuesta: ";
        cin >> opc;

        switch (opc)
        {
        case 1:
            sistema.agregarPropietario();
            break;
        case 2:
            sistema.agregarMascota();
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        case 5:
            sistema.listarPropietario();
            break;
        case 6:
            sistema.numPropietariosRegistrados();
            break;
        case 7:
            sistema.infoPropietariosRegistrados();
            break;
        case 8:
            sistema.infoMascotasRegistradas();
            break;
        case 9:
            sistema.consultarMascotaPropietario();
            break;
        case 10:
            
            break;
        case 11:
            
            break;
        case 12:
            
            break;
        case 13:
            sistema.cambiarStatusMascota();
            break;
        case 14:
            
            break;
        default:
            break;
        }
    } while (opc != 0);
}

int main()
{
    Sistema sistema;
    menu(sistema);
    return 0;
}