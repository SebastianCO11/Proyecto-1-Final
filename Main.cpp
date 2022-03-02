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
        cout << "1. Mostrar informacion \n";
        cout << "2. Usuarios con parqueadero \n";
        cout << "3. Usuarios sin parqueadero \n";
        cout << "4. Num usuarios sin y con parqueadero \n";
        cout << "5. Usuarios con area mayor a 50 \n";
        cout << "6. Usuarios con propiedad libre \n";
        cout << "7. Piso a consultar \n";
        cout << "8. Pisos con parqueadero \n";
        cout << "9. Pisos con numero de parqueadero \n";
        cout << "10. Recaudar administracion \n";
        cout << "0. Salir \n";
        cout << "Respuesta: ";
        cin >> opc;

        switch (opc)
        {
        case 1:
            
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