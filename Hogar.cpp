
#include "Hogar.h"


Hogar::Hogar() {


    direccion = "";
    numCamas = 0;
    bebes = false;
    descripcion = "";
}

Hogar::Hogar(string direccion, int numCamas, bool bebes, string descripcion) : direccion(direccion), numCamas(numCamas)
, bebes(bebes), descripcion(descripcion){}


int Hogar::getNumCamas() const {
    return numCamas;
}

void Hogar::setNumCamas(int numCamas) {
    Hogar::numCamas = numCamas;
}

const string &Hogar::getDireccion() const {
    return direccion;
}

void Hogar::setDireccion(const string &direccion) {
    Hogar::direccion = direccion;
}

bool Hogar::hayBebes() const {
    return bebes;
}

void Hogar::setBebes(bool bebes) {
    Hogar::bebes = bebes;
}

const string &Hogar::getDescripcion() const {
    return descripcion;
}

void Hogar::setDescripcion(const string &descripcion) {
    Hogar::descripcion = descripcion;
}
