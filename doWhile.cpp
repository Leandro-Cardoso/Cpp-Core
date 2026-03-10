#include <iostream>

using namespace std;

int main() {
    int opcao;

    do {
        cout << endl << "Digite um numero inteiro ou '0' para sair: ";
        cin >> opcao;
        cout << "Voce digitou '" << opcao << "' !!!";
    }while (opcao != 0);

    cout << endl << endl << "Voce saiu !!!" << endl;

    return 0;
}
