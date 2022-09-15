//
// Created by maria jose pava on 13/09/22.
//

#ifndef TAREA_HUESPEDES_TEAM_GM_RESERVA_H
#define TAREA_HUESPEDES_TEAM_GM_RESERVA_H

#include "Huesped.h"
#include "Propietario.h"

#include <string>
using std::string;

class Reserva {

private:
    string fechaInicio;
    string fechaFin;
    Propietario * propietario;
    Huesped * huesped;

public:

    Reserva();

    Reserva(string fechaInicio, string fechaFin,Propietario * propietario, Huesped * huesped);

    const string &getFechaInicio() const;

    void setFechaInicio(const string &fechaInicio);

    const string &getFechaFin() const;

    void setFechaFin(const string &fechaFin);

    double getCalificacion() const;

    void setCalificacion(double calificacion);

    Propietario *getPropietario() const;

    void setPropietario(Propietario *propietario);

    Huesped *getHuesped() const;

    void setHuesped(Huesped *huesped);

};


#endif //TAREA_HUESPEDES_TEAM_GM_RESERVA_H
