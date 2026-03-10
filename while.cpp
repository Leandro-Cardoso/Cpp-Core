#include <iostream>

using namespace std;

int main() {
    int opcao;
    
    // É possivel por a condição aqui: while (opcao++<10) {instrucoes;}
    while (true) {
        cout << endl << "Digite um numero inteiro ou '0' para sair: ";
        cin >> opcao;
        cout << "Voce digitou '" << opcao << "' !!!";

        if (opcao == 0) {
            break;
        }
    }

    cout << endl << endl << "Voce saiu !!!" << endl;

    return 0;
}
