//
// Created by maria jose pava on 13/09/22.
//

#include "Reserva.h"

Reserva::Reserva() {

     fechaInicio = "";
     fechaFin = "";
     calificacion = 0.0;
     propietario = NULL;
     huesped = NULL;
}

Reserva::Reserva(string fechaInicio, string fechaFin, double calificacion, Propietario *propietario, Huesped *huesped) {

    this->fechaInicio = fechaInicio;
    this->fechaFin = fechaFin;
    this->calificacion = calificacion;
    this->propietario = propietario;
    this->huesped = huesped;
}

const string &Reserva::getFechaInicio() const {
    return fechaInicio;
}

void Reserva::setFechaInicio(const string &fechaInicio) {
    Reserva::fechaInicio = fechaInicio;
}

const string &Reserva::getFechaFin() const {
    return fechaFin;
}

void Reserva::setFechaFin(const string &fechaFin) {
    Reserva::fechaFin = fechaFin;
}

double Reserva::getCalificacion() const {
    return calificacion;
}

void Reserva::setCalificacion(double calificacion) {
    Reserva::calificacion = calificacion;
}

Propietario *Reserva::getPropietario() const {
    return propietario;
}

void Reserva::setPropietario(Propietario *propietario) {
    Reserva::propietario = propietario;
}

Huesped *Reserva::getHuesped() const {
    return huesped;
}

void Reserva::setHuesped(Huesped *huesped) {
    Reserva::huesped = huesped;
}
