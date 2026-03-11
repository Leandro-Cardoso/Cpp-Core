#include <iostream>

using namespace std;

// No "for" pode ser passado mais de uma variavel ou incrementado ou decrementado mais de uma variavel.
// EX: for (int i = 0, int j = 10; CONDICAO; i++, j--) {INSTRUCOES}

int main() {
    int opcao;

    cout << endl << "Digite um numero inteiro: ";
    cin >> opcao;
    cout << "Voce digitou '" << opcao << "' !!!" << endl;

    for (int i = 0; i <= opcao; i++) {
        cout << endl << i;
    }

    cout << endl;

    return 0;
}
