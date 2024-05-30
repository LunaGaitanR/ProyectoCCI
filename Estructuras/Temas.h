#ifndef TEMAS_H
#define TEMAS_H

#include <string>
using namespace std;

class Temas{
    int codigo;
    string nombreTema;

    void setCodigo(int nuevoCodigo) {
        codigo= nuevoCodigo;
    }

    int getClases(){return codigo;}

    void setNombreTema(string nuevoNombreTema){
        nombreTema=nuevoNombreTema;
    }
    
    string getNombreTema(){return nombreTema;}
};

#endif