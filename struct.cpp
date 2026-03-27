#include <iostream>

struct Pessoa {
    std::string nome;
    int idade;
};

int main() {
    Pessoa pessoa01;

    pessoa01.nome = "Leandro";
    pessoa01.idade = 36;

    std::cout << "\nNome: " << pessoa01.nome << "\nIdade: " << pessoa01.idade << "\n\n";

    return 0;
}
