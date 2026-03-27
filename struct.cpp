#include <iostream>

struct Pessoa {
    std::string nome;
    int idade;

    void setAttribute(std::string nome, int idade) {
        this->nome = nome;
        this->idade = idade;
    }

    void print() {
        std::cout << "Nome: " << this->nome << "\nIdade: " << this->idade << "\n";
    }
};

int main() {
    Pessoa pessoa01, pessoa02, pessoa03;

    //pessoa01.nome = "Leandro";
    //pessoa01.idade = 36;

    //std::cout << "\nNome: " << pessoa01.nome << "\nIdade: " << pessoa01.idade << "\n\n";

    std::cout << "\n";

    pessoa01.setAttribute("Leandro", 36);
    pessoa02.setAttribute("Luna", 25);
    pessoa03.setAttribute("Joao", 43);

    pessoa01.print();
    std::cout << "\n";
    pessoa02.print();
    std::cout << "\n";
    pessoa03.print();

    std::cout << "\n";

    return 0;
}
