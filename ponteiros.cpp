#include <iostream>
#include <conio.h>

using namespace std;

struct Pessoa
{
    int id = 1;
    int idade = 36;
};


int main() {
    int numero = 5;

    // Acessando informações da variavel:
    cout << endl << "Valor: " << numero << endl;
    cout << "Posição de memoria: " << &numero << endl;

    // Criando ponteiro:
    int *ponteiro = &numero;

    // Acessando informações do ponteiro:
    cout << endl << "Posição de memoria do ponteiro: " << ponteiro << endl;
    cout << "Valor: " << *ponteiro << endl;

    // Com objetos e estruturas:
    Pessoa pessoa = Pessoa();
    cout << endl << "ID: " << pessoa.id << endl << "IDADE: " << pessoa.idade << endl;

    // Com objetos e estruturas (ponteiro):
    Pessoa *pessoaPonteiro = &pessoa;
    cout << endl << "ID: " << pessoaPonteiro->id << endl << "IDADE: " << pessoaPonteiro->idade << endl;

    return 0;
}
