#ifndef SALADETRABALHO_H
#define SALADETRABALHO_H

#include <string>
#include <vector>
#include "Mesa.h"
#include "Sala.h"

using namespace std;

// COMPLETE A DEFINICAO DA CLASSE
class SalaDeTrabalho : public Sala {

// DEFINA ATRIBUTOS SE NECESSARIO, MAS NAO PROTECTED
private:
    string nome;
    int metragem;
    vector<Mesa *> *mesas;


public:
    SalaDeTrabalho(string nome, int metragem);
    virtual ~SalaDeTrabalho();

    void adicionar(Mesa* m);
    vector<Mesa*>* getMesas();
    double getPreco();

    
};

#endif // SALADETRABALHO_H
