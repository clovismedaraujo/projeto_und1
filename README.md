# 💳 Sistema Bancário em C++

Este projeto é uma simulação de um sistema bancário simples em C++, que utiliza os principais conceitos de **Programação Orientada a Objetos (POO)**. Foi desenvolvido com organização modular (arquivos `.h` e `.cpp`) e conta com um `Makefile` para facilitar a compilação.

---

## 🔧 Funcionalidades

- Cadastro de clientes com nome e CPF
- Criação de contas bancárias com número e titular
- Depósito de valores
- Saque com verificação de saldo
- Transferência de valores entre contas
- Sobrecarga do método de transferência:
  - Transferência para uma conta destino
  - Transferência dividida entre duas contas
- Exibição de saldo e informações do titular

---

## 🧠 Conceitos aplicados

- Encapsulamento (`private`/`public`)
- Construtores personalizados
- Sobrecarga de métodos
- Separação de interface (`.h`) e implementação (`.cpp`)
- Compilação automatizada com `Makefile`

---

## 📁 Estrutura do Projeto

.
├── Cliente.h
├── Cliente.cpp
├── ContaBancaria.h
├── ContaBancaria.cpp
├── sistbancario.cpp # Função main()
├── Makefile
└── README.md

yaml
Copiar
Editar

---

## 🚀 Como compilar e executar

### 1. Compilar com `make`:
```bash
make
2. Executar o programa:
bash
Copiar
Editar
./sistbancario
3. Limpar os arquivos objetos e o executável:
bash
Copiar
Editar
make clean
