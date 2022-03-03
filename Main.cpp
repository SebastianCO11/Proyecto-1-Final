#include <iostream>
#include "Sistema.h"

using std::cin;
using std::cout;
using std::string;

void menu(Sistema sistema){
    int opc = 0;
    do
    {
        cout << "Bienvenidos  \n";
        cout << "1. Agregar propietario \n";
        cout << "2. Agregar mascota \n";
        cout << "3. Modificar info propietario \n";
        cout << "4. Eliminar propietario \n";
        cout << "5. Listar propietario \n";
        cout << "6. Num de propietarios registrados \n";
        cout << "7. Info de propietarios registrados \n";
        cout << "8. Info de mascotas registrados \n";
        cout << "9. Consultar propietarios de la mascota \n";
        cout << "10. Consultar mascotas del propietario \n";
        cout << "11. Asociar mascota a un propietario \n";
        cout << "12. Asociar nuevo propietario a una mascota \n";
        cout << "13. Cambiar el estatus de la mascota \n";
        cout << "14. Eliminar asociacion propietario a mascota \n";
        cout << "0. Salir \n";
        cout << "Respuesta: ";
        cin >> opc;

        switch (opc)
        {
        case 1:
            sistema.agregarPropietario();
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        case 5:
            
            break;
        case 6:
            
            break;
        case 7:
            
            break;
        case 8:
            
            break;
        case 9:
            sistema.consultarMascotaPropietario();
            break;
        case 10:
            
            break;
        default:
            break;
        }
    } while (opc != 0);
}

int main()
{
    Sistema sistema;
    sistema.inicializarDatos();
    menu(sistema);
    return 0;
}