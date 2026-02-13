#include <iostream>
#include <conio.h>

using namespace std;

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

    return 0;
}
