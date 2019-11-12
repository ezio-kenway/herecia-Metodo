//
// Created by utec on 12/11/19.
//

#ifndef AVA_PROFESOR_H
#define AVA_PROFESOR_H

#include <iostream>
#include <string>
#include "CPersona.h"
using namespace std;
class Profesor : public Persona {
private:
    int salario;
    string depart;
public:
    Profesor(int ,string , int ,int, string);
    void mostrarProfesor();
};
Profesor::Profesor(int codigo, string nombre, int dni, int salario, string depart) : Persona(codigo, nombre, dni) {
    this->salario=salario;
    this->depart=depart;
}
void Profesor::mostrarProfesor() {
    mostrarPersona();
    cout<<salario<<" " <<depart<<endl;
}

#endif //AVA_PROFESOR_H
