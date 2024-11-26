#include "Sala.h"
#include <stdexcept>
#include <iostream>
#include <stdexcept>


using namespace std;

Sala::Sala(string nome, int metragem) {
    if(metragem <= 0){
        throw new invalid_argument("Metragem invalida");
    }
    /*
        Para lançar execeções é necessário utilizar a biblioteca padrão stdexcept>
    */

    this->nome = nome;
    this->metragem = metragem;
}

Sala::~Sala() {
}

string Sala::getNome() {
    // ALTERE
    return this->nome;
}

int Sala::getMetragem() {
    // ALTERE
    return this->metragem;
}

void Sala::imprimir() {
    cout << "Sala " << getNome() << " (" << getMetragem() << ") - R$ " << getPreco() << endl;
}

double Sala::getPreco(){}

// IMPLEMENTE OS DEMAIS METODOS
