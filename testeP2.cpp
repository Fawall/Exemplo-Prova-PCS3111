#include <iostream>

#include "Mesa.h"
#include "SalaDeReuniao.h"
#include "SalaDeTrabalho.h"
#include "SalaDeTrabalhoCompartilhada.h"

using namespace std;

void teste()
{
    SalaDeReuniao *sala = new SalaDeReuniao("oi", 10);
    // cout << sala->getNome();
    sala->imprimir();
}

void testeP2()
{
    // Crie uma sala de reuniao com nome "A1" e 100m2,
    // colocando-a numa variavel do tipo Sala e a imprima
    try
    {
        Sala *sala = new SalaDeReuniao("A1", 100);
        sala->imprimir();
        // Altere o valor do preco por metro quadrado para 15 das salas de reuniao

        dynamic_cast<SalaDeReuniao *>(sala)->setPrecoPorMetroQuadrado(15);

        // imprima novamente a sala de reuniao com nome "A1"

        sala->imprimir();

        // Crie uma sala de trabalho com nome "A2" e 100m2,
        // colocando-a numa variavel do tipo Sala

        Sala *salaTrabalho = new SalaDeTrabalho("A2", 100);

        // Adicione as seguintes mesas a sala A2
        // Mesa com id 1 e tamanho de 10m2
        Mesa *m = new Mesa(1, 10);
        dynamic_cast<SalaDeTrabalho *>(salaTrabalho)->adicionar(m);

        // Mesa com id 2 e tamanho de 12m2
        Mesa *m2 = new Mesa(2, 120);
        dynamic_cast<SalaDeTrabalho *>(salaTrabalho)->adicionar(m2);

        // Imprima a sala de trabalho com nome A2
        salaTrabalho->imprimir();

        // Crie uma sala de trabalho compartilhada com nome "A3" e 30m2,
        // colocando-a em uma vari�vel do tipo SalaDeTrabalhoCompartilhada

        SalaDeTrabalhoCompartilhada *salaTrabalhoCompartilhada = new SalaDeTrabalhoCompartilhada("A3", 30);

        // Adicione as seguintes mesas:
        // Mesa com id 3 e tamanho de 10m2
        // Mesa com id 4 e tamanho de 12m2

        Mesa *m3 = new Mesa(3, 10);
        salaTrabalhoCompartilhada->adicionar(m3);
        Mesa *m4 = new Mesa(4, 12);
        salaTrabalhoCompartilhada->adicionar(m4);

        //  Reserve somente a mesa com id 4 e imprima a sala de trabalho com nome A3.
        salaTrabalhoCompartilhada->reservar(m4);

        salaTrabalhoCompartilhada->imprimir();

        delete sala;
        delete salaTrabalho;
        delete salaTrabalhoCompartilhada;

    }catch(logic_error *e){
        cout << e->what() << endl;
    }
    catch(invalid_argument *e){
        cout << e->what() << endl;
    }

    // Destrua todas as salas
}
