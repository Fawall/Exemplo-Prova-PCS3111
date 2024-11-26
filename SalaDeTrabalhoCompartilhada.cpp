#include "SalaDeTrabalhoCompartilhada.h"
#include <stdexcept>
#include "algorithm"
#include "iterator"
#include <iostream>

using namespace std;

// ALTERE
SalaDeTrabalhoCompartilhada::SalaDeTrabalhoCompartilhada(string nome, int metragem) : SalaDeTrabalho(nome,metragem){
    this->nome = nome;
    this->metragem = metragem;
    this->mesasReservadas = new vector<Mesa*>();
}

// DESTRUA O VECTOR CRIADO, MAS NAO DESTRUA DUAS VEZES AS MESAS
SalaDeTrabalhoCompartilhada::~SalaDeTrabalhoCompartilhada() {
    delete mesasReservadas;
}

void SalaDeTrabalhoCompartilhada::reservar(Mesa* m) {
    vector<Mesa* > *mesasSala = getMesas();

    vector<Mesa *>::iterator i = find(mesasReservadas->begin(), mesasReservadas->end(), m);
    vector<Mesa *>::iterator j = find(mesasSala->begin(), mesasSala->end(), m);
    
    if(i != mesasReservadas->end()){
        throw new logic_error("Mesa ja reservada");
    }
    if (j == mesasSala->end())
    {
        throw new invalid_argument("Mesa nao faz parte da sala");
    }

    mesasReservadas->push_back(m);
    // IMPLEMENTE
}

void SalaDeTrabalhoCompartilhada::reservar() {

    try {
        vector<Mesa* > *mesasDaSala = getMesas();

        for(unsigned int i = 0; i < mesasReservadas->size(); i++){
            reservar( (*mesasDaSala)[i]);
        }

    }
    catch(invalid_argument *e){
        cout << e->what() << endl;
    }
    catch(logic_error *e){
        cout << e->what() << endl;
    }

    // IMPLEMENTE USANDO reservar(Mesa* m)
}

vector<Mesa*>* SalaDeTrabalhoCompartilhada::getMesasReservadas() {
    // ALTERE
    return mesasReservadas;
}

double SalaDeTrabalhoCompartilhada::getPreco(){
    return mesasReservadas->size() * 85;
}
