//
// Created by munoz on 25/05/2026.
//

#ifndef UNTITLED4_MEMBRESIA_H
#define UNTITLED4_MEMBRESIA_H
#include <iostream>
#include <string>
using namespace std;

class Membresia{

private:

    string tipo;
    float costo;
    int duracionDias;

public:

    Membresia()
    : tipo("Sin membresia"), costo(0), duracionDias(0){}

    Membresia(string tip,float cos,int duracion)
    : tipo(tip), costo(cos), duracionDias(duracion){}

    float calcularCosto(){

        return costo;

    }

    void mostrarMembresia(){

        cout<<"Tipo: "<<tipo<<endl;
        cout<<"Costo: "<<costo<<endl;
        cout<<"Duracion: "<<duracionDias<<" dias"<<endl;

    }

};
#endif //UNTITLED4_MEMBRESIA_H
