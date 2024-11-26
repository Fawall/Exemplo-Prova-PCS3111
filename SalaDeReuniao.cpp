#include "SalaDeReuniao.h"
#include <stdexcept>
#include "Sala.h"

using namespace std;

// ALTERE
SalaDeReuniao::SalaDeReuniao(string nome, int metragem) : Sala(nome, metragem) {
    this->nome = nome;
    this->metragem = metragem;
}

SalaDeReuniao::~SalaDeReuniao() {
}

/*
    Em atributos estáticos, é necessário fazer o "link" deles
    fora do método para poder utilizar o atributo   
*/

double SalaDeReuniao::preco = 10;

void SalaDeReuniao::setPrecoPorMetroQuadrado(double valor) {
    // IMPLEMENTE
    if(valor <= 0){
        throw new invalid_argument("Valor invalido");
    }
    SalaDeReuniao::preco = valor;

}

double SalaDeReuniao::getPrecoPorMetroQuadrado() {
    // ALTERE
    return SalaDeReuniao::preco;
}

double SalaDeReuniao::getPreco(){
    return metragem * preco;
}


void imprimir();
