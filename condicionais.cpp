#include <iostream>

using namespace std;

int main() {
    bool condicao = true;

    // If e else:
    cout << endl << "IF E ELSE:" << endl;
    if(condicao) {
        cout << "\t" << condicao << " e verdadeiro." << endl;
    } else {
        cout << "\t" << condicao << " e falso." << endl;
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
    cout << "\tO numero " << numero << " e " << resposta << "." << endl;

    return 0;
}
