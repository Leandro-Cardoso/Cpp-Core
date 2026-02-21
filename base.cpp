#include <iostream> // Comandos base de saida e entrada.

using namespace std; // Indicação da biblioteca padrão.

// Função principal e onde o programa inicia (retorna int).
int main() {
    string nome;

    cout << endl << "Nome: "; // Saida de informacao.
    cin >> nome; // Entrada de informacao.

    cout << endl << endl << "Ola, " << nome << " !!!" << endl << endl;

    //system("pause"); // Pausa o programa.

    return 0; // Final do programa.
}
