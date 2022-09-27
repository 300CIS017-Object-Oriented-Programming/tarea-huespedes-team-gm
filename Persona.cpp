//
// Created by maria jose pava on 15/09/22.
//

#include "Persona.h"

Persona::Persona() {

    id = "";
    nombre = "";
    sexo = 'x';
    fechaNacimiento = "";
    double puntaje;

}

Persona::Persona(string id, string nombre, char sexo, string fechaNacimiento, double puntaje) {


    this->id = id;
    this->nombre = nombre;
    this->sexo = sexo;
    this->fechaNacimiento = fechaNacimiento;
    this->puntaje = puntaje;
}

const string &Persona::getId() const {
    return id;
}

void Persona::setId(const string &id) {
    Persona::id = id;
}

const string &Persona::getNombre() const {
    return nombre;
}

void Persona::setNombre(const string &nombre) {
    Persona::nombre = nombre;
}

char Persona::getSexo() const {
    return sexo;
}

void Persona::setSexo(char sexo) {
    Persona::sexo = sexo;
}

const string &Persona::getFechaNacimiento() const {
    return fechaNacimiento;
}

void Persona::setFechaNacimiento(const string &fechaNacimiento) {
    Persona::fechaNacimiento = fechaNacimiento;
}

double Persona::getPuntaje() const {
    return puntaje;
}

void Persona::setPuntaje(double puntaje) {
    Persona::puntaje = puntaje;
}
