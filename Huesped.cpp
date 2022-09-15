

#include "Huesped.h"


Huesped::Huesped() : Persona(){

    infoHospital = "";
    ciudad = "";
}


Huesped::Huesped(string infoHospital, string ciudad) : Persona(id,nombre,sexo,fechaNacimiento,puntaje){

    this->infoHospital = infoHospital;
    this->ciudad = ciudad;

}

const string &Huesped::getInfoHospital() const {
    return infoHospital;
}

void Huesped::setInfoHospital(const string &infoHospital) {
    Huesped::infoHospital = infoHospital;
}

const string &Huesped::getCiudad() const {
    return ciudad;
}

void Huesped::setCiudad(const string &ciudad) {
    Huesped::ciudad = ciudad;
}
