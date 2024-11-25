#ifndef SALADETRABALHO_H
#define SALADETRABALHO_H

#include <string>
#include <vector>
#include "Mesa.h"

using namespace std;

// COMPLETE A DEFINICAO DA CLASSE
class SalaDeTrabalho {
public:
    SalaDeTrabalho(string nome, int metragem);
    virtual ~SalaDeTrabalho();

    void adicionar(Mesa* m);
    vector<Mesa*>* getMesas();
private:
    // DEFINA ATRIBUTOS SE NECESSARIO, MAS NAO PROTECTED
};

#endif // SALADETRABALHO_H
