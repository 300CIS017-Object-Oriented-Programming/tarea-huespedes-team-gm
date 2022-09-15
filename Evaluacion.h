

#ifndef TAREA_HUESPEDES_TEAM_GM_EVALUACIONES_H
#define TAREA_HUESPEDES_TEAM_GM_EVALUACIONES_H

#include "Propietario.h"
#include "Huesped.h"

class Evaluacion{


private:

    string fecha;
    double calificacion;
    Propietario * evaluado;
    Huesped * evaluador;


public:

    Evaluacion();

    Evaluacion(string fecha, double calificacion, Propietario * evaluado, Huesped  * evaluador);

    const string &getFecha() const;
    void setFecha(const string &fecha);

    double getCalificacion() const;
    void setCalificacion(double calificacion);

    Propietario *getEvaluado() const;
    void setEvaluado(Propietario *evaluado);

    Huesped *getEvaluador() const;
    void setEvaluador(Huesped *evaluador);

};


#endif //TAREA_HUESPEDES_TEAM_GM_EVALUACIONES_H
