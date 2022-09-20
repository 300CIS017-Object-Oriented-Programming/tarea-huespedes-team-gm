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
#include <string.h>

using std::unordered_map;
using std::string;
using std::vector;


using namespace std;

class App {


private:

    unordered_map<string, Huesped*>huespedes;
    unordered_map<string, Propietario*>propietarios;
    unordered_map<int, Reserva*>reservas;

    int numeroReserva;

public:

    App();

    void hacerReserva();

    void AgregarInfoHogar();
    void AgregarInfoHogarDir(string);
    void AgregarInfoHogarCamas(string);
    void AgregarInfoHogarBebes(string);
    void AgregarInfoHogarDescripcion(string);
    void listaPersonasSistema();
    void eliminarReserva();
    //Hogar* AgregarInfoHogar();
    void agregarEvaluaciones();

    Propietario* buscarPropietario(string id);
    Huesped* buscarHuesped(string id);





};






#endif //TAREA_HUESPEDES_TEAM_GM_APP_H
