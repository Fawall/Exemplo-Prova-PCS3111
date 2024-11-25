#include "Mesa.h"
#include <iostream>

using namespace std;

// NAO ALTERE ESTA CLASSE
Mesa::Mesa(int id, int tamanho): id(id), tamanho(tamanho) {
}

Mesa::~Mesa() {
    cout << "Mesa " << id << " destruida" << endl;
}

int Mesa::getId() {
    return id;
}

int Mesa::getTamanho() {
    return tamanho;
}

void Mesa::imprimir() {
    cout << "Mesa: " << id << " (" << tamanho << "m2)" << endl;
}
