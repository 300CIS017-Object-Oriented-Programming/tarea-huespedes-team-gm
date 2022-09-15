
#ifndef TAREA_HUESPEDES_TEAM_GM_HUESPED_H
#define TAREA_HUESPEDES_TEAM_GM_HUESPED_H

#include "Persona.h"
#include <string>
using std::string;

class Huesped : public Persona{


private:
    string infoHospital;
    string ciudad;

public:

    Huesped();
    Huesped(string infoHospital, string ciudad);

    const string &getInfoHospital() const;
    void setInfoHospital(const string &infoHospital);

    const string &getCiudad() const;
    void setCiudad(const string &ciudad);


};


#endif //TAREA_HUESPEDES_TEAM_GM_HUESPED_H
