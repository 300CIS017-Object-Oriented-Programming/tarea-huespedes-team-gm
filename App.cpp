//
// Created by maria jose pava on 13/09/22.
//
#include <iostream>
#include "App.h"

using std::cout;

App::App() {

    cout << "Inicilizar datos aqui\n";

}


void App::hacerReserva() {



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