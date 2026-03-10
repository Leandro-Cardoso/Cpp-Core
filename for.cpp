#include <iostream>

using namespace std;

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
