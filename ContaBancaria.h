#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
#include "Cliente.h"


class ContaBancaria
{
private:
    int numero;
    double saldo;
    Cliente titular;

public:
    ContaBancaria(int num, Cliente t, double s = 0);
    void depositar(double valor);
    void sacar(double valor);
    void transferir(double valor, ContaBancaria &destino);
    void transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2);
    void exibirsaldo();
    void exibirinformacoes();
    int getnumero();
};

#endif