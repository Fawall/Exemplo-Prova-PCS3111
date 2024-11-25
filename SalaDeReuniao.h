#ifndef SALADEREUNIAO_H
#define SALADEREUNIAO_H

#include <string>

using namespace std;

// COMPLETE A DEFINICAO DA CLASSE
class SalaDeReuniao {
public:
    SalaDeReuniao(string nome, int metragem);
    virtual ~SalaDeReuniao();

    static void setPrecoPorMetroQuadrado(double valor);
    static double getPrecoPorMetroQuadrado();

// DEFINA ATRIBUTOS SE NECESSARIO
};

#endif // SALADEREUNIAO_H
