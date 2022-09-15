
#include "Propietario.h"


Propietario::Propietario() : Persona() {

    hogar = NULL;
    recibeHuespedes = false;
}


Propietario::Propietario(Hogar *hogar, bool recibeHuespedes) : Persona(id,nombre,sexo,fechaNacimiento,puntaje){

    this->hogar = hogar;
    this->recibeHuespedes = recibeHuespedes;
}

Hogar *Propietario::getHogar() const {
    return hogar;
}

void Propietario::setHogar(Hogar *hogar) {
    Propietario::hogar = hogar;
}

bool Propietario::getRecibeHuespedes() const {
    return recibeHuespedes;
}

void Propietario::setRecibeHuespedes(bool recibeHuespedes) {
    Propietario::recibeHuespedes = recibeHuespedes;
}
