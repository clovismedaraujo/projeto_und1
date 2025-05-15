#include <iostream>
#include <string>
#include "Cliente.h"
#include "ContaBancaria.h"
using namespace std;

int main(){
    Cliente cliente1("Ana", "111.111.111-11");
    Cliente cliente2("Bruno", "222.222.222-22");
    Cliente cliente3("Carla", "333.333.333-33");

    
    ContaBancaria conta1(1001, cliente1, 1000.0);
    ContaBancaria conta2(1002, cliente2);
    ContaBancaria conta3(1003, cliente3);

    conta1.exibirsaldo();

    conta2.exibirsaldo();

    conta1.transferir(200.0, conta2);

    conta1.transferir(300.0, conta2, conta3);

    cout << endl;
    conta1.exibirinformacoes();
    conta2.exibirinformacoes();
    conta3.exibirinformacoes();

    return 0;
}
