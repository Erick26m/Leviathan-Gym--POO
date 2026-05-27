//
// Created by munoz on 25/05/2026.
//

#ifndef UNTITLED4_RUTINA_H
#define UNTITLED4_RUTINA_H
#include <iostream>
#include <string>
using namespace std;
class Rutina {
private:
    string nombre;
    string objetivo;
    int duracionMin;
    string dificultad;

public:
    Rutina();
    Rutina(string nombre, string objetivo, int duracionMin, string dificultad);

    string getNombre();
    void setNombre(string nombre);

    string getObjetivo();
    void setObjetivo(string objetivo);

    int getDuracionMin();
    void setDuracionMin(int duracionMin);

    string getDificultad();
    void setDificultad(string dificultad);

    string obtenerDescripcion();
};

Rutina::Rutina()
    : nombre("Sin rutina"), objetivo("Sin objetivo"), duracionMin(0), dificultad("Sin dificultad") {}

Rutina::Rutina(string nombre, string objetivo, int duracionMin, string dificultad)
    : nombre(nombre), objetivo(objetivo), duracionMin(duracionMin), dificultad(dificultad) {}

string Rutina::getNombre() {
    return nombre;
}

void Rutina::setNombre(string nombre) {
    this->nombre = nombre;
}

string Rutina::getObjetivo() {
    return objetivo;
}

void Rutina::setObjetivo(string objetivo) {
    this->objetivo = objetivo;
}

int Rutina::getDuracionMin() {
    return duracionMin;
}

void Rutina::setDuracionMin(int duracionMin) {
    this->duracionMin = duracionMin;
}

string Rutina::getDificultad() {
    return dificultad;
}

void Rutina::setDificultad(string dificultad) {
    this->dificultad = dificultad;
}

string Rutina::obtenerDescripcion() {
    return nombre + " | Objetivo: " + objetivo + " | " + to_string(duracionMin) + " min | " + dificultad;
}
#endif //UNTITLED4_RUTINA_H
