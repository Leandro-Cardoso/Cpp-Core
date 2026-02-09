#include <iostream>
#include <string>
#include <conio.h>

// INICIALIZA SEM VALOR PADRÃO:
class Pessoa {
private:
    string nome;
    int idade;
public:
    Pessoa(string nome, int idade);
    ~Pessoa();
};

Pessoa::Pessoa(string nome, int idade) {
    this->nome = nome;
    this->idade = idade;
}

Pessoa::~Pessoa(
    cout << "Objeto destruído" << endl;
)

// INICIALIZA COM VALOR PADRÃO:
/*
class Pessoa {
private:
    string nome;
    int idade;
public:
    Pessoa(string nome, int idade);
    ~Pessoa();
};

Pessoa::Pessoa(string nome, int idade) : nome(nome), idade(idade) {}

Pessoa::~Pessoa(
    cout << "Objeto destruído" << endl;
)
*/
