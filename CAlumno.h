//
// Created by utec on 12/11/19.
//

#ifndef AVA_CALUMNO_H
#define AVA_CALUMNO_H

#include <iostream>
#include <string>
#include "CPersona.h"

class Alumno : public Persona{
private:
    int credAcum;
    string carrera;
public:
    Alumno(int ,string , int , string ,int );
    void mostrarAlumno();
};
Alumno::Alumno(int codigo , string nombre, int dni, string carrera ,int credAcum) : Persona(codigo,nombre,dni) {
    this->credAcum=credAcum;
    this->carrera=carrera;
}
void Alumno::mostrarAlumno() {
    mostrarPersona();
    cout<<credAcum<<" "<<carrera<<endl;
}

#endif //AVA_CALUMNO_H
