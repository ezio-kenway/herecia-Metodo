#include <iostream>
#include "CAlumno.h"
#include "Profesor.h"
#include "Pregadro.h"
#include "Doctorado.h"
using namespace std;
int main() {
    Alumno * a1= new Alumno(1234,"Jose",48695284,"Transporte y turismo", 20);
    a1->mostrarAlumno();
    cout<<"********"<<endl;
    Profesor * p1=new Profesor(5678, "Juan", 58740269,35,"Finanzas");
    p1->mostrarProfesor();
    cout<<"********"<<endl;
    Pregrado * a2=new Pregrado(2468,"Piero", 73039164,"Ambiental", 20,15);
    a2->mostrarPregrado();
    cout<<"********"<<endl;
    Doctorado * a3= new Doctorado (2498,"Jose",73039153, "Minas", 25,50,"Estudio de minerales");
    a3->mostrarDoctorado();
}