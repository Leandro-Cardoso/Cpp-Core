#include <iostream>
#include <string>
#include <conio.h>

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

// HERANÇA:
class Usuario : public Pessoa {
    private:
        string login;
        string senha;
    public:
        Usuario(string nome, int idade, string login, string senha);
}

Usuario::Usuario(string nome, int idade, string login, string senha) : Pessoa(nome, idade) {
    this->login = login;
    this->senha = senha;
}
