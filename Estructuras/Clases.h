#ifndef CLASES_H
#define CLASES_H

#include <string>

#include "Lista.h"
#include "Profesor.h"

using namespace std;

class Clases{
    Lista<Profesor> *profesores;
    string codigoClase;
    Lista<CortesNotas> notas;//ESTO TODAVÍA NO SÉ 

    Lista<Profesor>* getProfesores() const {return profesores;}//No modifica el estado

    void setProfesores(Lista<Profesor>* nuevosProfesores) {
        profesores = nuevosProfesores;
    }

    void setCodigoClase(string nuevoCodigoClase){
        codigoClase=nuevoCodigoClase;
    }

    string getCodigoClase(){return codigoClase;}

    Lista<CortesNotas>& getNotas(){return notas;}
    
    void setNotas(const Lista<CortesNotas>& nuevasNotas){//No cambia el estado
        notas = nuevasNotas;
    }

    
};

#endif