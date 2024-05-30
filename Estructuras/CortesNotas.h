#ifndef CORTESNOTAS_H
#define CORTESNOTAS_H

#include "Lista.h"
#include  <string>
using namespace std;

//Estructura para no hacer una clase sólo por atributos
struct ParPorcentaje{
    int codigoTema;
    float porcentajeEvaluacion;
};

class CortesNotas{
    int corte;
    float porcentajeTipo;
    string tipoEvaluacion;
    Lista<ParPorcentaje>* pPorcentaje;

    void setCorte(int nuevoCorte) {
        corte = nuevoCorte;
    }

    int getCorte(){return corte;}

    void setPorcentajeTipo(int nuevoPorcentajeTipo) {
        porcentajeTipo = nuevoPorcentajeTipo;
    }

    int getPorcentajeTipo(){return porcentajeTipo;}

    void setTipoEvaluacion(string nuevoTipoEvaluacion){
        tipoEvaluacion=nuevoTipoEvaluacion;
    }
    
    string getTipoEvaluacion(){return tipoEvaluacion;}

    void setParPorcentaje(Lista<ParPorcentaje>* nuevosParPorcentaje) {
        pPorcentaje = nuevosParPorcentaje;
    }

    Lista<ParPorcentaje>* getParPorcentajen(){return pPorcentaje;}
};
#endif