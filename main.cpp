/*

En el main se prueban las clases principales.
Primero se crean objetos de tipo Inscripcion, Curso, Estudiante y Profesor.
Después, el profesor asigna cursos a los estudiantes.

También se demuestra el uso de polimorfismo usando apuntadores de tipo Persona*.
Con el método virtual obtenerResumen(), el programa ejecuta la versión
correcta dependiendo del tipo real del objeto.

Al final se libera la memoria con delete porque los objetos fueron creados
dinámicamente con new.
*/
using namespace std;
#include "academia.h"

int main() {
    Academia academia;
    academia.iniciar();

    return 0;
}
