#ifndef SALADEREUNIAO_H
#define SALADEREUNIAO_H

#include <string>
#include "Sala.h"

using namespace std;

// COMPLETE A DEFINICAO DA CLASSE
class SalaDeReuniao : public Sala {

private:
    string nome;
    int metragem;
    static double preco;

public:
    SalaDeReuniao(string nome, int metragem);
    virtual ~SalaDeReuniao();

    static void setPrecoPorMetroQuadrado(double valor);
    static double getPrecoPorMetroQuadrado();

    double getPreco();

    

// DEFINA ATRIBUTOS SE NECESSARIO
};

#endif // SALADEREUNIAO_H
