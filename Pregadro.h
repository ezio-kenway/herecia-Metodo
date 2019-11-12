//
// Created by utec on 12/11/19.
//

#ifndef AVA_PREGADRO_H
#define AVA_PREGADRO_H

#include <iostream>
#include <string>
#include "CAlumno.h"
using namespace std;

class Pregrado : public Alumno{
private:
    int practica;
public:
    Pregrado(int ,string , int , string ,int, int);
    void mostrarPregrado();
};
Pregrado::Pregrado(int codigo, string nombre, int dni, string carrera, int credAcum, int practica) : Alumno(codigo ,nombre,dni,carrera ,credAcum) {
    this->practica=practica;
}
void Pregrado::mostrarPregrado() {
    mostrarAlumno();
    cout<<practica<<endl;
}
#endif //AVA_PREGADRO_H
