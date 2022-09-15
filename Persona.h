//
// Created by maria jose pava on 15/09/22.
//

#ifndef AIRBNBCOL_PERSONA_H
#define AIRBNBCOL_PERSONA_H

#include <string>

using std::string;


class Persona {

public:
    string id;
    string nombre;
    char sexo;
    string fechaNacimiento;
    double puntaje;

public:

    Persona();
    Persona(string id, string nombre, char sexo, string fechaNacimiento, double puntaje);

    const string &getId() const;
    void setId(const string &id);

    const string &getNombre() const;
    void setNombre(const string &nombre);

    char getSexo() const;
    void setSexo(char sexo);

    const string &getFechaNacimiento() const;
    void setFechaNacimiento(const string &fechaNacimiento);

    double getPuntaje() const;
    void setPuntaje(double puntaje);

};


#endif //AIRBNBCOL_PERSONA_H
