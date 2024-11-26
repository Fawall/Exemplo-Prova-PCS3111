#include "SalaDeTrabalho.h"
#include <stdexcept>

using namespace std;

// ALTERE
SalaDeTrabalho::SalaDeTrabalho(string nome, int metragem) : Sala(nome, metragem) {
    this->nome = nome;
    this->metragem = metragem;
    this->mesas = new vector<Mesa*>();
}

SalaDeTrabalho::~SalaDeTrabalho() {
    for(unsigned int i = 0; i < mesas->size(); i++){
        delete (*mesas)[i];
    }
    delete mesas;
    // DESTRUA AS MESAS E O VECTOR
}

void SalaDeTrabalho::adicionar(Mesa* m) {
    /*  O unsigned int só serve para nao dar warning quando compilar o programa */
    int tamanhoMesas = 0;

    for(unsigned int i = 0; i < mesas->size(); i++){
        if((*mesas)[i] == m){
            throw new logic_error("Mesa ja existente");
        }
        tamanhoMesas += (*mesas)[i]->getTamanho();
    }

    if(tamanhoMesas > metragem){
        throw new logic_error("Mesa nao cabe");
    }

    mesas->push_back(m);
    // IMPLEMENTE
}

vector<Mesa*>* SalaDeTrabalho::getMesas() {
    // ALTERE
    return mesas;
}

double SalaDeTrabalho::getPreco(){
    return mesas->size() * 100;
}