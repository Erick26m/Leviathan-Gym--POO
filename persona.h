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
    Persona();
    Persona(string nombre, int edad, int id);

    // Destructor del virtual
    virtual ~Persona() = default;

    string getNombre();
    void setNombre(string nombre);

    int getEdad();
    void setEdad(int edad);

    int getId();

    // Metodo virtual
    virtual string obtenerResumen() = 0;
};

Persona::Persona()
    : nombre(""), edad(0), id(0) {}

Persona::Persona(string nombre, int edad, int id)
    : nombre(nombre), edad(edad), id(id) {}

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

int Persona::getId() {
    return id;
}
#endif //UNTITLED4_PERSONA_H
