#ifndef PROFESOR_H
#define PROFESOR_H

#include <string>
#include "Lista.h"
#include "CortesNotas.h"
#include "Temas.h"
using namespace std;

class Profesor{
    Lista<CortesNotas> *cortes;
    Lista<Temas> *temas;
    int cc,clases;
    string nombresProfe, apellidosProfe;   

    Lista<CortesNotas>* getCortes(){return cortes;}
    
    void setCortes(Lista<CortesNotas>* nuevosCortes){
        cortes = nuevosCortes;
    }     

    Lista<Temas>* getTemas(){return temas;}
    
    void setTemas(Lista<Temas>* nuevosTemas){
        temas = nuevosTemas;
    } 

    void setCC(int nuevoCC) {
        cc = nuevoCC;
    }

    int getCC(){return cc;}

    void setClases(int nuevaClases) {
        clases= nuevaClases;
    }

    int getClases(){return clases;}

    void setNombresProfe(string nuevoNombresProfe){
        nombresProfe=nuevoNombresProfe;
    }
    
    string getNombresProfe(){return nombresProfe;}

    void setApellidosProfe(string nuevoApellidosProfe){
        apellidosProfe=nuevoApellidosProfe;
    }
    
    string getTipoEvaluacion(){return apellidosProfe;}

};

#endif