#include <iostream>

using namespace std;

// "int argc" quantidade de argumentos passados no terminal.
// "char *argv[]" armazena os argumentos passados no terminal.

int main(int argc, char *argv[]) {
    cout << endl << "Nome do programa: " << argv[0] << endl;

    cout << endl << "Agumentos:";

    if (argc == 1) {
        cout << endl << "Não possui argumentos passados.";
    }

    // Printar argumentos passados:
    for (int i = 1; i <= argc; i++) {
        cout << endl << argv[i];
    }

    return 0;
}
