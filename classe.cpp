#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

// INICIALIZA SEM VALOR PADRÃO:
class Pessoa {
private:
    string nome;
    int idade;
public:
    Pessoa(string nome, int idade);
    ~Pessoa();
    string getNome();
};

Pessoa::Pessoa(string nome, int idade) {
    this->nome = nome;
    this->idade = idade;
};

Pessoa::~Pessoa() {
    cout << "Objeto destruído" << endl;
};

string Pessoa::getNome() {
    return this->nome;
};

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

int main() {
    Pessoa pessoa = Pessoa("Leandro", 36);
    cout << pessoa.getNome() << endl;
};
