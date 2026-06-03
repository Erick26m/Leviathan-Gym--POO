//
// Created by munoz on 25/05/2026.
//

#ifndef UNTITLED4_INSCRIPCION_H
#define UNTITLED4_INSCRIPCION_H
#include <iostream>
#include <string>
using namespace std;

class Inscripcion {
private:
    string tipo;
    float costo;
    int duracionMeses;

public:
    Inscripcion();
    Inscripcion(string tipo, float costo, int duracionMeses);

    string getTipo();
    float getCosto();
    int getDuracionMeses();

    float calcularCosto();
    string obtenerDescripcion();
};

Inscripcion::Inscripcion()
    : tipo("Sin inscripcion"), costo(0), duracionMeses(0) {}

Inscripcion::Inscripcion(string tipo, float costo, int duracionMeses)
    : tipo(tipo), costo(costo), duracionMeses(duracionMeses) {}

string Inscripcion::getTipo() {
    return tipo;
}

float Inscripcion::getCosto() {
    return costo;
}

int Inscripcion::getDuracionMeses() {
    return duracionMeses;
}

float Inscripcion::calcularCosto() {
    return costo;
}

string Inscripcion::obtenerDescripcion() {
    return tipo +
           "  Costo: $" + to_string(costo) +
           "  Duracion: " + to_string(duracionMeses) + " meses";
}
#endif //UNTITLED4_MEMBRESIA_H
