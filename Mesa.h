#ifndef MESA_H
#define MESA_H

// NAO ALTERE ESTA CLASSE
class Mesa {
public:
    Mesa(int id, int tamanho);
    virtual ~Mesa();

    int getId();
    int getTamanho();

    void imprimir();
private:
    int id;
    int tamanho;
};

#endif // MESA_H
