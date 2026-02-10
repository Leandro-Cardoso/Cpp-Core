#include <iostream>
#include <sstream>
#include <string>
#include <conio.h>

using namespace std;

// CLASSE MÃE:
class Pessoa {
protected: // PRECISA SER PROTECTED PARA ACESSAR DA CLASSE FILHA.
    string nome;
    int idade;
public:
    Pessoa(string nome, int idade);
    ~Pessoa();
    virtual string getInfo(); // Sobrecarga -> Permite sobreescrever o metodo.
};

Pessoa::Pessoa(string nome, int idade) : nome(nome), idade(idade) {};
Pessoa::~Pessoa() { cout << "Objeto destruído" << endl; };
string Pessoa::getInfo() {
    stringstream ss;
    ss << this->idade;
    return this->nome + " " + ss.str();
}

// HERANÇA:
class Usuario : public Pessoa {
    private:
        string login;
        string senha;
    public:
        Usuario(string nome, int idade, string login, string senha);
        string getInfo();
};

Usuario::Usuario(string nome, int idade, string login, string senha) : Pessoa(nome, idade), login(login), senha(senha) {};

// SOBREESCREVENDO:
string Usuario::getInfo() {
    return Pessoa::getInfo() + " -> " + this->login + " " + this->senha;
};

// TESTE:
int main() {
    Pessoa pessoa = Pessoa("Fulano", 100);
    cout << endl << pessoa.getInfo() << endl;

    Usuario usuario = Usuario("Leandro", 36, "leandro", "123456");
    cout << usuario.getInfo() << endl;
};
