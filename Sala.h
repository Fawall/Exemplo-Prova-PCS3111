#ifndef SALA_H
#define SALA_H

#include <string>
using namespace std;

// COMPLETE A CLASSE
// FACA A CLASSE ABSTRATA, COM O METODO getPreco ABSTRATO
class Sala {

private:
    string nome;
    int metragem;


public:
    Sala(string nome, int metragem);
    virtual ~Sala();

    virtual string getNome();
    virtual int getMetragem();
    virtual void imprimir();

    virtual double getPreco();

    /* 
        Colocar virtual antes de um método na classe de definição
        Faz com que o método se torne abstrato.
    */

// DEFINA ATRIBUTOS SE NECESSARIO
};

#endif // SALA_H
