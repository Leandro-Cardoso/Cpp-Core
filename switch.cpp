#include <iostream>

using namespace std;

int main() {
    int opcao;

    cout << endl << "Digite um numero de 1 a 5: ";
    cin >> opcao;
    cout << endl;

    switch(opcao) {
        case 1:
            cout << "Voce digitou 1 !!!";
            break;
        case 2:
            cout << "Voce digitou 2 !!!";
            break;
        case 3:
        case 4:
        case 5: // Caso seja 3, 4 ou 5.
            cout << "Voce digitou 3, 4 ou 5 !!!";
            break;
        default:
            cout << "Voce digitou outro valor !!!";
    }

    cout << endl << endl;

    return 0;
}
