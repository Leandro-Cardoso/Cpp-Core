#include <iostream>

using namespace std;

int main() {
    bool condicao = true;

    // If e else:
    cout << endl << "IF E ELSE:" << endl;
    if(condicao) {
        cout << "\t" << condicao << " é verdadeiro." << endl;
    } else {
        cout << "\t" << condicao << " é falso." << endl;
    }
    // Tambem existe o "else if() {}".

    // Operadores logicos:
    // and ou &&
    // or ou ||
    // not -> inverte teste logico.

    // Operador ternario:
    cout << endl << "OPERADOR TERNARIO:" << endl;
    int numero = 2;
    string resposta = (numero % 2 == 0) ? "par" : "impar";
    cout << "\tO numero " << numero << " é " << resposta << "." << endl;

    return 0;
}
