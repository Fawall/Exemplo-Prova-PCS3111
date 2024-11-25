#ifndef SALA_H
#define SALA_H

#include <string>
using namespace std;

// COMPLETE A CLASSE
// FACA A CLASSE ABSTRATA, COM O METODO getPreco ABSTRATO
class Sala {
public:
    Sala(string nome, int metragem);
    virtual ~Sala();

    string getNome();
    int getMetragem();
    void imprimir();

    double getPreco();

// DEFINA ATRIBUTOS SE NECESSARIO
};

#endif // SALA_H
