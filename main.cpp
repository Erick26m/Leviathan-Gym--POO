#include <iostream>
#include "persona.h"
using namespace std;

int main() {

    Membresia mem1("Premium", 850, 30);
    Rutina rutina1("Full Body", "Ganar musculo", 60, "Media");

    Cliente cliente1("Armando", 19, 101, 75.5, 1.72, "Ganar musculo", mem1);
    Entrenador entrenador1("Erick", 30, 201, "Hipertrofia", 5);

    entrenador1.asignarRutina(cliente1, rutina1);

    cliente1.mostrarDatos();

    cout << "\n\n" << endl;

    entrenador1.mostrarDatos();

    cout << "\n\n" << endl;

    // Ejemplo de sobrecarga
    entrenador1.asignarRutina(cliente1, "Cardio intenso", "Bajar grasa");
    return 0;
}