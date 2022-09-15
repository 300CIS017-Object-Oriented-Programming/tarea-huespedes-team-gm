//
// Created by maria jose pava on 13/09/22.
//

#ifndef TAREA_HUESPEDES_TEAM_GM_APP_H
#define TAREA_HUESPEDES_TEAM_GM_APP_H
#include "Propietario.h"
#include "Persona.h"
#include "Evaluacion.h"
#include "Reserva.h"
#include "Hogar.h"
#include <unordered_map>

using std::unordered_map;


class App {

private:

    unordered_map<string, Huesped*>huespedes;
    unordered_map<string, Propietario*>propietarios;
    unordered_map<string, Reserva*>reservas;

public:

    App();

    void hacerReserva();
    Hogar* AgregarInfoHogar();



};






#endif //TAREA_HUESPEDES_TEAM_GM_APP_H
