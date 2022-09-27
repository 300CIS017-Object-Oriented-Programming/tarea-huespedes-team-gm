//
// Created by maria jose pava on 13/09/22.
//

#include "Evaluacion.h"


Evaluacion::Evaluacion() {

    fecha = "";
    calificacion = 0.0;
    evaluado = NULL;
    evaluador = NULL;
}

Evaluacion::Evaluacion(string fecha, double calificacion, Propietario *evaluado, Huesped *evaluador) {

    this->fecha = fecha;
    this->calificacion = calificacion;
    this->evaluado = evaluado;
    this->evaluador = evaluador;
}

const string &Evaluacion::getFecha() const {
    return fecha;
}

void Evaluacion::setFecha(const string &fecha) {
    Evaluacion::fecha = fecha;
}

double Evaluacion::getCalificacion() const {
    return calificacion;
}

void Evaluacion::setCalificacion(double calificacion) {
    Evaluacion::calificacion = calificacion;
}

Propietario *Evaluacion::getEvaluado() const {
    return evaluado;
}

void Evaluacion::setEvaluado(Propietario *evaluado) {
    Evaluacion::evaluado = evaluado;
}

Huesped *Evaluacion::getEvaluador() const {
    return evaluador;
}

void Evaluacion::setEvaluador(Huesped *evaluador) {
    Evaluacion::evaluador = evaluador;
}
