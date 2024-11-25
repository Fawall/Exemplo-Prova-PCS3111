#ifndef SALADETRABALHOCOMPARTILHADA_H
#define SALADETRABALHOCOMPARTILHADA_H

#include <string>
#include <vector>
#include "Mesa.h"
using namespace std;

// COMPLETE A DEFINICAO DA CLASSE
class SalaDeTrabalhoCompartilhada {
public:
    SalaDeTrabalhoCompartilhada(string nome, int metragem);
    virtual ~SalaDeTrabalhoCompartilhada();

    void reservar(Mesa* m);
    void reservar();

    vector<Mesa*>* getMesasReservadas();

// DEFINA ATRIBUTOS SE NECESSARIO
};

#endif // SALADETRABALHOCOMPARTILHADA_H
