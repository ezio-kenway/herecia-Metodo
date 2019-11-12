//
// Created by utec on 12/11/19.
//

#ifndef AVA_DOCTORADO_H
#define AVA_DOCTORADO_H

#include <iostream>
#include <string>
#include "CAlumno.h"
using namespace std;

class Doctorado : public Alumno {
private:
    int papers;
    string tesis;
public:
    Doctorado(int ,string , int , string ,int, int, string);
    void mostrarDoctorado();
};
Doctorado::Doctorado(int codigo, string nombre, int dni, string carrera, int credAcum, int papers, string tesis)
    : Alumno(codigo ,nombre,dni,carrera ,credAcum) {
    this->papers=papers;
    this->tesis=tesis;
}

void Doctorado::mostrarDoctorado() {
    mostrarAlumno();
    cout<<papers<<" "<<tesis<<endl;
}

#endif //AVA_DOCTORADO_H
