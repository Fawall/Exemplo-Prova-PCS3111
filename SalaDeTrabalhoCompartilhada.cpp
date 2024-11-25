#include "SalaDeTrabalhoCompartilhada.h"
#include <stdexcept>

using namespace std;

// ALTERE
SalaDeTrabalhoCompartilhada::SalaDeTrabalhoCompartilhada(string nome, int metragem) {
}

// DESTRUA O VECTOR CRIADO, MAS NAO DESTRUA DUAS VEZES AS MESAS
SalaDeTrabalhoCompartilhada::~SalaDeTrabalhoCompartilhada() {
}

void SalaDeTrabalhoCompartilhada::reservar(Mesa* m) {
    // IMPLEMENTE
}

void SalaDeTrabalhoCompartilhada::reservar() {
    // IMPLEMENTE USANDO reservar(Mesa* m)
}

vector<Mesa*>* SalaDeTrabalhoCompartilhada::getMesasReservadas() {
    // ALTERE
    return NULL;
}
