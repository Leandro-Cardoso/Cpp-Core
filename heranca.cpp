#include <iostream>
#include <sstream>
#include <string>
#include <conio.h>

using namespace std;

class Pessoa {
protected: // PRECISA SER PROTECTED PARA ACESSAR DA CLASSE FILHA.
    string nome;
    int idade;
public:
    Pessoa(string nome, int idade);
    ~Pessoa();
};

Pessoa::Pessoa(string nome, int idade) : nome(nome), idade(idade) {};

Pessoa::~Pessoa() {
    cout << "Objeto destruído" << endl;
};

// HERANÇA:
class Usuario : public Pessoa {
    private:
        string login;
        string senha;
    public:
        Usuario(string nome, int idade, string login, string senha);
        ~Usuario();
        string getInfo();
};

Usuario::Usuario(string nome, int idade, string login, string senha) : Pessoa(nome, idade) {
    this->login = login;
    this->senha = senha;
}

Usuario::~Usuario() {
    cout << "Objeto destruído" << endl;
};

string Usuario::getInfo() {
    stringstream ss;
    ss << this->idade;
    return this->nome + " " + ss.str() + " -> " + this->login + " " + this->senha;
};

int main() {
    Usuario usuario = Usuario("Leandro", 36, "leandro", "123456");
    cout << endl << usuario.getInfo() << endl;
};
