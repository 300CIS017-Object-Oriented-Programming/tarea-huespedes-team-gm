//
// Created by maria jose pava on 13/09/22.
//
#include <iostream>

#include "App.h"

using std::cout;
using std::cin;

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