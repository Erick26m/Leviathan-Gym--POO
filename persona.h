//
// Created by munoz on 21/05/2026.
//

#ifndef UNTITLED4_PERSONA_H
#define UNTITLED4_PERSONA_H
#include <iostream>
#include <string>
using namespace std;
class Persona {

protected:
    string nombre;
    int edad;
    int id;

public:

    Persona() : nombre(""), edad(0), id(0) {}

    Persona(string nom,int ed,int ident)
    : nombre(nom),edad(ed),id(ident){}

    int getId(){
        return id;
    }

    virtual void mostrarDatos(){

        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Edad: "<<edad<<endl;
        cout<<"ID: "<<id<<endl;

    }
};
#endif //UNTITLED4_PERSONA_H
