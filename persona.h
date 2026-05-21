//
// Created by munoz on 21/05/2026.
//

#ifndef UNTITLED4_PERSONA_H
#define UNTITLED4_PERSONA_H
#include <iostream>
#include <string>
#include "gimnasio.h"
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;
    int id;

public:
    Persona() : nombre(""), edad(0), id(0) {}

    Persona(string nom, int ed, int ident)
        : nombre(nom), edad(ed), id(ident) {}

    int getId() {
        return id;
    }

    virtual void mostrarDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "ID: " << id << endl;
    }
};

class Cliente : public Persona {
private:
    float peso;
    float altura;
    string objetivo;
    Membresia membresia;
    Rutina rutina;

public:
    Cliente() : Persona(), peso(0), altura(0), objetivo("") {}

    Cliente(string nom, int ed, int ident, float pes, float alt, string obj, Membresia mem)
        : Persona(nom, ed, ident), peso(pes), altura(alt), objetivo(obj), membresia(mem) {}

    float calcularIMC() {
        if (altura <= 0) {
            return 0;
        }
        return peso / (altura * altura);
    }

    void asignarRutina(Rutina r) {
        rutina = r;
    }

    // Sobrecarga
    void asignarRutina(string nombreRutina, string objetivoRutina) {
        rutina = Rutina(nombreRutina, objetivoRutina, 45, "Media");
    }

    // Sobreescritura de metodo
    void mostrarDatos() override {
        cout << "CLIENTE" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "ID: " << id << endl;
        cout << "Peso: " << peso << " kg" << endl;
        cout << "Altura: " << altura << " m" << endl;
        cout << "Objetivo: " << objetivo << endl;
        cout << "IMC: " << calcularIMC() << endl;

        cout << "\nMembresia:" << endl;
        membresia.mostrarMembresia();

        cout << "\nRutina asignada:" << endl;
        rutina.mostrarRutina();
    }
};

class Entrenador : public Persona {
private:
    string especialidad;
    int aniosExperiencia;

public:
    Entrenador() : Persona(), especialidad(""), aniosExperiencia(0) {}

    Entrenador(string nom, int ed, int ident, string esp, int anios)
        : Persona(nom, ed, ident), especialidad(esp), aniosExperiencia(anios) {}

    void asignarRutina(Cliente &cliente, Rutina rutina) {
        cliente.asignarRutina(rutina);
    }

    // Sobrecarga
    void asignarRutina(Cliente &cliente, string nombreRutina, string objetivoRutina) {
        cliente.asignarRutina(nombreRutina, objetivoRutina);
    }

    // Sobreescritura
    void mostrarDatos() override {
        cout << "Entrenador" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "ID: " << id << endl;
        cout << "Especialidad: " << especialidad << endl;
        cout << "Anios de experiencia: " << aniosExperiencia << endl;
    }
};
#endif //UNTITLED4_PERSONA_H