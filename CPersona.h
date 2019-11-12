//
// Created by utec on 12/11/19.
//

#ifndef AVA_CPERSONA_H
#define AVA_CPERSONA_H

#include <iostream>
#include <string>
using namespace std;
class Persona {
private:
    int codigo, dni;
    string nombre;
public:
    Persona(int, string, int);

    void mostrarPersona();
};
Persona::Persona(int codigo, string nombre, int dni) {
    this->codigo=codigo;
    this->nombre=nombre;
    this->dni=dni;
}
void Persona::mostrarPersona() {
    cout<<codigo<<" " <<nombre<<" "<<dni<<endl;
}


#endif //AVA_CPERSONA_H
