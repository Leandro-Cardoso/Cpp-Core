#include <iostream>

struct Pessoa
{
    int id = 1;
    int idade = 36;
};


int main() {
    int numero = 5;

    // Acessando informações da variavel:
    std::cout << "\nValor: " << numero << "\n";
    std::cout << "Posição de memoria: " << &numero << "\n";

    // Criando ponteiro:
    int *ponteiro = &numero;

    // Acessando informações do ponteiro:
    std::cout << "\nPosição de memoria do ponteiro: " << ponteiro << "\n";
    std::cout << "Valor: " << *ponteiro << "\n";

    // Com objetos e estruturas:
    Pessoa pessoa;
    std::cout << "\nID: " << pessoa.id << "\nIDADE: " << pessoa.idade << "\n";

    // Com objetos e estruturas (ponteiro):
    Pessoa *pessoaPonteiro = &pessoa;
    std::cout << "\nID: " << pessoaPonteiro->id << "\nIDADE: " << pessoaPonteiro->idade << "\n";

    // Endereços em uma lista:
    int *p;
    int vetor[5];
    std::cout << "\nEnderecos:\n";
    for (int i = 0; i < 5; i++) {
        p = &vetor[i];
        // Diferenca de 4 porque int tem 4 bytes:
        std::cout << "\t" << p << "\n";
    }

    // Alterar valor de um endereco:
    *p = 10;
    std::cout << "\nEndereco: " << p << "\nValor: " << *p;

    std::cout << "\n\n";

    return 0;
}
