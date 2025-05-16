#include <iostream>
#include "ContaBancaria.h"
#include "Cliente.h"
using namespace std;
//Implementação do construtor
ContaBancaria::ContaBancaria(int num, Cliente t, double s)
    : numero(num), titular(t), saldo(s) {}


int ContaBancaria::getnumero(){
    return numero;
}


void ContaBancaria::depositar(double valor){
    saldo += valor;
}


void ContaBancaria::sacar(double valor){
    if (valor <= saldo){
        saldo -= valor;
    } else {
        cout << "Saldo insuficiente para saque!" << endl;
    }
}


void ContaBancaria::transferir(double valor, ContaBancaria &destino){
    if (valor <= saldo){
        saldo -= valor;
        destino.depositar(valor);
        cout << "Transferido: R$ " << valor << " da conta " << numero << " para a conta " << destino.getnumero() << endl;
    } else {
        cout << "Saldo insuficiente para a transferência!!!" << endl;
    }
}


void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2){
    if (valor <= saldo){
        saldo -= valor;
        double valorfinal;
        valorfinal = valor / 2;
        destino1.depositar(valorfinal);
        destino2.depositar(valorfinal);
        cout << "Transferido: R$ " << valorfinal << " para cada conta " << "(" << destino1.getnumero() << " e " << destino2.getnumero() << ") " << "da conta " << numero << endl;
    } else{
        cout << "Saldo insuficiente para a transferência!!!" << endl;
    }
}



void ContaBancaria::exibirsaldo(){
    cout << "Saldo atual da conta " << numero << " : R$ " << saldo << endl;
}

void ContaBancaria::exibirinformacoes(){
    cout << "Titular: " << titular.getnome() << ", CPF: " << titular.getcpf() << endl;
    cout << "Número da Conta: " << numero << ", Saldo: R$ " << saldo << endl;
    cout << endl; 
}
