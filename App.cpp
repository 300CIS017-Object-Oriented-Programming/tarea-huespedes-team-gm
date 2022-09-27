//
// Created by maria jose pava on 13/09/22.
//
#include <iostream>
#include "App.h"



App::App() {

    cout << "Inicilizar datos aqui\n";

    numeroReserva = 0;

}


Huesped* App::buscarHuesped(string id) {

    Huesped * huespedTemp = NULL;

    if(huespedes.find(id) != huespedes.end()){

        huespedTemp = huespedes[id];
    }

    return huespedTemp;

}

Propietario *App::buscarPropietario(string id) {

    Propietario * propTemp = NULL;

    if(propietarios.find(id) != propietarios.end()){

        propTemp = propietarios[id];
    }

    return propTemp;

}


void App::hacerReserva() {

    string fechaInicio;
    string fechaFinal;

    string idProp;
    string idHuesped;

    cout << "Ingrese fecha de inicio:\n";
    getline(cin,fechaInicio);
    cin.ignore();
    cout << "Ingrese fecha final:\n";
    getline(cin, fechaFinal);
    cin.ignore();
    cout << "ID del Propietario:\n";
    getline(cin, idProp);
    cin.ignore();
    cout << "ID del Huesped:\n";
    getline(cin, idHuesped);
    cin.ignore();


    Propietario * propietario = buscarPropietario(idProp);
    Huesped * huesped = buscarHuesped(idHuesped);

    if(propietario != NULL && huesped != NULL ){

        //reservas[propTemp->getIdentificacion()] = propTemp;
        int numReserva = numeroReserva;
        cout << "Su numero de reserva es: " << numeroReserva << "\n";
        //Creacion de la reserva; Se agrega al mapa de reservas
        reservas[numeroReserva] = new Reserva(fechaInicio,fechaFinal,propietario,huesped);
        //Se cambia el status del propietario a ocupado
        propietario->setRecibeHuespedes(false);

        //Se actualiza el numero de reservas
        numeroReserva++;

        cout << "Se creo la reserva exitosamente!\n";

    }
    if(propietario == NULL){
        cout << "Lo sentimos, ese propietario no esta registrado\n";
    }
    if(huesped == NULL){
        cout << "Lo sentimos, ese huesped no esta registrado\n";
    }






}

void App::AgregarInfoHogar() {
    string id;
    string direccion;
    int decision=1;
    cout << "Digite el id del propietario para agregar o modificar información de su hogar: \n";
    cin.ignore();
    getline(cin, id);
    if (propietarios.find(id) == propietarios.end()) {
        cout << "No fue encontrado el propietario";
    } else {
        while(decision!=-1){
        cout << "1. Modificar dirección\n";
        cout << "10. Agregar información sobre el número de camas\n";
        cout << "11. Agregar información sobre bebés\n";
            cout << "11. Agregar descripción\n";
        cout << "-1. Salir \n";
        cin >> decision;

        switch (decision) {
            case 1:
                AgregarInfoHogarDir(id);
                break;
            case 2:
                AgregarInfoHogarCamas(id);
                break;
            case 3:
                AgregarInfoHogarBebes(id);
                break;
            case 4:
                AgregarInfoHogarDescripcion(id);
                break;
        }


    }
}
}

void App::AgregarInfoHogarDir(string id) {
    string direccion;
    cout << "Digite la dirección: \n";
    getline(cin, direccion);
    propietarios.find(id)->second->getHogar()->setDireccion(direccion);
}
void App::AgregarInfoHogarCamas(string id) {
    int Camas;
    cout << "Digite el número de camas: \n";
    cin>> Camas;
    propietarios.find(id)->second->getHogar()->setNumCamas(Camas);
}
void App::AgregarInfoHogarBebes(string id) {
    int Bebes;
    cout << "Digite 1 si puede alojar bebés, 2 si no puede alojar bebes: \n";
    cin>> Bebes;
    if(Bebes==1){
    propietarios.find(id)->second->getHogar()->setBebes(true);
    }
    else{
        propietarios.find(id)->second->getHogar()->setBebes(false);
    }
}
void App::AgregarInfoHogarDescripcion(string id) {
    string descripcion;
    cout<<"Digite la descripción de su hogar: \n";
    getline(cin, descripcion);
    propietarios.find(id)->second->getHogar()->setDescripcion(descripcion);

}

void App::listaPersonasSistema(){
    string id;
    for(auto itr: propietarios){
        cout<<"Digite su id";
        if (propietarios.find(id) == propietarios.end()) {
            cout<<"No está registrado el id ingresado como propietario";
        }
        else{
            cout <<"Propietarios:";
            for (auto itr: propietarios){
                cout<<itr.second->getNombre();
            }
            cout <<"Huespedes:";
            for (auto itr: huespedes){
                cout<<itr.second->getNombre();
            }
        }
    }
}

void App::eliminarReserva() {//Funcion a liberar una reserva dentro del sistema
    string fechaFinAux;
    cout << "Ingresa la fecha fin de la reserva a liberar" << endl;
    cin.ignore();
    getline(cin, fechaFinAux);

    if (reservas.at(fechaFinAux)->getFechaFin() == fechaFinAux){
        cout << "La reserva con fecha final" << fechaFinAux << "sera liberada del sistema" << endl;
        delete reservas.at(fechaFinAux);
    }
    else {
        cout << "La fecha no coincide con la fecha final de alguna reserva";
    }
}

void App::agregarEvaluaciones() {
    //FIX: Arreglar la parte de la calificacion por si es primera vez o nueva;
    string fecha;
    double calificacion;
    Propietario * evaluado;
    Huesped * evaluador;
    int aux;

    cout << "Primera vez o Nueva reserva? 1. Primera vez 2. Nueva reserva" << endl; cin >> aux;

    //FIX: Arreglar las entradas de datos

    if (aux == 1){
        cout << "Digite la fecha para la evaluacion" << endl;
        cin.ignore();
        getline(cin, fecha);

        cout << "digite cual es la calificacion que se le va a adjudicar al alojamiento" << endl; cin >> Evaluacion->calificacion = calificacion;
        cout << "Digite a quien va a dirigirse esta evaluacion: " << endl; cin >> evaluado;
        cout << "Digite su ID" << endl; cin >> evaluador;
    }
    else {
        cout << "Digite la fecha para la evaluacion" << endl;
        cin.ignore();
        getline(cin, fecha);

        cout << "digite cual es la calificacion que se le va a adjudicar al alojamiento" << endl; cin >> calificacion;
        calificacion = (Evaluacion.at(calificacion) + calificacion)/2
        cout << "Digite a quien va a dirigirse esta evaluacion: " << endl; cin >> propietarios.at(evaluado);
        cout << "Digite su ID" << endl; cin >> huespedes.at(evaluador);
    }
    }

