
#ifndef TAREA_HUESPEDES_TEAM_GM_PROPIETARIO_H
#define TAREA_HUESPEDES_TEAM_GM_PROPIETARIO_H

#include "Persona.h"
#include "Hogar.h"

#include <string>
using std::string;


class Propietario : public Persona{


private:

    Hogar *  hogar;
    bool recibeHuespedes;


public:

    Propietario();
    Propietario(Hogar * hogar, bool recibeHuespedes);

    Hogar *getHogar() const;
    void setHogar(Hogar *hogar);

    bool getRecibeHuespedes() const;
    void setRecibeHuespedes(bool recibeHuespedes);


};


#endif //TAREA_HUESPEDES_TEAM_GM_PROPIETARIO_H
