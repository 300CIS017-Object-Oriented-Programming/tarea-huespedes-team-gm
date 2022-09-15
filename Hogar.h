

#ifndef TAREA_HUESPEDES_TEAM_GM_HOGAR_H
#define TAREA_HUESPEDES_TEAM_GM_HOGAR_H

#include <string>
using std::string;


class Hogar {

private:
    string direccion;
    int numCamas;
    bool bebes;
    string descripcion;

public:
    Hogar();

    Hogar(string direccion, int numCamas, bool bebes, string descripcion);

    const string &getDireccion() const;
    void setDireccion(const string &direccion);


    int getNumCamas() const;
    void setNumCamas(int numCamas);

    bool hayBebes() const;
    void setBebes(bool bebes);

    const string &getDescripcion() const;

    void setDescripcion(const string &descripcion);



};


#endif //TAREA_HUESPEDES_TEAM_GM_HOGAR_H
