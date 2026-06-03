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
    string matricula;

public:
    Persona();
    Persona(string nombre, int edad, string matricula);

    // Destructor virtual para polimorfismo
    virtual ~Persona() = default;

    string getNombre();
    void setNombre(string nombre);

    int getEdad();
    void setEdad(int edad);

    string getMatricula();

    // Método virtual puro (Clase abstracta)
    virtual string obtenerResumen() = 0;
};

// IMPLEMENTACIONES

Persona::Persona()
    : nombre(""), edad(0), matricula("") {}

Persona::Persona(string nombre, int edad, string matricula)
    : nombre(nombre), edad(edad), matricula(matricula) {}

string Persona::getNombre() {
    return nombre;
}

void Persona::setNombre(string nombre) {
    this->nombre = nombre;
}

int Persona::getEdad() {
    return edad;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

string Persona::getMatricula() {
    return matricula;
}
#endif //UNTITLED4_PERSONA_H
