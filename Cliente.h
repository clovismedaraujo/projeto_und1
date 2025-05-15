#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
using namespace std;

class Cliente{
private:
    string nome, cpf;
public:
    //Construtor
    Cliente(string n, string c);

    //Funções getters para os atributos privados dos clientes
    string getnome();
    string getcpf();
};
#endif