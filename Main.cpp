#include "App.h"
#include <iostream>



void menu(App & app) {
    int opc = 0;
    do {
        cout << "\n ****Bienvenidos ****\n";
        cout << "1. Propietario agrega información del hogar \n";
        cout << "2. Lista de personas inscritas \n";
        cout << "3. Crear una reserva\n";
        cout << "-1. Salir \n";

        cin >> opc;

        switch (opc) {
            case 1:
                app.AgregarInfoHogar();
                break;
            case 2:
                app.listaPersonasSistema();
                break;
            case 3:
                app.hacerReserva();
                break;
            default:
                break;
        }
    } while (opc != 1);
}
    int main(){

        App app;
        menu(app);
        return 0;
    }