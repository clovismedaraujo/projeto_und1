#include <string>
#include "Cliente.h"
using namespace std;

    //Implementação do Construtor
    Cliente::Cliente(string n, string c){
        nome = n;
        cpf = c;
    }

    //Implementação das Funções getters
    string Cliente::getnome(){
        return nome;
    }
    string Cliente::getcpf(){
        return cpf; 
    }
